QT       += gui

TARGET = CommonLibrary
TEMPLATE = lib

DEFINES += QCOMMONFUNCTION_LIBRARY

SOURCES += qcommonfunction.cpp

HEADERS += qcommonfunction.h\
        QCommonFunction_global.h \
    CommonMacro.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE0F78417
    TARGET.CAPABILITY =
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = CommonLibrary.dll
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
