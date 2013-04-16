#include "qjson2sqlparser.h"
#include <QDebug>
#include <QHostAddress>
#include "Constant.h"

// Android DateFormat.parse( string ) ==> Date
QJson2SqlParser::QJson2SqlParser(QObject *parent) :
    QObject(parent)
{
    pPeerSocket = NULL;
    strSeperator = "@";
    strUnknown = "未知";
    strZero = "0";
    pConfig = CDbConfigurator::GetConfigurator( );
}

void QJson2SqlParser::GetJsonHead( QJsonObject &objJson, JsonStruct::JsonHead &sHead )
{
    GetStringValue( objJson, sHead.sKeys.strClientID, sHead.sValues.strClientID );
    GetStringValue( objJson, sHead.sKeys.strTypeCode, sHead.sValues.strTypeCode );
    GetStringValue( objJson, sHead.sKeys.strUserID, sHead.sValues.strUserID );

    sHead.sValues.jsonData = objJson.value( sHead.sKeys.strData ).toObject( );
}

void QJson2SqlParser::PrintJson( QByteArray &byJson, QJsonParseError &jsonError )
{
    qDebug( ) << jsonError.errorString( ) << endl
              << QString( byJson ) << endl;
}

void QJson2SqlParser::GetJsonObject( QByteArray& byJson, JsonStruct::JsonHead& sHead )
{
    QJsonParseError jsonError;
    QJsonDocument docJson = QJsonDocument::fromJson( byJson, &jsonError );

    PrintJson( byJson, jsonError );

    if ( !docJson.isObject( ) ) {
        return;
    }

    QJsonObject objJson = docJson.object( );

    byJson.clear( );
    GetJsonHead( objJson, sHead );

    // IP@ClientID@TypeCode LogFormat
    sHead.strLog = Constant::SpXmlPattern.strXmlHeadRecord.arg(
                   pPeerSocket->peerAddress( ).toString( ),
                   sHead.sValues.strClientID,
                   sHead.sValues.strTypeCode,
                   sHead.sValues.strUserID );
}

void QJson2SqlParser::GetDeviceRecordData( JsonStruct::JsonDeviceRecord& sRecord )
{
    QJsonValue aryValue = sRecord.sHead.sValues.jsonData.value( sRecord.sData.sKeys.strList );
    if ( !aryValue.isArray( ) ) {
        return;
    }

    if ( Constant::TypeCode.strCodeDeviceRegister == sRecord.sHead.sValues.strTypeCode ) {
        sRecord.sHead.nFlag = Constant::TTypeCode::EDeviceRegister;
        sRecord.sData.bRegister = true;
    } else if ( Constant::TypeCode.strCodeDeviceUnregister == sRecord.sHead.sValues.strTypeCode ) {
        sRecord.sHead.nFlag = Constant::TTypeCode::EDeviceUnregister;
        sRecord.sData.bRegister = false;
    }

    QJsonArray lstValue = aryValue.toArray( );
    qint32 nItems = lstValue.count( );

    QJsonObject objValue;
    QString strValue;
    QString strItems;

    for ( qint32 nItem = 0; nItem < nItems; nItem++ ) {
        aryValue = lstValue.at( nItem );

        if ( !aryValue.isObject( ) ) {
            continue;
        }

        objValue = aryValue.toObject( );

        strItems = sRecord.sData.sFormat.strLeftBracket;

        GetStringValue( objValue, sRecord.sData.sKeys.strDeviceID, strValue );
        strItems += sRecord.sData.sFormat.strFormat.arg( strValue );

        if ( sRecord.sData.bRegister ) {
            GetStringValue( objValue, sRecord.sData.sKeys.strStartTime, strValue );
            strItems += sRecord.sData.sFormat.strCommasFormat.arg( strValue );

            GetStringValue( objValue, sRecord.sData.sKeys.strEndTime, strValue );
            strItems += sRecord.sData.sFormat.strCommasFormat.arg( strValue );

            GetStringValue( objValue, sRecord.sData.sKeys.strSN, strValue );
            strItems += sRecord.sData.sFormat.strCommasFormat.arg( strValue );

            GetStringValue( objValue, sRecord.sData.sKeys.strComments, strValue );
            strItems += sRecord.sData.sFormat.strCommasFormat.arg( strValue );

            GetStringValue( objValue, sRecord.sData.sKeys.strUnitID, strValue );
            strItems += sRecord.sData.sFormat.strCommasFormat.arg( strValue );
        }

        GetStringValue( objValue, sRecord.sData.sKeys.strOperator, strValue );
        strItems += sRecord.sData.sFormat.strCommasFormat.arg( strValue );

        strItems += sRecord.sData.sFormat.strRightBracket;

        sRecord.sData.lstValues << strItems;
    }
}

