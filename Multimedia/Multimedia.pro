#-------------------------------------------------
#
# Project created by QtCreator 2011-05-17T15:23:28
#
#-------------------------------------------------

QT       += core network phonon multimedia

TARGET = Multimedia
TEMPLATE = lib
#DESTDIR +=
INCLUDEPATH += "../Mysql/include"

LIBS += "../lib/libDs40xxSDK.a"

DEFINES += MULTIMEDIA_LIBRARY

SOURCES += multimedia.cpp \
    HikSDK/hikvision.cpp \
    ../Common/ommonfunction.cpp \
    TmSDK/tm.cpp

HEADERS += multimedia.h\
        Multimedia_global.h \
    HikSDK/hikvision.h \
    ../Common/commonfunction.h \
    TmSDK/tm.h
