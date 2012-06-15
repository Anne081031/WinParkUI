#-------------------------------------------------
#
# Project created by QtCreator 2012-06-13T14:56:23
#
#-------------------------------------------------
DEFINES += StartupDebug

QT       += core gui

MYTARGET = $$quote( PlatformCentralClient%1 )
MYDESTDIR = $$quote( ../LibExeFiles/%1 )
MYDESTLIB = $$quote( %1/lib%2%3.a )

Debug {
    TARGET = $$sprintf( $$MYTARGET, "Debug" )
    DESTDIR = $$sprintf( $$MYDESTDIR, "Debug" )
    LIBS += $$sprintf( $$MYDESTLIB, $$DESTDIR, "CommonLibrary", "Debug" )

    ##Debug
    contains( DEFINES, StartupDebug ) {
        DESTDIR = "./Debug"
        TARGET = $$sprintf( $$MYTARGET, "" )
        system( copy ..\\LibExeFiles\\Debug\\CommonLibraryDebug.dll .\\Debug )
    }
}

Release {
    TARGET = $$sprintf( $$MYTARGET, "" )
    DESTDIR = $$sprintf( $$MYDESTDIR, "Release" )
    LIBS += $$sprintf( $$MYDESTLIB, $$DESTDIR, "CommonLibrary", "" )
}

TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
