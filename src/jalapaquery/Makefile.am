bin_PROGRAMS = jalapaquery
jalapaquery_SOURCES = \
    main.cpp \
    aboutdialog.cpp \
    constants.cpp \
    mainwindow.cpp \
    newfiledialog.cpp \
    plugindialog.cpp \
    testitem.cpp

jalapaquery_CXXFLAGS = $(QT_CXXFLAGS) $(AM_CXXFLAGS) -Iinterface
jalapaquery_CPPFLAGS = $(QT_CPPFLAGS) $(AM_CPPFLAGS) -Iinterface
jalapaquery_LDFLAGS  = $(QT_LDFLAGS) $(LDFLAGS)
jalapaquery_LDADD    = $(QT_LIBS) $(LDADD)

nodist_jalapaquery_SOURCES = $(BUILT_SOURCES)

%.moc.cpp: %.h
	moc $< -o $@

%.ui.h: %.ui
	uic $< -o $@

%.qrc.cpp: %.qrc
	rcc $< -o $@


BUILT_SOURCES = \
    mainwindow.moc.cpp \
    aboutdialog.moc.cpp \
    newfiledialog.moc.cpp \
    plugindialog.moc.cpp \
    plugindialog.ui.h \
    aboutdialog.ui.h \
    mainwindow.ui.h \
    newfiledialog.ui.h \
    resources.qrc.cpp

noinst_HEADERS = \
    aboutdialog.h \
    constants.h \
    mainwindow.h \
    newfiledialog.h \
    plugindialog.h \
    testitem.h

distdir = $(includedir)/jalapaquery

dist_HEADERS = \
    interface/modelinterface.h \
    interface/plugininterface.h \
    interface/typemodel.h

EXTRA_DIST = \
    plugindialog.ui \
    aboutdialog.ui \
    mainwindow.ui \
    newfiledialog.ui \
    resources.qrc

EXTRA_DIST += \
    resources/copy.png \
    resources/find.png \
    resources/ledgray.png \
    resources/ledorange.png \
    resources/lock.png \
    resources/newproject.png \
    resources/paste.png \
    resources/redo.png \
    resources/term.png \
    resources/zoom_1.png \
    resources/zoom_out.png \
    resources/cut.png \
    resources/help.png \
    resources/ledgreen.png \
    resources/ledred.png \
    resources/newfile.png \
    resources/open.png \
    resources/print.png \
    resources/save.png \
    resources/undo.png \
    resources/zoom_in.png \
    resources/zoom.png
