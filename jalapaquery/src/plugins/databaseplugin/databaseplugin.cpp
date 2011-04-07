#include "databaseplugin.h"

DatabasePlugin::DatabasePlugin()
{
    m_types.append(new TypeModel(QIcon(":/resources/dictionary64"), tr("Data Dictionary"), tr("The description")));
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

Q_EXPORT_PLUGIN2(databaseplugin, DatabasePlugin);
