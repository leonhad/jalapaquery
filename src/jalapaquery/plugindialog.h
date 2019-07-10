#ifndef PLUGINDIALOG_H
#define PLUGINDIALOG_H

#include <QtWidgets/QDialog>
#include <QtCore/QList>

class ModelInterface;

namespace Ui {
    class PluginDialog;
}

class PluginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PluginDialog(QWidget *parent = nullptr);
    ~PluginDialog();

    void setModelPlugins(QList<ModelInterface *> list);

private:
    Ui::PluginDialog *ui;
};

#endif // PLUGINDIALOG_H
