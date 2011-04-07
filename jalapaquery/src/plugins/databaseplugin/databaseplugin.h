#ifndef DATABASEPLUGIN_H
#define DATABASEPLUGIN_H

#include <modelinterface.h>
#include <QObject>
#include <QString>
#include "databaseplugin_global.h"

class DATABASEPLUGINSHARED_EXPORT DatabasePlugin : public QObject, public ModelInterface
{
    Q_OBJECT
    Q_INTERFACES(ModelInterface)

public:
    DatabasePlugin();
    virtual ~DatabasePlugin();
    virtual QString modelName();
    virtual QList<TypeModel *> types();

    virtual QString pluginName();
    virtual QString pluginVersion();
    virtual QString pluginVendor();

private:
    QList<TypeModel *> m_types;
};

#endif // DATABASEPLUGIN_H
