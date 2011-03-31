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

public:
    UmlPlugin();
    virtual ~UmlPlugin();
    virtual QString getModelName();
};

#endif // UMLPLUGIN_H