void QJson2SqlParser::GetInOutRecordData( JsonStruct::JsonInOutRecord &sRecord )
{
    if ( Constant::TypeCode.strCodeTabletNormalData == sRecord.sHead.sValues.strTypeCode ) {
        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strLocationID,
                        sRecord.sData.sValues.strLocationID );

        if ( sRecord.sData.sValues.strLocationID.isEmpty( ) ) {
            sRecord.sData.sValues.strLocationID = strUnknown;
        }

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strPlate,
                        sRecord.sData.sValues.strPlate );

        if ( sRecord.sData.sValues.strPlate.isEmpty( ) ) {
            sRecord.sData.sValues.strPlate = strUnknown;
        }

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strPayment,
                        sRecord.sData.sValues.strPayment );

        if ( sRecord.sData.sValues.strPayment.isEmpty( ) ) {
            sRecord.sData.sValues.strPayment = strZero;
        }

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strOperator,
                        sRecord.sData.sValues.strOperator );

        if ( sRecord.sData.sValues.strOperator.isEmpty( ) ) {
            sRecord.sData.sValues.strOperator = strUnknown;
        }

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strPaymentTime,
                        sRecord.sData.sValues.strPaymentTime );

        if ( sRecord.sData.sValues.strPaymentTime.isEmpty( ) ) {
            sRecord.sData.sValues.strPaymentTime = pConfig->GetDateTime( );
        }

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strImage,
                        sRecord.sData.sValues.strImage );

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strState,
                        sRecord.sData.sValues.strState );
    } else if ( Constant::TypeCode.strCodeTabletManualData == sRecord.sHead.sValues.strTypeCode ) {
        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strLocationID,
                        sRecord.sData.sValues.strLocationID );

        if ( sRecord.sData.sValues.strLocationID.isEmpty( ) ) {
            sRecord.sData.sValues.strLocationID = strUnknown;
        }

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strPlate,
                        sRecord.sData.sValues.strPlate );

        if ( sRecord.sData.sValues.strPlate.isEmpty( ) ) {
            sRecord.sData.sValues.strPlate = strUnknown;
        }

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strPayment,
                        sRecord.sData.sValues.strPayment );

        if ( sRecord.sData.sValues.strPayment.isEmpty( ) ) {
            sRecord.sData.sValues.strPayment = strZero;
        }

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strOperator,
                        sRecord.sData.sValues.strOperator );

        if ( sRecord.sData.sValues.strOperator.isEmpty( ) ) {
            sRecord.sData.sValues.strOperator = strUnknown;
        }

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strPaymentTime,
                        sRecord.sData.sValues.strPaymentTime );

        if ( sRecord.sData.sValues.strPaymentTime.isEmpty( ) ) {
            sRecord.sData.sValues.strPaymentTime = pConfig->GetDateTime( );
        }

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strImage,
                        sRecord.sData.sValues.strImage );

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strState,
                        sRecord.sData.sValues.strState );
    } else if ( Constant::TypeCode.strCodeUnhandledSensorData == sRecord.sHead.sValues.strTypeCode ) {
        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strLocationID,
                        sRecord.sData.sValues.strLocationID );
    } else if ( Constant::TypeCode.strCodeTabletQueryLocationData == sRecord.sHead.sValues.strTypeCode ) {
        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strLocationID,
                        sRecord.sData.sValues.strLocationID );

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strEnterStartTime,
                        sRecord.sData.sValues.strEnterStartTime );

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strEnterEndTime,
                        sRecord.sData.sValues.strEnterEndTime );

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strLeaveStartTime,
                        sRecord.sData.sValues.strLeaveStartTime );

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strLeaveEndTime,
                        sRecord.sData.sValues.strLeaveEndTime );

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strPlate,
                        sRecord.sData.sValues.strPlate );

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strOperator,
                        sRecord.sData.sValues.strOperator );

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strLimit,
                        sRecord.sData.sValues.strLimit );

        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strIncludedImage,
                        sRecord.sData.sValues.strIncludedImage );
    } else if ( Constant::TypeCode.strCodeTabletQueryImageData == sRecord.sHead.sValues.strTypeCode ) {
        GetStringValue( sRecord.sHead.sValues.jsonData,
                        sRecord.sData.sKeys.strRecordID,
                        sRecord.sData.sValues.strRecordID );
    }
}

