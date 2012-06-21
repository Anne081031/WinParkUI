#-------------------------------------------------
#
# Project created by QtCreator 2012-06-13T16:26:32
#
#-------------------------------------------------

QT       += network

QT       -= gui

MYTARGET = $$quote( MyNetwork%1 )
MYDESTDIR = $$quote( ../LibExeFiles/%1 )

Debug {
    TARGET = $$sprintf( $$MYTARGET, "Debug" )
    DESTDIR = $$sprintf( $$MYDESTDIR, "Debug" )
}

Release {
    TARGET = $$sprintf( $$MYTARGET, "" )
    DESTDIR = $$sprintf( $$MYDESTDIR, "Release" )
}

TEMPLATE = lib

DEFINES += QMYNETWORK_LIBRARY

SOURCES += qmynetwork.cpp \
    qudpclient.cpp \
    qmytcpserver.cpp \
    qnetcommfunction.cpp \
    qtcppeerclient.cpp \
    qtcpclient.cpp

HEADERS += qmynetwork.h\
        QMyNetwork_global.h \
    qudpclient.h \
    qmytcpserver.h \
    qnetcommfunction.h \
    qtcppeerclient.h \
    qtcpclient.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE6C22B0E
    TARGET.CAPABILITY = 
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = QMyNetwork.dll
    addFiles.path = !:/sys/bin
    DEPLOYMENT += addFiles
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
