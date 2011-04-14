#!/bin/bash

macdeployqt JalapaQuery.app

install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore JalapaQuery.app/Contents/PlugIns/model/libdatabaseplugin.dylib
install_name_tool -change QtGui.framework/Versions/4/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/4/QtGui JalapaQuery.app/Contents/PlugIns/model/libdatabaseplugin.dylib
install_name_tool -change QtXml.framework/Versions/4/QtXml @executable_path/../Frameworks/QtXml.framework/Versions/4/QtXml JalapaQuery.app/Contents/PlugIns/model/libdatabaseplugin.dylib
install_name_tool -change QtSql.framework/Versions/4/QtSql @executable_path/../Frameworks/QtSql.framework/Versions/4/QtSql JalapaQuery.app/Contents/PlugIns/model/libdatabaseplugin.dylib

install_name_tool -change QtCore.framework/Versions/4/QtCore @executable_path/../Frameworks/QtCore.framework/Versions/4/QtCore JalapaQuery.app/Contents/PlugIns/model/libumlplugin.dylib
install_name_tool -change QtGui.framework/Versions/4/QtGui @executable_path/../Frameworks/QtGui.framework/Versions/4/QtGui JalapaQuery.app/Contents/PlugIns/model/libumlplugin.dylib
install_name_tool -change QtXml.framework/Versions/4/QtXml @executable_path/../Frameworks/QtXml.framework/Versions/4/QtXml JalapaQuery.app/Contents/PlugIns/model/libumlplugin.dylib
