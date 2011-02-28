TEMPLATE = lib
CONFIG += qt warn_on
QT -= gui
LIBS += -lz
DEPENDPATH += .
INCLUDEPATH += .
DESTDIR = ../bin
DLLDESTDIR = ../bin
TARGET = quazip

VERSION=1.0.0

mac: {
    CONFIG += lib_bundle
    FRAMEWORK_HEADERS.version = Versions
    FRAMEWORK_HEADERS.files = \
        zip.h \
        unzip.h \
        quazipnewinfo.h \
        quazipfileinfo.h \
        quazipfile.h \
        quazip.h \
        quacrc32.h \
        quachecksum32.h \
        quaadler32.h \
        JlCompress.h \
        ioapi.h \
        crypt.h
    FRAMEWORK_HEADERS.path = Headers
    QMAKE_BUNDLE_DATA += FRAMEWORK_HEADERS
}

HEADERS += \
    zip.h \
    unzip.h \
    quazipnewinfo.h \
    quazipfileinfo.h \
    quazipfile.h \
    quazip.h \
    quacrc32.h \
    quachecksum32.h \
    quaadler32.h \
    JlCompress.h \
    ioapi.h \
    crypt.h

SOURCES += \
    zip.c \
    unzip.c \
    quazipnewinfo.cpp \
    quazipfile.cpp \
    quazip.cpp \
    quacrc32.cpp \
    quaadler32.cpp \
    JlCompress.cpp \
    ioapi.c
