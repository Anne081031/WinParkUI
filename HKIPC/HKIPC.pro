#-------------------------------------------------
#
# Project created by QtCreator 2013-01-25T23:08:04
#
#-------------------------------------------------

QT       += core gui

LIBS += ./lib/libHCNetSDK.a

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HKIPC
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qipcthread.cpp \
    qipcevent.cpp

HEADERS  += mainwindow.h \
    qipcthread.h \
    qipcevent.h

FORMS    += mainwindow.ui
