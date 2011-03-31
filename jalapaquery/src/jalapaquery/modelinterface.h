#ifndef MODELINTERFACE_H
#define MODELINTERFACE_H

#include <QString>
#include <QtPlugin>
#include "mainwindow.h"

class ModelInterface
{
public:
    virtual ~ModelInterface() {}
    virtual QString getModelName() = 0;
};

Q_DECLARE_INTERFACE(ModelInterface, "com.jalapaquery.ModelInterface/1.0");

#endif // MODELINTERFACE_H
