#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testinterface.h"
#include "aboutdialog.h"
#include "newfiledialog.h"
#include <QGraphicsPathItem>
#include <QGraphicsTextItem>
#include <QDir>
#include <QPluginLoader>
#include <QSettings>
#include <QCloseEvent>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(800, 600);
    //setUnifiedTitleAndToolBarOnMac(true);

    //m_scene = new QGraphicsScene;
    //ui->mainView->setScene(m_scene);

    ui->menuDocks->addAction(ui->projectDock->toggleViewAction());
    ui->menuDocks->addAction(ui->toolsDock->toggleViewAction());

    ui->menuToolbars->addAction(ui->fileToolBar->toggleViewAction());
    ui->menuToolbars->addAction(ui->editingToolBar->toggleViewAction());
    ui->menuToolbars->addAction(ui->helpToolBar->toggleViewAction());

    connect(qApp, SIGNAL(aboutToQuit()), this, SLOT(appClose()));
    connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(aboutDialog()));
    connect(ui->actionNew, SIGNAL(triggered()), this, SLOT(newFile()));

    //connect(m_mainWidget, SIGNAL(tabCloseRequested(int)), this, SLOT(closeTab(int)));

    /*
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

    // plugins
    QDir pluginsDir(qApp->applicationDirPath());
#if defined(Q_OS_MAC)
    if (pluginsDir.dirName() == "MacOS") {
        pluginsDir.cdUp();
        //pluginsDir.cdUp();
        //pluginsDir.cdUp();
        pluginsDir.cd("PlugIns");
    }
#endif
    TestInterface *test;

    pluginsDir.cd("plugins");
    foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
        QPluginLoader pluginLoader(pluginsDir.absoluteFilePath(fileName));
        QObject *plugin = pluginLoader.instance();
        if (plugin) {
            test = qobject_cast<TestInterface *>(plugin);
            cout << test->getName().toStdString() << endl;
        }
    }
    */

    QSettings settings;
    settings.beginGroup("state");
    restoreGeometry(settings.value("geometry").toByteArray());
    restoreState(settings.value("state").toByteArray());
    settings.endGroup();
}

void MainWindow::aboutDialog()
{
    AboutDialog *dialog = new AboutDialog(this);
    dialog->setWindowIcon(windowIcon());
    dialog->show();
}

void MainWindow::closeEvent(QCloseEvent *event) {
    event->accept();
    // ignore if canceled
}

void MainWindow::newFile()
{
    NewFileDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {

    }
}

void MainWindow::closeTab(int)
{

}

void MainWindow::appClose()
{
    QByteArray geometry = saveGeometry();
    QByteArray state = saveState();

    QSettings settings;
    settings.beginGroup("state");
    settings.setValue("geometry", geometry);
    settings.setValue("state", state);
    settings.endGroup();
}

MainWindow::~MainWindow()
{
    if (m_scene) {
        //delete m_scene;
    }
    delete ui;
}
