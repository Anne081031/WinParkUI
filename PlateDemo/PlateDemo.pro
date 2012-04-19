#-------------------------------------------------
#
# Project created by QtCreator 2011-06-30T11:20:48
#
#-------------------------------------------------

QT       += core gui network

INCLUDEPATH += "../Multimedia"
INCLUDEPATH += "../VehicleLicense"
INCLUDEPATH += "../Mysql/include"

LIBS += "../lib/libMultimedia.a"
LIBS += "../lib/libVehicleLicense.a"

TARGET = PlateDemo
TEMPLATE = app

DEFINES += PLATEDEMO_H #RAW_API


SOURCES += main.cpp\
        mainwindow.cpp \
    ../Dialog/recognizeparamdlg.cpp \
    ../Common/ommonfunction.cpp \
    mythread.cpp

HEADERS  += mainwindow.h \
    ../Dialog/recognizeparamdlg.h \
    ../Common/commonfunction.h \
    mythread.h

FORMS    += mainwindow.ui \
    ../Dialog/recognizeparamdlg.ui