void QJson2SqlParser::GetSpName( QString &strTypeCode, QString& strSpName )
{
    if ( Constant::TypeCode.strCodeTabletNormalData == strTypeCode ) {
        strSpName = Constant::SpName.strSpTabletNormalRecord;
    } else if ( Constant::TypeCode.strCodeTabletManualData == strTypeCode ) {
        strSpName = Constant::SpName.strSpTabletManualRecord;
    } else if ( Constant::TypeCode.strCodeTabletQueryLocationData == strTypeCode ) {
        strSpName = Constant::SpName.strSpQueryInOutRecord;
    } else if ( Constant::TypeCode.strCodeTabletQueryImageData == strTypeCode ) {
        strSpName = Constant::SpName.strSpQueryImageRecord;
    } else if ( Constant::TypeCode.strCodeUnhandledSensorData == strTypeCode ) {
        strSpName = Constant::SpName.strSpUnhandledSensorRecord;
    } else if( Constant::TypeCode.strCodeDeviceRegister == strTypeCode ) {
        strSpName = Constant::SpName.strDeviceRecord;
    } else if( Constant::TypeCode.strCodeDeviceUnregister == strTypeCode ) {
        strSpName = Constant::SpName.strDeviceRecord;
    } else if ( Constant::TypeCode.strCodeGroupSelect == strTypeCode ) {
        strSpName = Constant::SpName.strSpGroupRecord;
    } else if ( Constant::TypeCode.strCodeUserSelect == strTypeCode ) {
        strSpName = Constant::SpName.strSpUserRecord;
    } else if ( Constant::TypeCode.strCodeUserUpdate == strTypeCode ) {
        strSpName = Constant::SpName.strSpUserRecord;
    } else if ( Constant::TypeCode.strCodeUserLogin == strTypeCode ) {
        strSpName = Constant::SpName.strSpUserRecord;
    } else if ( Constant::TypeCode.strCodeUserLogout == strTypeCode ) {
        strSpName = Constant::SpName.strSpUserRecord;
    } else if ( Constant::TypeCode.strCodeUserFee == strTypeCode ) {
        strSpName = Constant::SpName.strSpUserRecord;
    }
}

void QJson2SqlParser::ParseSystemJson( QByteArray &byJson, JsonStruct::JsonHead &sHead )
{
    JsonStruct::JsonDeviceRecord sRecordRequest;

    GetJsonObject( byJson, sRecordRequest.sHead );
    GetSpName( sRecordRequest.sHead.sValues.strTypeCode, sRecordRequest.sHead.strSpName );
    GetDeviceRecordData( sRecordRequest );

    QString strXml;
    GetDeviceXmlData( sRecordRequest, strXml );
    byJson.append( strXml );

    sHead = sRecordRequest.sHead;
}

void QJson2SqlParser::GetDeviceXmlData( JsonStruct::JsonDeviceRecord &sRecord, QString &strXml )
{
    QString strValue = sRecord.sData.lstValues.join( sRecord.sData.sFormat.strCommas );
    strXml = Constant::SpXmlPattern.strXmlDeviceRecord.arg( strValue, sRecord.sHead.strLog );
}

void QJson2SqlParser::ParseInOutRecordJson( QByteArray& byJson, JsonStruct::JsonHead& sHead )
{
    char nFlag = 0;
    JsonStruct::JsonInOutRecord sRecordRequest;

    GetJsonObject( byJson, sRecordRequest.sHead );
    GetSpName( sRecordRequest.sHead.sValues.strTypeCode, sRecordRequest.sHead.strSpName );
    GetInOutRecordData( sRecordRequest );

    QString strXml;
    GetInOutXmlData( sRecordRequest, strXml );
    byJson.append( strXml );
    nFlag = sRecordRequest.sData.sValues.strState.toShort( );

    sHead = sRecordRequest.sHead;
    sHead.nFlag = nFlag;
}

