QT += sql \
    xml
TARGET = umlplugin
TEMPLATE = lib
CONFIG   += plugin
CONFIG   -= app_bundle

DEFINES += UMLPLUGIN_LIBRARY

SOURCES += umlplugin.cpp

HEADERS += umlplugin.h\
        umlplugin_global.h

INCLUDEPATH = ../../interface

mac: {
    DESTDIR = ../../../bin/JalapaQuery.app/Contents/PlugIns/model
} else {
    DESTDIR = ../../../bin/plugins/model
}
