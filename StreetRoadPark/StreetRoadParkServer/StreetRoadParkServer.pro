#-------------------------------------------------
#
# Project created by QtCreator 2013-02-23T23:38:52
#
#-------------------------------------------------
DEFINES += StartupDebug
QT += network

INCLUDEPATH += ../DatabaseLibrary
INCLUDEPATH += ../NetworkLibrary
INCLUDEPATH += ../SerialPortLibrary
INCLUDEPATH += ../DatabaseLibrary/Mysql/include

MYTARGET = $$quote( StreetRoadParkServer%1 )
MYDESTDIR = $$quote( ../LibExeFiles/%1 )
MYDESTLIB = $$quote( %1/lib%2%3.a )

Debug {
    TARGET = $$sprintf( $$MYTARGET, "Debug" )
    DESTDIR = $$sprintf( $$MYDESTDIR, "Debug" )
    LIBS += $$sprintf( $$MYDESTLIB, $$DESTDIR, "DatabaseLibrary", "Debug" )
    LIBS += $$sprintf( $$MYDESTLIB, $$DESTDIR, "NetworkLibrary", "Debug" )
    LIBS += $$sprintf( $$MYDESTLIB, $$DESTDIR, "SerialPortLibrary", "Debug" )

    ##Debug
    contains( DEFINES, StartupDebug ) {
        DESTDIR = "./Debug"
        TARGET = $$sprintf( $$MYTARGET, "" )
        system( copy ..\\LibExeFiles\\Debug\\DatabaseLibraryDebug.dll .\\Debug )
        system( copy ..\\LibExeFiles\\Debug\\NetworkLibraryDebug.dll .\\Debug )
        system( copy ..\\LibExeFiles\\Debug\\SerialPortLibraryDebug.dll .\\Debug )
    }
}

Release {
    TARGET = $$sprintf( $$MYTARGET, "" )
    DESTDIR = $$sprintf( $$MYDESTDIR, "Release" )
    LIBS += $$sprintf( $$MYDESTLIB, $$DESTDIR, "DatabaseLibrary", "" )
    LIBS += $$sprintf( $$MYDESTLIB, $$DESTDIR, "NetworkLibrary", "" )
    LIBS += $$sprintf( $$MYDESTLIB, $$DESTDIR, "SerialPortLibrary", "" )
}

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cmainconfigurator.cpp

HEADERS  += mainwindow.h \
    cmainconfigurator.h

FORMS    += mainwindow.ui
