#-------------------------------------------------
#
# Project created by QtCreator 2012-06-13T16:23:01
#
#-------------------------------------------------

QT       -= gui

TARGET = ManipulateIniFile
TEMPLATE = lib

DEFINES += MANIPULATEINIFILE_LIBRARY

SOURCES += qmanipulateinifile.cpp

HEADERS += qmanipulateinifile.h\
        ManipulateIniFile_global.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE0F78417
    TARGET.CAPABILITY = 
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = ManipulateIniFile.dll
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
