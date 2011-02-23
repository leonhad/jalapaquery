#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testitem.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene;
    ui->mainView->setScene(scene);

    connect(ui->actionAddTable, SIGNAL(triggered()), this, SLOT(addTable()));
}

MainWindow::~MainWindow()
{
    if (scene) {
        delete scene;
    }
    delete ui;
}

void MainWindow::addTable()
{
    scene->addItem(new TestItem);
}
