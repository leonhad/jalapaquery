#ifndef UMLPLUGIN_H
#define UMLPLUGIN_H

#include <modelinterface.h>
#include <QObject>
#include <QString>
#include "umlplugin_global.h"

class UMLPLUGINSHARED_EXPORT UmlPlugin : public QObject, public ModelInterface
{
    Q_OBJECT
    Q_INTERFACES(ModelInterface)
    Q_PLUGIN_METADATA(IID ModelInterface_iid)

public:
    UmlPlugin();
    virtual ~UmlPlugin();
    virtual QString modelName();
    virtual QList<TypeModel *> types();

    virtual QString pluginName();
    virtual QString pluginVersion();
    virtual QString pluginVendor();
};

#endif // UMLPLUGIN_H
