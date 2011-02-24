#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testitem.h"
#include <QGraphicsPathItem>
#include <QGraphicsTextItem>
#include <iostream>

using namespace std;

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

    QPen pen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap, Qt::RoundJoin);
    QPainterPath path;
    path.moveTo(item1->pos().x() + item1->boundingRect().width(), item1->pos().y() + item1->boundingRect().height() / 2);
    path.lineTo(item2->pos().x(), item2->y() + item2->boundingRect().height() / 2); // lazy

    QGraphicsPathItem *pathItem = scene->addPath(path, pen);
    pathItem->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsFocusable);
    scene->addItem(item1);
    scene->addItem(item2);

    //scene->removeItem(pathItem);

    QGraphicsTextItem *text = new QGraphicsTextItem;
    text->setPos(50, 50);
    text->setPlainText("long text test");
    cout << text->boundingRect().width() << endl;

    //scene->addItem(text);
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
