QT       += core
QT       -= gui

TARGET = testplugin
CONFIG   += plugin
CONFIG   -= app_bundle


INCLUDEPATH = ../../jalapaquery

mac: {
    DESTDIR = ../../../bin/JalapaQuery.app/Contents/PlugIns
} else {
    DESTDIR = ../../../bin
}

TEMPLATE = lib

SOURCES += main.cpp \
    testplugin.cpp

HEADERS += \
    testplugin.h
