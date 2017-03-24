/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *appIcon;
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *thanks;
    QLabel *copyright;
    QLabel *appName;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(390, 382);
        gridLayout = new QGridLayout(AboutDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        appIcon = new QLabel(AboutDialog);
        appIcon->setObjectName(QStringLiteral("appIcon"));
        appIcon->setText(QStringLiteral(""));
        appIcon->setPixmap(QPixmap(QString::fromUtf8(":/icons/icon128.png")));
        appIcon->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(appIcon, 0, 0, 3, 2);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

        thanks = new QPlainTextEdit(AboutDialog);
        thanks->setObjectName(QStringLiteral("thanks"));
        thanks->setEnabled(true);
        thanks->setAutoFillBackground(true);
        thanks->setReadOnly(true);

        gridLayout->addWidget(thanks, 5, 0, 1, 2);

        copyright = new QLabel(AboutDialog);
        copyright->setObjectName(QStringLiteral("copyright"));
        copyright->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(copyright, 4, 0, 1, 2);

        appName = new QLabel(AboutDialog);
        appName->setObjectName(QStringLiteral("appName"));
        appName->setText(QStringLiteral("JalapaQuery (version)"));
        appName->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(appName, 3, 0, 1, 2);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About JalapaQuery", 0));
        thanks->setPlainText(QApplication::translate("AboutDialog", "All copyright are under GPL3 license.\n"
"This program comes with ABSOLUTELY NO WARRANTY\n"
"\n"
"Special Thanks:\n"
"\n"
"Brian Gunning <brian.p.gunning@gmail.com>\n"
"Leonardo Alves da Costa <leonhad@gmail.com>\n"
"Rafael Nunes Medeiros <mederafael@gmail.com>\n"
"Thiago Peixoto <thiago.guinho@gmail.com>", 0));
        copyright->setText(QApplication::translate("AboutDialog", "JalapaQuery Copyright (2011)", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
