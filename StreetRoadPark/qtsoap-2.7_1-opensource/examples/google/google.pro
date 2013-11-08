greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TEMPLATE = app
INCLUDEPATH += .

include(../../src/qtsoap.pri)

# Input
HEADERS += google.h
SOURCES += google.cpp main.cpp
