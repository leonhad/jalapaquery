#include "databaseplugin.h"

DatabasePlugin::DatabasePlugin()
{
    TypeModel *model = new TypeModel(QIcon(":/resources/dictionary64.png"), tr("Data Dictionary"),
                                 tr("File containing informations about the tables and relationships between them."));
    model->setSmallIcon(QIcon(":/resources/dictionary16.png"));
    m_types.append(model);
}

DatabasePlugin::~DatabasePlugin()
{
}

QList<TypeModel *> DatabasePlugin::types()
{
    return m_types;
}

QString DatabasePlugin::modelName()
{
    return "Database";
}

QString DatabasePlugin::pluginName()
{
    return "Database Plugin";
}

QString DatabasePlugin::pluginVersion()
{
    return "0.1";
}

QString DatabasePlugin::pluginVendor()
{
    return "JalapaQuery.org";
}

#define DatabasePlugin_iid "org.jalapaquery.DatabasePlugin"

Q_DECLARE_INTERFACE(DatabasePlugin, DatabasePlugin_iid)

//Q_EXPORT_PLUGIN2(databaseplugin, DatabasePlugin);
