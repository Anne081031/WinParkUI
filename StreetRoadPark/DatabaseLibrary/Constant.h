#ifndef CONSTANT_H
#define CONSTANT_H

#include <QtCore>

class Constant {
public:
    typedef enum __DataPackageType {
        TypeGroupInfo = 0,
        TypeUserInfo,
        TypeInOutRecordInfo,
        TypeSystemInfo,
        TypeSensorInfo
    } DataPackageType;

    typedef struct __TypeCode {
        // TypeGroup
        //QString strCodeGroupCreate;
        //QString strCodeGroupDelete;
        //QString strCodeGroupUpdate;
        QString strCodeGroupSelect; // Server=>Tablet

        // TypeUser
        //QString strCodeUserCreate;
        //QString strCodeUserDelete;
        QString strCodeUserUpdate; // Tablet=>Server
        QString strCodeUserSelect; // Tablet=>Server
        QString strCodeUserLogin; // Tablet=>Server
        QString strCodeUserLogout; // Tablet=>Server
        QString strCodeUserFee; // Tablet=>Server

        enum __UserCode {
            EUserSelect = 0,
            EUserUpdate,
            EUserLogin,
            EUserLogout,
            EUserFee
        };

        // TypeInOutRecord
        QString strCodeTabletNormalData; // Tablet=>Server
        QString strCodeTabletManualData;
        QString strCodeTabletQueryLocationData;
        QString strCodeTabletQueryImageData;
        QString strCodeRemoveRecord; // Server=>Tablet
        QString strCodeUnhandledSensorData; // Server=>Tablet
        QString strCodeTabletQueryReprotData;

        // TypeSystem
        QString strCodeDeviceRegister; // Tablet=>Server
        QString strCodeDeviceUnregister; // Tablet=>Server

        enum __DeviceCode {
            EDeviceUnregister = 0,
            EDeviceRegister
        };

        QString strCodeTimeSync; // Server=>Tablet
        QString strCodeConfigInfo;

        QString strCodeSensorData; // Server=>Tablet

        __TypeCode( ) {
            strCodeGroupSelect = "GroupSelect";

            strCodeUserSelect = "UserSelect";
            strCodeUserUpdate = "UserUpdate";
            strCodeUserLogin = "UserLogin";
            strCodeUserLogout = "UserLogout";
            strCodeUserFee = "UserFee";

            strCodeTabletNormalData = "TabletNormalData";
            strCodeTabletManualData = "TabletManualData";
            strCodeTabletQueryLocationData = "TabletQueryLocationData";
            strCodeTabletQueryImageData = "TabletQueryImageData";
            strCodeRemoveRecord = "RemoveRecord";
            strCodeUnhandledSensorData = "UnhandledSensorData";
            strCodeTabletQueryReprotData = "TabletQueryReportData";

            strCodeDeviceRegister = "DeviceRegister";
            strCodeDeviceUnregister = "DeviceUnregister";
            strCodeTimeSync = "TimeSync";
            strCodeConfigInfo = "ConfigInfo";

            strCodeSensorData = "SensorData";
        }
    } TTypeCode;

    typedef struct __SpName {
        QString strSpSensorRecord;
        QString strSpTabletNormalRecord;
        QString strSpTabletManualRecord;
        QString strSpQueryInOutRecord;
        QString strSpQueryImageRecord;
        QString strSpUnhandledSensorRecord;
        QString strDeviceRecord;
        QString strSpUserRecord;
        QString strSpGroupRecord;
        QString strSpQueryReportRecord;
        QString strSpQueryConfigRecord;

        __SpName( )
        {
            strSpSensorRecord = "SensorRecord";
            strSpTabletNormalRecord = "TabletNormalRecord";
            strSpTabletManualRecord = "TabletManualRecord";
            strSpQueryInOutRecord = "QueryInOutRecord";
            strSpQueryImageRecord = "QueryImageRecord";
            strSpUnhandledSensorRecord = "UnhandledSensorRecord";
            strDeviceRecord = "DeviceRecord";
            strSpUserRecord = "UserRecord";
            strSpGroupRecord = "GroupRecord";
            strSpQueryReportRecord = "QueryReportRecord";
            strSpQueryConfigRecord = "QueryConfigRecord";
        }
    } TSpName;

