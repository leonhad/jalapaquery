include $(top_srcdir)/autotroll.mk

lib_LTLIBRARIES = libquazip.la
libquazip_la_SOURCES = \
    zip.c \
    unzip.c \
    quazipnewinfo.cpp \
    quazipfile.cpp \
    quazip.cpp \
    quacrc32.cpp \
    quaadler32.cpp \
    JlCompress.cpp \
    ioapi.c

libquazip_la_CXXFLAGS = $(QT_CXXFLAGS) $(AM_CXXFLAGS)
libquazip_la_CPPFLAGS = $(QT_CPPFLAGS) $(AM_CPPFLAGS)
# libquazip_a_LIBFLAGS  = $(QT_LDFLAGS) $(LDFLAGS)
# libquazip_a_LIBADD    = $(QT_LIBS) $(LDADD) -lz

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = quazip.pc

QUAZIP_LIBRARY_VERSION=1:0:0
libquazip_la_LDFLAGS = -version-info $(QUAZIP_LIBRARY_VERSION)

library_includedir=$(includedir)/quazip
library_include_HEADERS = \
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
