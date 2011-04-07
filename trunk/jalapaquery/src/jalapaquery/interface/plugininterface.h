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

#endif // PLUGININTERFACE_H
