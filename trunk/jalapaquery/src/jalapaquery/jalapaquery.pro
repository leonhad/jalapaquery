# -------------------------------------------------
# Project created by QtCreator 2011-02-18T10:55:17
# -------------------------------------------------
QT += core \
    gui
TARGET = JalapaQuery
TEMPLATE = app
DESTDIR = ../../bin
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
    modelinterface.h \
    plugininterface.h \
    plugindialog.h
FORMS += mainwindow.ui \
    aboutdialog.ui \
    newfiledialog.ui \
    plugindialog.ui
RESOURCES += resources.qrc \
    icons.qrc
macx: { 
    CONFIG += x86_64
    QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.6
    
    # FILEICONS.version = Versions
    FILEICONS.files = dbmodel.icns
    FILEICONS.path = Contents/Resources
    QMAKE_BUNDLE_DATA += FILEICONS
    ICON = AppIcon.icns
    QMAKE_INFO_PLIST = AppInfo.plist
}
win32::RC_FILE = App.rc
OTHER_FILES += App.rc \
    AppInfo.plist
