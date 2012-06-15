#-------------------------------------------------
#
# Project created by QtCreator 2012-06-15T11:03:39
#
#-------------------------------------------------

QT       -= gui

TARGET = CommonWidgetLibrary
TEMPLATE = lib

DEFINES += COMMONWIDGETLIBRARY_LIBRARY

SOURCES += commonwidgetlibrary.cpp

HEADERS += commonwidgetlibrary.h\
        CommonWidgetLibrary_global.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE3C07814
    TARGET.CAPABILITY = 
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = CommonWidgetLibrary.dll
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