void QJson2SqlParser::GetInOutXmlData( JsonStruct::JsonInOutRecord &sRecord, QString &strXml )
{
    if ( Constant::TypeCode.strCodeTabletNormalData == sRecord.sHead.sValues.strTypeCode ) {
        strXml = Constant::SpXmlPattern.strXmlTabletNormalRecord.arg(
                             sRecord.sData.sValues.strLocationID,
                             sRecord.sData.sValues.strPlate,
                             sRecord.sData.sValues.strPayment,
                             sRecord.sData.sValues.strOperator,
                             sRecord.sData.sValues.strPaymentTime,
                             sRecord.sData.sValues.strImage,
                             sRecord.sHead.strLog,
                             sRecord.sHead.sValues.strUserID );
    } else if ( Constant::TypeCode.strCodeTabletManualData == sRecord.sHead.sValues.strTypeCode ) {
        strXml = Constant::SpXmlPattern.strXmlTabletManualRecord.arg(
                             sRecord.sData.sValues.strLocationID,
                             sRecord.sData.sValues.strPlate,
                             sRecord.sData.sValues.strPayment,
                             sRecord.sData.sValues.strOperator,
                             sRecord.sData.sValues.strPaymentTime,
                             sRecord.sData.sValues.strImage,
                             sRecord.sHead.strLog,
                             sRecord.sHead.sValues.strUserID,
                             pConfig->GetDateTime( ) );
    } else if ( Constant::TypeCode.strCodeUnhandledSensorData == sRecord.sHead.sValues.strTypeCode ) {
        strXml = Constant::SpXmlPattern.strXmlUnhandledSensorRecord.arg(
                             sRecord.sData.sValues.strLocationID,
                             sRecord.sHead.strLog );
    } else if ( Constant::TypeCode.strCodeTabletQueryLocationData == sRecord.sHead.sValues.strTypeCode ) {
        strXml = Constant::SpXmlPattern.strXmlTabletQueryLocationRecord.arg(
                             sRecord.sData.sValues.strLocationID,
                             sRecord.sData.sValues.strEnterStartTime,
                             sRecord.sData.sValues.strEnterEndTime,
                             sRecord.sData.sValues.strLeaveStartTime,
                             sRecord.sData.sValues.strLeaveEndTime,
                             sRecord.sData.sValues.strPlate,
                             sRecord.sData.sValues.strOperator,
                             sRecord.sData.sValues.strLimit,
                             sRecord.sData.sValues.strIncludedImage );
        strXml = strXml.arg( sRecord.sHead.strLog );
    } else if ( Constant::TypeCode.strCodeTabletQueryImageData == sRecord.sHead.sValues.strTypeCode ) {
        strXml = Constant::SpXmlPattern.strXmlTabletQueryImageRecord.arg(
                             sRecord.sData.sValues.strRecordID,
                             sRecord.sHead.strLog );
    }
}

void QJson2SqlParser::ParseGroupJson( QByteArray &byJson, JsonStruct::JsonHead &sHead )
{
    char nFlag = 0;
    JsonStruct::JsonGroup sGroupRequest;

    GetJsonObject( byJson, sGroupRequest.sHead );
    GetSpName( sGroupRequest.sHead.sValues.strTypeCode, sGroupRequest.sHead.strSpName );
    GetGroupRecordData( sGroupRequest );

    QString strXml;
    GetGroupXmlData( sGroupRequest, strXml );
    byJson.append( strXml );

    sHead = sGroupRequest.sHead;
    sHead.nFlag = nFlag;
}

void QJson2SqlParser::GetGroupXmlData( JsonStruct::JsonGroup &sRecord, QString &strXml )
{
    strXml = Constant::SpXmlPattern.strXmlGroupRecord.arg(
                             sRecord.sData.sValues.strUnitID,
                             sRecord.sHead.strLog );
}

void QJson2SqlParser::GetGroupRecordData( JsonStruct::JsonGroup &sRecord )
{
    GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strUnitID, sRecord.sData.sValues.strUnitID );
}