    typedef struct __SpXmlPattern {
        QString strXmlHeadRecord;
        QString strXmlSensorRecord;
        QString strXmlTabletNormalRecord;
        QString strXmlTabletManualRecord;
        QString strXmlTabletQueryLocationRecord;
        QString strXmlTabletQueryImageRecord;
        QString strXmlUnhandledSensorRecord;
        QString strXmlTabletQueryReportRecord;
        QString strXmlDeviceRecord;
        QString strXmlGroupRecord;

        QString strXmlUserSelectRecord;
        QString strXmlUserUdapteRecord;
        QString strXmlUserLoginRecord;
        QString strXmlUserLogoutRecord;
        QString strXmlUserFeeRecord;

        QString strXmlConfigRecord;

        __SpXmlPattern( )
        {
            strXmlHeadRecord = "<IP>%1</IP>"
                               "<ClientID>%2</ClientID>"
                               "<TypeCode>%3</TypeCode>"
                               "<UserID>%4</UserID>";
            strXmlSensorRecord = "<Data><LocationID>%1%2%3</LocationID> \
                                           <DateTime>%4</DateTime> \
                                           <Accessor>Localhost</Accessor></Data>";

            strXmlTabletNormalRecord = "<Data><LocationID>%1</LocationID> \
                                           <Plate>%2</Plate> \
                                           <Pay>%3</Pay> \
                                           <Operator>%4</Operator> \
                                           <Time>%5</Time> \
                                           <Image>%6</Image> \
                                           <Accessor>%7</Accessor> \
                                           <UserID>%8</UserID></Data>";

            strXmlTabletManualRecord = "<Data><LocationID>%1</LocationID> \
                                        <Plate>%2</Plate> \
                                        <Pay>%3</Pay> \
                                        <Operator>%4</Operator> \
                                        <Time>%5</Time> \
                                        <Image>%6</Image> \
                                        <Accessor>%7</Accessor> \
                                        <UserID>%8</UserID> \
                                        <SensorTime>%9</SensorTime></Data>";

            strXmlTabletQueryLocationRecord = "<Data><LocationID>%1</LocationID> \
                                               <EnterStartTime>%2</EnterStartTime> \
                                               <EnterEndTime>%3</EnterEndTime> \
                                               <LeaveStartTime>%4</LeaveStartTime> \
                                               <LeaveEndTime>%5</LeaveEndTime> \
                                               <Plate>%6</Plate> \
                                               <Operator>%7</Operator> \
                                               <Limit>%8</Limit> \
                                               <IncludedImage>%9</IncludedImage> \
                                               <Accessor>%10</Accessor></Data>";

            strXmlTabletQueryReportRecord = "<Data><UnitID>%1</UnitID> \
                                             <ParkID>%2</ParkID> \
                                             <PaymentStartTime>%3</PaymentStartTime> \
                                             <PaymentEndTime>%4</PaymentEndTime> \
                                             <Accessor>%5</Accessor></Data>";

            strXmlTabletQueryImageRecord = "<Data><RecordID>%1</RecordID> \
                                            <Accessor>%2</Accessor></Data>";

            strXmlUnhandledSensorRecord = "<Data><LocationID>%1</LocationID> \
                                           <Accessor>%2</Accessor></Data>";

            strXmlDeviceRecord = "<Data><Value>%1</Value><Accessor>%2</Accessor></Data>";

            strXmlUserSelectRecord = "<Data><GroupID>%1</GroupID><Accessor>%2</Accessor></Data>";
            strXmlUserUdapteRecord = "<Data><UserID>%1</UserID> \
                                      <UserName>%2</UserName> \
                                      <UserPwd>%3</UserPwd> \
                                      <PwdMD5>%4</PwdMD5> \
                                      <UserNewPwd>%5</UserNewPwd> \
                                      <PwdNewMD5>%6</PwdNewMD5> \
                                      <Accessor>%7</Accessor></Data>";
            strXmlUserLoginRecord = "<Data><UserID>%1</UserID> \
                                     <UserName>%2</UserName> \
                                     <UserPwd>%3</UserPwd> \
                                     <PwdMD5>%4</PwdMD5> \
                                     <Accessor>%5</Accessor></Data>";
            strXmlUserLogoutRecord = "<Data><UserID>%1</UserID><Accessor>%2</Accessor></Data>";
            strXmlUserFeeRecord = "<Data><UserID>%1</UserID> \
                                    <StartTime>%2</StartTime> \
                                    <EndTime>%3</EndTime> \
                                    <Accessor>%4</Accessor></Data>";

            strXmlGroupRecord = "<Data><UnitID>%1</UnitID><Accessor>%2</Accessor></Data>";
            strXmlConfigRecord = "<Data><DeviceID>%1</DeviceID><Accessor>%2</Accessor></Data>";;
        }
    } TSpXmlPattern;

public:
    static TTypeCode TypeCode;
    static TSpName SpName;
    static TSpXmlPattern SpXmlPattern;
};

#endif // CONSTANT_H
