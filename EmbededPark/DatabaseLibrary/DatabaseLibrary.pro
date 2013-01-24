#-------------------------------------------------
#
# Project created by QtCreator 2013-01-14T15:04:45
#
#-------------------------------------------------

QT       += core gui network sql

DEFINES += _WIN32_WINDOWS=0x0490

MYTARGET = $$quote( DatabaseLibrary%1 )
MYDESTDIR = $$quote( ../LibExeFiles/%1 )
MYDESTLIB = $$quote( %1/%2%3.lib )

Debug {
    TARGET = $$sprintf( $$MYTARGET, "Debug" )
    DESTDIR = $$sprintf( $$MYDESTDIR, "Debug" )
}

Release {
    TARGET = $$sprintf( $$MYTARGET, "" )
    DESTDIR = $$sprintf( $$MYDESTDIR, "Release" )
}

TEMPLATE = lib

DEFINES += DATABASELIBRARY_LIBRARY

SOURCES += qdatabaselibrary.cpp

HEADERS += qdatabaselibrary.h\
        DatabaseLibrary_global.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