void QJson2SqlParser::GetUserRecordData( JsonStruct::JsonUser &sRecord )
{
    if ( Constant::TypeCode.strCodeUserSelect == sRecord.sHead.sValues.strTypeCode ) {
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strGroupID, sRecord.sData.sValues.strGroupID );

        sRecord.sHead.nFlag = Constant::TTypeCode::EUserSelect;
    } else if ( Constant::TypeCode.strCodeUserUpdate == sRecord.sHead.sValues.strTypeCode ) {
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strUserID, sRecord.sData.sValues.strUserID );
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strUserName, sRecord.sData.sValues.strUserName );
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strUserPwd, sRecord.sData.sValues.strUserPwd );
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strPwdMD5, sRecord.sData.sValues.strPwdMD5 );
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strUserNewPwd, sRecord.sData.sValues.strUserNewPwd );
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strPwdNewMD5, sRecord.sData.sValues.strPwdNewMD5 );

        sRecord.sHead.nFlag = Constant::TTypeCode::EUserUpdate;
    } else if ( Constant::TypeCode.strCodeUserLogin == sRecord.sHead.sValues.strTypeCode ) {
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strUserID, sRecord.sData.sValues.strUserID );
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strUserName, sRecord.sData.sValues.strUserName );
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strUserPwd, sRecord.sData.sValues.strUserPwd );
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strPwdMD5, sRecord.sData.sValues.strPwdMD5 );

        sRecord.sHead.nFlag = Constant::TTypeCode::EUserLogin;
    } else if ( Constant::TypeCode.strCodeUserLogout == sRecord.sHead.sValues.strTypeCode ) {
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strUserID, sRecord.sData.sValues.strUserID );

        sRecord.sHead.nFlag = Constant::TTypeCode::EUserLogout;
    } else if ( Constant::TypeCode.strCodeUserFee == sRecord.sHead.sValues.strTypeCode ) {
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strUserID, sRecord.sData.sValues.strUserID );
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strStartTime, sRecord.sData.sValues.strStartTime );
        GetStringValue( sRecord.sHead.sValues.jsonData, sRecord.sData.sKeys.strEndTime, sRecord.sData.sValues.strEndTime );

        sRecord.sHead.nFlag = Constant::TTypeCode::EUserFee;
    }
}

void QJson2SqlParser::GetUserXmlData( JsonStruct::JsonUser &sRecord, QString &strXml )
{
    if ( Constant::TypeCode.strCodeUserSelect == sRecord.sHead.sValues.strTypeCode ) {
        strXml = Constant::SpXmlPattern.strXmlUserSelectRecord.arg( sRecord.sData.sValues.strGroupID,
                                                                    sRecord.sHead.strLog );
    } else if ( Constant::TypeCode.strCodeUserUpdate == sRecord.sHead.sValues.strTypeCode ) {
        strXml = Constant::SpXmlPattern.strXmlUserUdapteRecord.arg( sRecord.sData.sValues.strUserID,
                                                                    sRecord.sData.sValues.strUserName,
                                                                    sRecord.sData.sValues.strUserPwd,
                                                                    sRecord.sData.sValues.strPwdMD5,
                                                                    sRecord.sData.sValues.strUserNewPwd,
                                                                    sRecord.sData.sValues.strPwdNewMD5,
                                                                    sRecord.sHead.strLog );
    } else if ( Constant::TypeCode.strCodeUserLogin == sRecord.sHead.sValues.strTypeCode ) {
        strXml = Constant::SpXmlPattern.strXmlUserLoginRecord.arg( sRecord.sData.sValues.strUserID,
                                                                    sRecord.sData.sValues.strUserName,
                                                                    sRecord.sData.sValues.strUserPwd,
                                                                    sRecord.sData.sValues.strPwdMD5,
                                                                    sRecord.sHead.strLog );
    } else if ( Constant::TypeCode.strCodeUserLogout == sRecord.sHead.sValues.strTypeCode ) {
        strXml = Constant::SpXmlPattern.strXmlUserLogoutRecord.arg( sRecord.sData.sValues.strUserID,
                                                                    sRecord.sHead.strLog );
    } else if ( Constant::TypeCode.strCodeUserFee == sRecord.sHead.sValues.strTypeCode ) {
        strXml = Constant::SpXmlPattern.strXmlUserFeeRecord.arg( sRecord.sData.sValues.strUserID,
                                                                 sRecord.sData.sValues.strStartTime,
                                                                 sRecord.sData.sValues.strEndTime,
                                                                 sRecord.sHead.strLog );
    }
}

void QJson2SqlParser::ParseUserJson( QByteArray &byJson, JsonStruct::JsonHead &sHead )
{
    JsonStruct::JsonUser sUserRequest;

    GetJsonObject( byJson, sUserRequest.sHead );
    GetSpName( sUserRequest.sHead.sValues.strTypeCode, sUserRequest.sHead.strSpName );
    GetUserRecordData( sUserRequest );

    QString strXml;
    GetUserXmlData( sUserRequest, strXml );
    byJson.append( strXml );

    sHead = sUserRequest.sHead;
}

void QJson2SqlParser::SetSocket( QTcpSocket *pSocket )
{
    pPeerSocket = pSocket;
}

void QJson2SqlParser::GetStringValue( QJsonObject &objJson, const QString& strKey, QString &strValue )
{
    QJsonValue valJson = objJson.value( strKey );

    if ( valJson.isUndefined( ) ||
         valJson.isNull( ) ||
         !valJson.isString( ) ) {
        strValue = "";
        return;
    }

    strValue = valJson.toString( );
}
