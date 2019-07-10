#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#include <QtCore/QString>

class PluginInterface {
public:
    virtual ~PluginInterface() {}
    virtual QString pluginName() = 0;
    virtual QString pluginVersion() = 0;
    virtual QString pluginVendor() = 0;
};

#define PluginInterface_iid "org.jalapaquery.PluginInterface"

Q_DECLARE_INTERFACE(PluginInterface, PluginInterface_iid)

#endif // PLUGININTERFACE_H
