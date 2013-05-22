#ifndef QJSONSTRUCT_H
#define QJSONSTRUCT_H

#include <QObject>
#include <Qtcore>
class JsonStruct {
public:
    typedef struct __JsonFomat {
        QString strFormat;
        QString strNumber;
        QString strCommasFormat;
        QString strCommasNumber;
        QString strLeftBracket;
        QString strRightBracket;
        QString strCommas;

        __JsonFomat( )
        {
            strFormat = "'%1'";
            strNumber = "%1";
            strCommasFormat = ",'%1'";
            strCommasNumber = ",%1";
            strLeftBracket = "(";
            strRightBracket = ")";
            strCommas = ",";
        }
    } JsonFomat, *PJsonFomat;

    typedef struct __JsonHead {
        struct __Keys {
            QString strClientID;
            QString strTypeCode;
            QString strData;
            QString strUserID;
            QString strStateCode;

            __Keys( )
            {
                strClientID = "ClientID";
                strTypeCode = "TypeCode";
                strData = "Data";
                strUserID = "UserID";
                strStateCode = "StateCode";
            }
        } sKeys;

        struct __Values {
            QString strClientID;
            QString strTypeCode;
            QString strUserID;
            QString strStateCode;
            QJsonObject jsonData;

            __Values( )
            {
                strClientID = "-1";
                strStateCode = "0";
            }
        } sValues;

        QString strLog;
        char nFlag;
        QString strSpName;
    } JsonHead, *PJsonHead;

    typedef struct __JsonGroup{
        JsonHead sHead;
        struct __JsonData {
            struct __Keys {
               QString strUnitID;
               __Keys( )
               {
                   strUnitID = "UnitID";
               }
            } sKeys;

            struct __Values {
                QString strUnitID;
            } sValues;
        } sData;
    } JsonGroup, *PJsonGroup;

    typedef struct __JsonUser{
        JsonHead sHead;
        struct __JsonData {
            struct __Keys {
                // UserSelect
               QString strGroupID;

               // UserUpdate UserLogin
               // UserLogout UserFee
               QString strUserID;
               QString strUserName;
               QString strUserPwd;
               QString strPwdMD5;
               QString strUserNewPwd;
               QString strPwdNewMD5;

               // UserFee
               QString strStartTime;
               QString strEndTime;

               __Keys( )
               {
                   strGroupID = "GroupID";

                   strUserID = "UserID";
                   strUserName = "UserName";
                   strUserPwd = "UserPwd";
                   strPwdMD5 = "PwdMD5";
                   strUserNewPwd = "UserNewPwd";
                   strPwdNewMD5 = "PwdNewMD5";

                   strStartTime = "StartTime";
                   strEndTime = "EndTime";
               }
            } sKeys;

            struct __Values {
                QString strGroupID;

                QString strUserID;
                QString strUserName;
                QString strUserPwd;
                QString strPwdMD5;
                QString strUserNewPwd;
                QString strPwdNewMD5;

                QString strStartTime;
                QString strEndTime;
            } sValues;
        } sData;
    } JsonUser, *PJsonUser;

    typedef struct __JsonInOutRecord {
        JsonHead sHead;
        struct __JsonData {
            struct __Keys {
               QString strRecordID;
               QString strLocationID;
               QString strPlate;
               QString strPayment;
               QString strOperator;
               QString strPaymentTime;
               QString strImage;
               QString strState;

               QString strEnterStartTime;
               QString strEnterEndTime;
               QString strLeaveStartTime;
               QString strLeaveEndTime;
               QString strLimit;
               QString strIncludedImage;

               QString strPaymentStartTime;
               QString strPaymentEndTime;
               QString strUnitID;
               QString strParkID;

               __Keys( )
               {
                   strRecordID = "RecordID";
                   strLocationID = "LocationID";
                   strPlate = "Plate";
                   strPayment = "Payment";
                   strOperator = "Operator";
                   strPaymentTime = "PaymentTime";
                   strImage = "Image";
                   strState = "State";

                   strEnterStartTime = "EnterStartTime";
                   strEnterEndTime = "EnterEndTime";
                   strLeaveStartTime = "LeaveStartTime";
                   strLeaveEndTime = "LeaveEndTime";
                   strLimit = "Limit";
                   strIncludedImage = "IncludedImage";

                   strPaymentStartTime = "PaymentStartTime";
                   strPaymentEndTime = "PaymentEndTime";
                   strUnitID = "UnitID";
                   strParkID = "ParkID";
               }
            } sKeys;

            struct __Values {
                QString strRecordID;
                QString strLocationID;
                QString strPlate;
                QString strPayment;
                QString strOperator;
                QString strPaymentTime;
                QString strImage;
                QString strState;

                QString strEnterStartTime;
                QString strEnterEndTime;
                QString strLeaveStartTime;
                QString strLeaveEndTime;
                QString strLimit;
                QString strIncludedImage;

                QString strPaymentStartTime;
                QString strPaymentEndTime;
                QString strUnitID;
                QString strParkID;
            } sValues;
        } sData;
    } JsonInOutRecord, *PJsonInOutRecord;

    typedef struct __JsonDeviceRecord {
        JsonHead sHead;
        struct __JsonData {
            JsonFomat sFormat;
            bool bRegister;
            struct __Keys {
               QString strDeviceID;
               QString strStartTime;
               QString strEndTime;
               QString strOperator;
               QString strComments;
               QString strUnitID;
               QString strSN;
               QString strList;

               __Keys( )
               {
                   strDeviceID = "DeviceID";
                   strStartTime = "StartTime";
                   strEndTime = "EndTime";
                   strOperator = "Operator";
                   strComments = "Comments";
                   strUnitID = "UnitID";
                   strSN = "SN";
                   strList = "List";
               }
            } sKeys;

            QStringList lstValues;
            struct __Values {
                QString strDeviceID;
                QString strStarTime;
                QString strEndTime;
                QString strOperator;
                QString strComments;
                QString strUnitID;
                QString strSN;
            } sValues;
        } sData;
    } JsonDeviceRecord, *PJsonDeviceRecord;
};

#endif // QJSONSTRUCT_H
