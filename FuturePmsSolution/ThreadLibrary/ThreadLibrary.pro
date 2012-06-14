QT       -= gui

TARGET = ThreadLibrary
TEMPLATE = lib

DEFINES += THREADLIBRARY_LIBRARY

SOURCES += qthreadgenerator.cpp

HEADERS += ThreadLibrary_global.h \
    qthreadgenerator.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE0F78417
    TARGET.CAPABILITY =
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = ThreadLibrary.dll
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
