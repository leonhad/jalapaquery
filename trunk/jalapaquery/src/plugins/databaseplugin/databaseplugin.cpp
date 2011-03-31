#include "databaseplugin.h"

DatabasePlugin::DatabasePlugin()
{
}

DatabasePlugin::~DatabasePlugin()
{
}

QString DatabasePlugin::getModelName()
{
    return QString("Database");
}

Q_EXPORT_PLUGIN2(databaseplugin, DatabasePlugin);
