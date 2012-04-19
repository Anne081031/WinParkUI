#-------------------------------------------------
#
# Project created by QtCreator 2011-06-08T09:01:16
#
#-------------------------------------------------
QT       += core gui network
QT       += xml xmlpatterns phonon multimedia

INCLUDEPATH += "../Mysql/include"

LIBS += "../lib/libLPKernelEx.a"

TARGET = VehicleLicense
TEMPLATE = lib

DEFINES += VEHICLELICENSE_LIBRARY #RAW_API

SOURCES += vehiclelicense.cpp \
    ../Common/ommonfunction.cpp \
    WinTone/wintone.cpp

HEADERS += vehiclelicense.h\
        VehicleLicense_global.h \
    ../Common/commonfunction.h \
    WinTone/wintone.h
