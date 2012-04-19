#-------------------------------------------------
#
# Project created by QtCreator 2011-07-29T11:29:36
#
#-------------------------------------------------

QT       += core gui network

TARGET = UIDemo
TEMPLATE = app

INCLUDEPATH += "../."
INCLUDEPATH += "../Mysql/include"

LIBS += "../lib/libmysqlclient.a"
LIBS += "../lib/libmysql.a"

LIBS += "E:\QtSDK\mingw\lib\libgdi32.a"

SOURCES += main.cpp\
        mainwindow.cpp \
    monitor.cpp \
    frame.cpp \
    Database/mysqldatabase.cpp \
    ../Common/ommonfunction.cpp \
    mytask.cpp

HEADERS  += mainwindow.h \
    monitor.h \
    frame.h \
    Database/mysqldatabase.h \
    ../Common/commonfunction.h \
    mytask.h

FORMS    += mainwindow.ui \
    monitor.ui \
    frame.ui
