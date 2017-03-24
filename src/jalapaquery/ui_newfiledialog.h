/********************************************************************************
** Form generated from reading UI file 'newfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILEDIALOG_H
#define UI_NEWFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NewFileDialog
{
public:
    QGridLayout *gridLayout;
    QListWidget *projectType;
    QListWidget *fileType;
    QPlainTextEdit *details;
    QLabel *projectNameLabel;
    QLineEdit *projectName;
    QDialogButtonBox *buttonBox;
    QLabel *templateLabel;

    void setupUi(QDialog *NewFileDialog)
    {
        if (NewFileDialog->objectName().isEmpty())
            NewFileDialog->setObjectName(QStringLiteral("NewFileDialog"));
        NewFileDialog->setWindowModality(Qt::WindowModal);
        NewFileDialog->resize(666, 489);
        gridLayout = new QGridLayout(NewFileDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        projectType = new QListWidget(NewFileDialog);
        projectType->setObjectName(QStringLiteral("projectType"));
        projectType->setMaximumSize(QSize(200, 16777215));
        projectType->setTabKeyNavigation(true);

        gridLayout->addWidget(projectType, 1, 0, 3, 1);

        fileType = new QListWidget(NewFileDialog);
        fileType->setObjectName(QStringLiteral("fileType"));
        fileType->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fileType->setTabKeyNavigation(true);
        fileType->setDragDropMode(QAbstractItemView::NoDragDrop);
        fileType->setIconSize(QSize(64, 64));
        fileType->setMovement(QListView::Static);
        fileType->setSpacing(4);
        fileType->setViewMode(QListView::IconMode);

        gridLayout->addWidget(fileType, 1, 1, 1, 2);

        details = new QPlainTextEdit(NewFileDialog);
        details->setObjectName(QStringLiteral("details"));
        details->setReadOnly(true);

        gridLayout->addWidget(details, 2, 1, 1, 2);

        projectNameLabel = new QLabel(NewFileDialog);
        projectNameLabel->setObjectName(QStringLiteral("projectNameLabel"));

        gridLayout->addWidget(projectNameLabel, 3, 1, 1, 1);

        projectName = new QLineEdit(NewFileDialog);
        projectName->setObjectName(QStringLiteral("projectName"));

        gridLayout->addWidget(projectName, 3, 2, 1, 1);

        buttonBox = new QDialogButtonBox(NewFileDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 2, 1, 1);

        templateLabel = new QLabel(NewFileDialog);
        templateLabel->setObjectName(QStringLiteral("templateLabel"));

        gridLayout->addWidget(templateLabel, 0, 0, 1, 3);


        retranslateUi(NewFileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewFileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewFileDialog);
    } // setupUi

    void retranslateUi(QDialog *NewFileDialog)
    {
        NewFileDialog->setWindowTitle(QApplication::translate("NewFileDialog", "New Project", 0));
        projectNameLabel->setText(QApplication::translate("NewFileDialog", "Project Name:", 0));
        templateLabel->setText(QApplication::translate("NewFileDialog", "Choose a project template:", 0));
    } // retranslateUi

};

namespace Ui {
    class NewFileDialog: public Ui_NewFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILEDIALOG_H
