#include "qdataprotocol.h"


QDataProtocol::QDataProtocol( QObject* parent ) : QObject( parent )
{
    pCodec = QCommonLibrary::GetTextCodec( );
    const QString strToken = QCommonLibrary::GetDataToken( );
    byDataToken = pCodec->fromUnicode( strToken );
}

QDataProtocol::~QDataProtocol( )
{

}
QDataProtocol::ProtocolData& QDataProtocol::GetProtocolData( )
{
    return dataPackage;
}

bool QDataProtocol::ParseCommonHeader( QBuffer &buffer, QByteArray &byData )
{
    qint32 nUInt32Len = sizeof ( quint32 );
    bool bRet = true;

    byData = buffer.read( nUInt32Len );
    if ( byData.isEmpty( ) ) {
        bRet = false;
        goto ERROR_PROCESS;
    }
    dataPackage.header.common.nDataLength = N2H< quint32 >( byData );

    byData = buffer.read( nUInt32Len );
    if ( byData.isEmpty( ) ) {
        bRet = false;
        goto ERROR_PROCESS;
    }
    dataPackage.header.common.nReserved = N2H< quint32 >( byData );

    byData = buffer.read( nUInt32Len );
    if ( byData.isEmpty( ) ) {
        bRet = false;
        goto ERROR_PROCESS;
    }
    dataPackage.header.common.eParcelType = ( PackageType ) N2H< quint32 >( byData );

    ERROR_PROCESS:
    return bRet;
}

bool QDataProtocol::ParseTableHeader( QBuffer &buffer, QByteArray &byData )
{
    bool bRet = true;
    qint32 nUInt32Len = sizeof ( quint32 );
    qint32 nUInt16Len = sizeof ( quint16 );

    byData = buffer.read( nUInt32Len );
    if ( byData.isEmpty( ) ) {
        bRet = false;
        goto ERROR_PROCESS;
    }
    dataPackage.header.aux.headerTable.eType = ( TableType ) N2H< quint32 >( byData );

    byData = buffer.read( nUInt16Len );
    if ( byData.isEmpty( ) ) {
        bRet = false;
        goto ERROR_PROCESS;
    }
    dataPackage.header.aux.headerTable.nRowCount = N2H< quint16 >( byData );

    byData = buffer.read( nUInt16Len );
    if ( byData.isEmpty( ) ) {
        bRet = false;
        goto ERROR_PROCESS;
    }
    dataPackage.header.aux.headerTable.nColumnCount = N2H< quint16 >( byData );

    byData = buffer.read( nUInt32Len );
    if ( byData.isEmpty( ) ) {
        bRet = false;
        goto ERROR_PROCESS;
    }
    dataPackage.header.aux.headerTable.nReserved = N2H< quint32 >( byData );

    ERROR_PROCESS:
    return bRet;
}

bool QDataProtocol::ParseFileHeader( QBuffer &buffer, QByteArray &byData )
{
    qint32 nUInt32Len = sizeof ( quint32 );
    bool bRet = true;

    byData = buffer.read( nUInt32Len );
    if ( byData.isEmpty( ) ) {
        bRet = false;
        goto ERROR_PROCESS;
    }
    dataPackage.header.aux.headerFile.eType = ( FileType ) N2H< quint32 >( byData );

    byData = buffer.read( nUInt32Len );
    if ( byData.isEmpty( ) ) {
        bRet = false;
        goto ERROR_PROCESS;
    }
    dataPackage.header.aux.headerFile.nNameLength = N2H< quint32 >( byData );

    byData = buffer.read( nUInt32Len );
    if ( byData.isEmpty( ) ) {
        bRet = false;
        goto ERROR_PROCESS;
    }
    dataPackage.header.aux.headerFile.nContentLength = N2H< quint32 >( byData );

    byData = buffer.read( nUInt32Len );
    if ( byData.isEmpty( ) ) {
        bRet = false;
        goto ERROR_PROCESS;
    }
    dataPackage.header.aux.headerFile.nReserved = N2H< quint32 >( byData );

    ERROR_PROCESS:
    return bRet;
}

bool QDataProtocol::ParseCustomHeader( QBuffer &buffer, QByteArray &byData )
{
    bool bRet = true;

    return bRet;
}

bool QDataProtocol::ParseAuxHeader( QBuffer &buffer, QByteArray &byData )
{
    bool bRet = true;

    switch ( dataPackage.header.common.eParcelType ) {
    case PackageDatabase :
        bRet = ParseTableHeader( byBuffer, byData );
        break;

    case PackageFile :
        bRet = ParseFileHeader( byBuffer, byData );
        break;

    case PackageCustom :
        bRet = ParseCustomHeader( byBuffer, byData );
        break;
    }

    return bRet;
}

bool QDataProtocol::ParseTableBody( QBuffer &buffer, QByteArray &byData )
{
    bool bRet = true;

    return bRet;
}

bool QDataProtocol::ParseFileBody( QBuffer &buffer, QByteArray &byData )
{
    bool bRet = true;

    return bRet;
}

bool QDataProtocol::ParseBody( QBuffer &buffer, QByteArray &byData )
{
    bool bRet = true;

    switch ( dataPackage.header.common.eParcelType ) {
    case PackageDatabase :
        bRet = ParseTableBody( buffer, byData );
        break;

    case PackageFile :
        bRet = ParseFileBody( buffer, byData );
        break;

    case PackageCustom :
        break;
    }

    return bRet;
}

