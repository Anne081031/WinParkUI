#-------------------------------------------------
#
# Project created by QtCreator 2012-12-17T15:54:13
#
#-------------------------------------------------

QT       += core gui

INCLUDEPATH += ../VehicleLicense/WinTone
INCLUDEPATH += ../Multimedia/HikSDK
INCLUDEPATH += ../Multimedia/TmSDK

LIBS += ../lib/libLPKernelEx.a
LIBS += ../lib/libDs40xxSDK.a

TARGET = VZPlateDemo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Thread/qplatethread.cpp \
    Thread/qplateevent.cpp \
    Thread/qanalogcamerathread.cpp \
    Thread/qdigitalcamerathread.cpp \
    Thread/qcameraevent.cpp \
    Thread/qfilecamerathread.cpp \
    Thread/qdirectorythread.cpp \
    qcommon.cpp \
    Thread/qdirectoryevent.cpp \
    Thread/qhkcapturecardthread.cpp \
    Thread/qtmcapturecardthread.cpp \
    Thread/qhkipcthread.cpp \
    Thread/qjvsipcthread.cpp

HEADERS  += mainwindow.h \
    Thread/qplatethread.h \
    Thread/qplateevent.h \
    Thread/qanalogcamerathread.h \
    Thread/qdigitalcamerathread.h \
    Thread/qcameraevent.h \
    Thread/qfilecamerathread.h \
    Thread/qdirectorythread.h \
    qcommon.h \
    Thread/qdirectoryevent.h \
    Thread/qhkcapturecardthread.h \
    Thread/qtmcapturecardthread.h \
    Thread/qhkipcthread.h \
    Thread/qjvsipcthread.h

FORMS    += mainwindow.ui

RESOURCES += \
    Resource.qrc
