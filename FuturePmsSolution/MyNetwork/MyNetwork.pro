#-------------------------------------------------
#
# Project created by QtCreator 2012-06-13T16:26:32
#
#-------------------------------------------------

QT       += network

QT       -= gui

TARGET = QMyNetwork
TEMPLATE = lib

DEFINES += QMYNETWORK_LIBRARY

SOURCES += qmynetwork.cpp

HEADERS += qmynetwork.h\
        QMyNetwork_global.h

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
