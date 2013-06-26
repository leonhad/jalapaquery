QT += core \
    gui \
    widgets
TARGET = JalapaQuery
TEMPLATE = app
DESTDIR = ../../bin
INCLUDEPATH = interface
SOURCES += main.cpp \
    mainwindow.cpp \
    testitem.cpp \
    aboutdialog.cpp \
    newfiledialog.cpp \
    plugindialog.cpp \
    constants.cpp \
    dialog.cpp
HEADERS += mainwindow.h \
    testitem.h \
    aboutdialog.h \
    newfiledialog.h \
    plugindialog.h \
    interface/plugininterface.h \
    interface/modelinterface.h \
    interface/typemodel.h \
    constants.h \
    dialog.h
FORMS += mainwindow.ui \
    aboutdialog.ui \
    newfiledialog.ui \
    plugindialog.ui \
    dialog.ui
RESOURCES += resources.qrc \
    icons.qrc

macx: { 
    CONFIG += x86_64
    QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.6

    FILEICONS.files = dbmodel.icns jalapamodel.icns
    FILEICONS.path = Contents/Resources
    QMAKE_BUNDLE_DATA += FILEICONS
    ICON = AppIcon.icns
    QMAKE_INFO_PLIST = AppInfo.plist

    TRANSLATIONSINSTALL.files = \
        jalapaquery_pt.qm \
        jalapaquery_en.qm \
        jalapaquery_en_IE.qm \
        jalapaquery_ga.qm
    TRANSLATIONSINSTALL.path = Contents/Resources
    QMAKE_BUNDLE_DATA += TRANSLATIONSINSTALL
}
win32::RC_FILE = App.rc
OTHER_FILES += App.rc \
    AppInfo.plist
TRANSLATIONS = \
    jalapaquery_pt.ts \
    jalapaquery_en.ts \
    jalapaquery_en_IE.ts \
    jalapaquery_ga.ts
