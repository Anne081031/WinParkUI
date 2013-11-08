greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TEMPLATE = app
INCLUDEPATH += .
CONFIG += console

include(../../src/qtsoap.pri)

HEADERS += population.h
SOURCES += main.cpp population.cpp
