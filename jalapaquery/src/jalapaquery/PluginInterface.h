#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#include <QString>

class PluginInterface {
public:
    virtual ~PluginInterface() {}
    virtual QString getPluginName() = 0;
    virtual QString getPluginVersion() = 0;
    virtual QString getPluginVendor() = 0;
};

#endif // PLUGININTERFACE_H
