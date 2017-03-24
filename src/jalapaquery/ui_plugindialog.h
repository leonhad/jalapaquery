/********************************************************************************
** Form generated from reading UI file 'plugindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINDIALOG_H
#define UI_PLUGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PluginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *pluginList;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PluginDialog)
    {
        if (PluginDialog->objectName().isEmpty())
            PluginDialog->setObjectName(QStringLiteral("PluginDialog"));
        PluginDialog->resize(560, 387);
        verticalLayout = new QVBoxLayout(PluginDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pluginList = new QTreeWidget(PluginDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(2, QStringLiteral("3"));
        __qtreewidgetitem->setText(1, QStringLiteral("2"));
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        pluginList->setHeaderItem(__qtreewidgetitem);
        pluginList->setObjectName(QStringLiteral("pluginList"));
        pluginList->setColumnCount(3);

        verticalLayout->addWidget(pluginList);

        buttonBox = new QDialogButtonBox(PluginDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PluginDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PluginDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PluginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PluginDialog);
    } // setupUi

    void retranslateUi(QDialog *PluginDialog)
    {
        PluginDialog->setWindowTitle(QApplication::translate("PluginDialog", "About Plugins", 0));
    } // retranslateUi

};

namespace Ui {
    class PluginDialog: public Ui_PluginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINDIALOG_H
