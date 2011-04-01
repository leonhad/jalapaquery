#include "databaseplugin.h"

DatabasePlugin::DatabasePlugin()
{
}

DatabasePlugin::~DatabasePlugin()
{
}

QString DatabasePlugin::getModelName()
{
    return "Database";
}

QString DatabasePlugin::getPluginName()
{
    return "Database Plugin";
}

QString DatabasePlugin::getPluginVersion()
{
    return "0.1";
}

QString DatabasePlugin::getPluginVendor()
{
    return "JalapaQuery.org";
}

Q_EXPORT_PLUGIN2(databaseplugin, DatabasePlugin);
