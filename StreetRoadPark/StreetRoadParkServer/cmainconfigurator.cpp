#include "cmainconfigurator.h"

#define CONFIG_NAME_SERVER     "Config.ini"

CMainConfigurator::CMainConfigurator(QObject *parent) :
    QObject(parent)
{
    pSettings = new QSettings( CONFIG_NAME_SERVER, QSettings::IniFormat );
}

CMainConfigurator::~CMainConfigurator( )
{
    if ( NULL != pSettings ) {
        delete pSettings;
        pSettings = NULL;
    }
}

CMainConfigurator* CMainConfigurator::GetConfigurator( )
{
    static CMainConfigurator* pConfig = NULL;

    if ( NULL == pConfig ) {
        pConfig = new CMainConfigurator( );
    }

    return pConfig;
}

void CMainConfigurator::ReadIPPort( QLineEdit& edtIP, QSpinBox& sbPort )
{
    QString strKey = "Database/ServerIP";
    edtIP.setText( pSettings->value( strKey, "127.0.0.1" ).toString( ) );

    strKey = "Database/Port";
    sbPort.setValue( pSettings->value( strKey, 3306 ).toUInt( ) );
}

void CMainConfigurator::WriteIPPort( QString& strIP, quint16 nPort )
{
    QString strKey = "Database/ServerIP";
    pSettings->setValue( strKey, strIP );

    strKey = "Database/Port";
    pSettings->setValue( strKey, nPort );
}

void CMainConfigurator::ReadPortMaxConn( QSpinBox& sbPort, QSpinBox& sbMaxConn )
{
    QString strKey = "Network/ListenPort";
    sbPort.setValue( pSettings->value( strKey, 6000 ).toUInt( ) );

    strKey = "Network/MaxPendingConn";
    sbMaxConn.setValue( pSettings->value( strKey, 100 ).toUInt( ) );
}

void CMainConfigurator::WritePortMaxConn( quint16 nPort, qint32 nMaxConn )
{
    QString strKey = "Network/ListenPort";
    pSettings->setValue( strKey, nPort );

    strKey = "Network/MaxPendingConn";
    pSettings->setValue( strKey, nMaxConn );
}

void CMainConfigurator::WriteComM77R( qint32 nIndex, qint32 nReceiverID )
{
    QString strKey = "ComM77R/ComM77R%1";
    QString strValue = "COM%1@%2";

    QString strReceiverID;
    strReceiverID.sprintf( "%03d", nReceiverID );

    pSettings->setValue( strKey.arg( nIndex ), strValue.arg( QString::number( nIndex ),
                                                             strReceiverID ) );
}

void CMainConfigurator::ReadComM77R( QComboBox &comboBox, QStringList& lstCom )
{
    comboBox.clear( );

    QString strValue;
    QStringList lstValue;
    QString strSperator = "@";
    QString strKey = "ComM77R/ComM77R%1";
    qint32 nCount = pSettings->value( strKey.arg( "Count" ), 0 ).toInt( );

    for ( qint32 nIndex = 0; nIndex < nCount; nIndex++ ) {
        strValue = pSettings->value( strKey.arg( nIndex ), "" ).toString( );
        lstValue = strValue.split( strSperator );

        if ( 2 != lstValue.length( ) ) {
            continue;
        }

        strValue = lstValue.at( 0 ).toUpper( );
        lstCom << strValue;
        comboBox.addItem( strValue, lstValue.at( 1 ) );
    }
}

QTextCodec* CMainConfigurator::GetTextCodec( )
{
    static QTextCodec* pCodec = NULL;

    if ( NULL != pCodec ) {
        return pCodec;
    }

    QList<QByteArray> lstCodec = pCodec->availableCodecs( );
    QString strText;
    bool bFound = false;

    for ( int nIndex = 0; nIndex < lstCodec.count( ); nIndex++ ) {
        QByteArray byData = lstCodec[ nIndex ];
        strText = QString( byData );

        if ( 0 == strText.toUpper().compare( "GB18030" ) ||
             0 == strText.toUpper().compare( "GBK" ) ||
             0 == strText.toUpper().compare( "GB2312" ) ) {
            bFound = true;
            break;
        }
    }

    if ( !bFound ) {
        strText = QString( "System" );
    }

    pCodec = QTextCodec::codecForName( strText.toLatin1( ) );
    return pCodec;
}
