# Introduction #

This proof of concept aims to study the plugin module creation.

# Current Status #

Finished.

# Details #

  * Create a interface class (pure virtual methods) and use <a href='http://doc.qt.nokia.com/4.7-snapshot/qtplugin.html#Q_DECLARE_INTERFACE'>Q_DECLARE_INTERFACE</a>.
  * Create a library and add the plugin tag in <a href='http://doc.qt.nokia.com/4.7/qtconfig.html'>CONFIG</a>
  * Put the Q\_OBJECT and Q\_INTERFACES on plugin header class
  * Load the plugins with <a href='http://doc.qt.nokia.com/latest/qpluginloader.html'>QPluginLoader</a>
  * Use <a href='http://doc.qt.nokia.com/latest/qdir.html'>QDir</a> and <a href='http://doc.qt.nokia.com/latest/qcoreapplication.html#applicationDirPath'>qApp->applicationDirPath()</a> to search the path