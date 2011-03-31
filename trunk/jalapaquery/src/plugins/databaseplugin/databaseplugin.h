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
    virtual QString getModelName();
};

#endif // DATABASEPLUGIN_H
