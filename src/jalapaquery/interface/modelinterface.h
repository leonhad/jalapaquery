#ifndef MODELINTERFACE_H
#define MODELINTERFACE_H

#include <QtCore/QString>
#include <QtCore/QtPlugin>
#include <QtCore/QList>
#include <plugininterface.h>
#include <typemodel.h>

class ModelInterface : public PluginInterface
{
public:
    virtual ~ModelInterface() {}
    virtual QString modelName() = 0;
    virtual QList<TypeModel *> types() = 0;
};

#define ModelInterface_iid "com.jalapaquery.ModelInterface/1.0"

Q_DECLARE_INTERFACE(ModelInterface, ModelInterface_iid)

#endif
