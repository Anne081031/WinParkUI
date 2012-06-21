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
}

#endif // COMMONENUM_H
