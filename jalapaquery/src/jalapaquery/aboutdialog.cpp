#include "aboutdialog.h"
#include "aboutdialog.ui.h"
#include "constants.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    ui->appName->setText(QString(APP_NAME) + " - " + QString(APP_VERSION));
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
