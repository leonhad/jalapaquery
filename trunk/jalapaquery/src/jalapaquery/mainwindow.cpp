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

    TestItem *item1 = new TestItem;
    TestItem *item2 = new TestItem;

    item1->setPos(-100, -10);
    item2->setPos(100, 10);

    QPen pen(Qt::black, 1, Qt::SolidLine, Qt::SquareCap, Qt::RoundJoin);
    QPainterPath path;
    path.moveTo(item1->pos().x() + item1->boundingRect().width(), item1->pos().y() + item1->boundingRect().height() / 2);
    path.lineTo(item2->pos().x(), item2->y() + item2->boundingRect().height() / 2); // lazy

    scene->addPath(path, pen);

    scene->addItem(item1);
    scene->addItem(item2);
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
