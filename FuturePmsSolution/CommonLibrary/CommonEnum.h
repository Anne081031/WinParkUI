#ifndef COMMONENUM_H
#define COMMONENUM_H
#include <QEvent>
namespace MyEnums {
    enum ThreadType {
        ThreadLogger,
        ThreadListener,
        ThreadTcpPeer,
        ThreadTcpClient,
        ThreadDatabase
    };

    enum EventType {
        // Logger event
        LogEventBegin = QEvent::User,
        LogWrite,
        LogEventEnd,
        ////////////////////////////////////////
        LinstenerEventBegin,
        ListenerStartup,
        LinstenerEventEnd,
        ////////////////////////////////////////
        TcpPeerEventStart,
        TcpPeerCreateSocket,
        TcpPeerEventEnd,
        /////////////////////////////////////////
        TcpClientEventStart,
        TcpClientConnect,
        TcpClientDisconnect,
        TcpClientSendData,
        TcpClientEventEnd,
        //////////////////////////////////////////
        DatabaseEventStart,
        DatabaseCrud, // CRUD Operation / SP
        DatabaseEventEnd,
        ThreadExit
    };

    enum LogType {
        Database,
        Network,
        Other,
        LogItems
    };

    enum EventParamType {
        ///////////// Network
        NetworkParamIP,
        NetworkParamPort
    };

    ///////////////// Network data stream or datagram
    typedef enum __eTableType {
        TabInOutRecord,
        TabImgLog
    } eTableType;

    typedef enum __ePacketType {
        PacketTable,
        PacketImage,
        PacketHeartbeat,
        PacketSvrMsg, // From Center Server
        PacketCltMsg, // From Terminal Client
        PacketMgmtData
    } ePacketType;

    typedef enum __eHeartbeat {
        HbClientIP,
        HbNetState
    } eHeartbeat;

    typedef enum __eMgmtData {
        MgmtTable,
        MgmtOtherData
    } eMgmtData;

    typedef enum __eCltMsg {
        CltTable,
        CltImg,
        CltHeartbeat
    } eCltMsg;

    typedef enum __eSvrMsg {
        SvrAlert,
        SvrGetInOutImg
    } eSvrMsg;

    typedef enum __eImageType {
        ImgOut,
        ImgIn,
        ImgCar,
        ImgOwner
    } eImageType;
}

#endif // COMMONENUM_H