bool QDataProtocol::ParsePackageData( QByteArray& byPackageData, QString& strInfo )
{
    byBuffer.setBuffer( &byPackageData );
    QByteArray byData;

    bool bRet = byBuffer.open( QIODevice::ReadOnly );
    if( !bRet ) {
        goto ERROR_PROCESS;
    }

    bRet = byBuffer.reset( );
    if( !bRet ) {
        goto ERROR_PROCESS;
    }

    byData = byBuffer.read( byDataToken.length( ) );
    if ( byData.isEmpty( ) ) {
        bRet = false;
        goto ERROR_PROCESS;
    }

    bRet = ParseCommonHeader( byBuffer, byData );
    if( !bRet ) {
        goto ERROR_PROCESS;
    }

    bRet = ParseAuxHeader( byBuffer, byData );
    if( !bRet ) {
        goto ERROR_PROCESS;
    }

    bRet = ParseBody( byBuffer, byData );

    ERROR_PROCESS:
    if( !bRet ) {
        strInfo = byBuffer.errorString( );
    }

    byBuffer.close( );

    return bRet;
}

QDataProtocol::CommonHeader& QDataProtocol::GetCommonHeader( QDataProtocol::ProtocolData &parcel )
{
    return parcel.header.common;
}

QByteArray& QDataProtocol::GetCommonHeaderDataToken( QDataProtocol::ProtocolData& parcel )
{
    return parcel.header.common.byDataToken;
}

quint32 QDataProtocol::GetCommonHeaderDataLength( QDataProtocol::ProtocolData& parcel )
{
    return parcel.header.common.nDataLength;
}

quint32& QDataProtocol::GetCommonHeaderReserved( QDataProtocol::ProtocolData& parcel )
{
    return parcel.header.common.nReserved;
}

QDataProtocol::PackageType QDataProtocol::GetCommonHeaderPackageType( QDataProtocol::ProtocolData& parcel )
{
    return parcel.header.common.eParcelType;
}

QDataProtocol::AuxHeader& QDataProtocol::GetAuxHeader( QDataProtocol::ProtocolData &parcel )
{
    return parcel.header.aux;
}

QDataProtocol::DataTableHeader& QDataProtocol::GetAuxDataTableHeader( QDataProtocol::ProtocolData& parcel )
{
    return parcel.header.aux.headerTable;
}

QDataProtocol::TableType QDataProtocol::GetAuxDataTableHeaderType( QDataProtocol::ProtocolData& parcel )
{
    return parcel.header.aux.headerTable.eType;
}

quint16 QDataProtocol::GetAuxDataTableHeaderRow( QDataProtocol::ProtocolData& parcel )
{
    return parcel.header.aux.headerTable.nRowCount;
}

quint16 QDataProtocol::GetAuxDataTableHeaderColumn( QDataProtocol::ProtocolData& parcel )
{
    return parcel.header.aux.headerTable.nColumnCount;
}

quint32 QDataProtocol::GetAuxDataTableHeaderReserved( QDataProtocol::ProtocolData& parcel )
{
    return parcel.header.aux.headerTable.nReserved;
}

QDataProtocol::FileHeader& QDataProtocol::GetAuxFileHeader( QDataProtocol::ProtocolData& parcel )
{
    return parcel.header.aux.headerFile;
}

QDataProtocol::FileType QDataProtocol::GetAuxFileHeaderType( QDataProtocol::ProtocolData& parcel )
{
    return parcel.header.aux.headerFile.eType;
}

quint32 QDataProtocol::GetAuxFileHeaderNameLength( QDataProtocol::ProtocolData& parcel )
{
    return parcel.header.aux.headerFile.nNameLength;
}

quint32 QDataProtocol::GetAuxFileHeaderContentLength( QDataProtocol::ProtocolData& parcel )
{
    return parcel.header.aux.headerFile.nContentLength;
}

quint32 QDataProtocol::GetAuxFileHeaderReserved( QDataProtocol::ProtocolData& parcel )
{
    return parcel.header.aux.headerFile.nReserved;
}

QDataProtocol::ProtocolBody& QDataProtocol::GetBody( QDataProtocol::ProtocolData &parcel )
{
    return parcel.body;
}

template< class T >
T QDataProtocol::H2N( T tValue )
{
    bool bLE = HostByteSequence( );
    tValue = ( bLE ? qFromLittleEndian< T >( tValue ) : qFromBigEndian< T >( tValue ) );

    return tValue;
}

template< typename T >
T QDataProtocol::N2H( QByteArray& byValue )
{
    const char* pData = byValue.data( );
    T tData = *( ( T* ) pData );

    bool bLE = HostByteSequence( );

    if ( bLE ) {
        tData = qToLittleEndian< T >( tData );
    }

    return tData;
}

bool QDataProtocol::HostByteSequence( )
{
    // true LE else BE
    quint8 cData[ ] = { 0x11, 0x22 };
    quint16 nData = 0x1122;
    quint8* pData = ( quint8* ) &nData;

    bool bRet = ( cData[ 0 ] == pData[ 0 ] ) && ( cData[ 1 ] == pData[ 1 ] );

    return bRet;
}
