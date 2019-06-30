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
    QMAKE_LFLAGS_SONAME  = -Wl,-install_name,@executable_path/../Frameworks/
    DESTDIR = ../../../bin/JalapaQuery.app/Contents/PlugIns/model
} else {
    DESTDIR = ../../../bin/plugins/model
}

RESOURCES += \
    resources.qrc

CONFIG+=sdk_no_version_check
