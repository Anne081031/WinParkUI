#ifndef QDATAPROTOCOL_H
#define QDATAPROTOCOL_H

#include "DataProtocol_global.h"
#include "../CommonLibrary/qcommonlibrary.h"

// class template< typename T0, typename T1 >
// T0 Func( T1 &param );

// class template< typename T0, typename T1 >

class DATAPROTOCOLSHARED_EXPORT QDataProtocol : public QObject
{
    Q_OBJECT
public:

    // Enum type
    typedef enum __PackageType {
        PackageDatabase = 0,
        PackageFile,
        PackageCustom
    } PackageType;

    typedef enum __TableType {
        TableUser = 0,
        TableMonthCard,
        TableTimeCard,
        TableSaveCard,
        TableCustom
    } TableType;

    typedef enum __FileType {
        FileImage = 0,
        FileData,
        FileCustom
    } FileType;

    // Common Header
    typedef struct __CommonHeader {
        QByteArray byDataToken;
        quint32 nDataLength;
        quint32 nReserved;
        PackageType eParcelType;
    } CommonHeader;

    // Aux Header
    typedef struct __DataTableHeader {
        TableType eType;
        quint16 nRowCount;
        quint16 nColumnCount;
        quint32 nReserved;
    } DataTableHeader;

    typedef struct __FileHeader {
        FileType eType;
        quint32 nNameLength;
        quint32 nContentLength;
        quint32 nReserved;
    } FileHeader;

    typedef union __AuxHeader {
        DataTableHeader headerTable;
        FileHeader headerFile;
    } AuxHeader;

    typedef struct __ProtocolHeader {
        CommonHeader common;
        AuxHeader aux;
    } ProtocolHeader;

    // union can't have members of class/struct with constructor

    typedef struct __ProtocolBody {
        QByteArray byData;
    } ProtocolBody;

    typedef struct __ProtocolData {
        ProtocolHeader header;
        ProtocolBody body;
    } ProtocolData, *PProtocolData;

    QDataProtocol::CommonHeader& GetCommonHeader( QDataProtocol::ProtocolData& parcel );
    QByteArray& GetCommonHeaderDataToken( QDataProtocol::ProtocolData& parcel );
    quint32 GetCommonHeaderDataLength( QDataProtocol::ProtocolData& parcel );
    quint32& GetCommonHeaderReserved( QDataProtocol::ProtocolData& parcel );
    QDataProtocol::PackageType GetCommonHeaderPackageType( QDataProtocol::ProtocolData& parcel );

    QDataProtocol::AuxHeader& GetAuxHeader( QDataProtocol::ProtocolData& parcel );

    QDataProtocol::DataTableHeader& GetAuxDataTableHeader( QDataProtocol::ProtocolData& parcel );
    QDataProtocol::TableType GetAuxDataTableHeaderType( QDataProtocol::ProtocolData& parcel );
    quint16 GetAuxDataTableHeaderRow( QDataProtocol::ProtocolData& parcel );
    quint16 GetAuxDataTableHeaderColumn( QDataProtocol::ProtocolData& parcel );
    quint32 GetAuxDataTableHeaderReserved( QDataProtocol::ProtocolData& parcel );


    QDataProtocol::FileHeader& GetAuxFileHeader( QDataProtocol::ProtocolData& parcel );
    QDataProtocol::FileType GetAuxFileHeaderType( QDataProtocol::ProtocolData& parcel );
    quint32 GetAuxFileHeaderNameLength( QDataProtocol::ProtocolData& parcel );
    quint32 GetAuxFileHeaderContentLength( QDataProtocol::ProtocolData& parcel );
    quint32 GetAuxFileHeaderReserved( QDataProtocol::ProtocolData& parcel );

    QDataProtocol::ProtocolBody& GetBody( QDataProtocol::ProtocolData& parcel );

    QDataProtocol::ProtocolData& GetProtocolData( );
    bool ParsePackageData( QByteArray& byPackageData, QString& strInfo );

    QDataProtocol( QObject* parent = 0 );
    ~QDataProtocol( );

private:
    // Nested depency must typename C::X a;
    template< class T > T H2N( T tValue );
    template< typename T > T N2H( QByteArray& byValue );
    bool HostByteSequence( ); // true LE else BE

    bool ParseCommonHeader( QBuffer& buffer, QByteArray& byData );
    bool ParseAuxHeader( QBuffer& buffer, QByteArray& byData );
    bool ParseTableHeader( QBuffer& buffer, QByteArray& byData );
    bool ParseFileHeader( QBuffer& buffer, QByteArray& byData );
    bool ParseCustomHeader( QBuffer& buffer, QByteArray& byData );

    bool ParseBody( QBuffer& buffer, QByteArray& byData );
    bool ParseTableBody( QBuffer& buffer, QByteArray& byData );
    bool ParseFileBody( QBuffer& buffer, QByteArray& byData );

private:
    ProtocolData dataPackage;
    QByteArray byDataToken;
    QBuffer byBuffer;
    QTextCodec* pCodec;

signals:

public slots:

};

#endif // QDATAPROTOCOL_H
