QT += core \
    gui
TARGET = JalapaQuery
TEMPLATE = app
DESTDIR = ../../bin
INCLUDEPATH = interface
SOURCES += main.cpp \
    mainwindow.cpp \
    testitem.cpp \
    aboutdialog.cpp \
    newfiledialog.cpp \
    plugindialog.cpp
HEADERS += mainwindow.h \
    testitem.h \
    aboutdialog.h \
    newfiledialog.h \
    plugindialog.h \
    interface/plugininterface.h \
    interface/modelinterface.h \
    interface/typemodel.h
FORMS += mainwindow.ui \
    aboutdialog.ui \
    newfiledialog.ui \
    plugindialog.ui
RESOURCES += resources.qrc \
    icons.qrc

TRANSLATIONSINSTALL.files = \
    jalapaquery_pt.qm \
    jalapaquery_en.qm \
    jalapaquery_en_IE.qm \
    jalapaquery_ga.qm

macx: { 
    CONFIG += x86_64
    QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.6

    FILEICONS.files = dbmodel.icns
    FILEICONS.path = Contents/Resources
    QMAKE_BUNDLE_DATA += FILEICONS
    ICON = AppIcon.icns
    QMAKE_INFO_PLIST = AppInfo.plist

    TRANSLATIONSINSTALL.path = Contents/Resources
    QMAKE_BUNDLE_DATA += TRANSLATIONSINSTALL
} else {
    TRANSLATIONSINSTALL.path = resources
}
win32::RC_FILE = App.rc
OTHER_FILES += App.rc \
    AppInfo.plist
TRANSLATIONS = \
    jalapaquery_pt.ts \
    jalapaquery_en.ts \
    jalapaquery_en_IE.ts \
    jalapaquery_ga.ts
