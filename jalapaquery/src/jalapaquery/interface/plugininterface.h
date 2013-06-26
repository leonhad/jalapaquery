#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#include <QString>

class PluginInterface {
public:
    virtual ~PluginInterface() {}
    virtual QString pluginName() = 0;
    virtual QString pluginVersion() = 0;
    virtual QString pluginVendor() = 0;
};

#define DatabasePlugin_iid "org.jalapaquery.DatabasePlugin"

Q_DECLARE_INTERFACE(DatabasePlugin, DatabasePlugin_iid)

#endif // PLUGININTERFACE_H
