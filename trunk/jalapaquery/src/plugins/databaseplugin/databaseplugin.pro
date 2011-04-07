QT += sql \
    xml
TARGET = databaseplugin
TEMPLATE = lib
CONFIG   += plugin
CONFIG   -= app_bundle

DEFINES += DATABASEPLUGIN_LIBRARY

SOURCES += databaseplugin.cpp
HEADERS += databaseplugin.h \
    databaseplugin_global.h

INCLUDEPATH = ../../jalapaquery/interface

mac: {
    DESTDIR = ../../../bin/JalapaQuery.app/Contents/PlugIns/model
} else {
    DESTDIR = ../../../bin/plugins/model
}

RESOURCES += \
    resources.qrc
