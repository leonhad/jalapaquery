#include "mainwindow.h"
#include "mainwindow.ui.h"
#include "aboutdialog.h"
#include "newfiledialog.h"
#include "modelinterface.h"
#include "plugindialog.h"
#include <QGraphicsPathItem>
#include <QGraphicsTextItem>
#include <QDir>
#include <QPluginLoader>
#include <QSettings>
#include <QCloseEvent>
#include <QDebug>
#include <QIcon>
#include <QTreeWidgetItem>

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(800, 600);

    //m_scene = new QGraphicsScene;
    //ui->mainView->setScene(m_scene);

    ui->menuDocks->addAction(ui->projectDock->toggleViewAction());
    ui->menuDocks->addAction(ui->toolsDock->toggleViewAction());

    ui->menuToolbars->addAction(ui->fileToolBar->toggleViewAction());
    ui->menuToolbars->addAction(ui->editingToolBar->toggleViewAction());
    ui->menuToolbars->addAction(ui->helpToolBar->toggleViewAction());

    connect(qApp, SIGNAL(aboutToQuit()), this, SLOT(appClose()));
    //connect(ui->actionExit, SIGNAL(a))
    connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(aboutDialog()));
    connect(ui->actionAboutPlugins, SIGNAL(triggered()), this, SLOT(pluginDialog()));
    connect(ui->actionNewProject, SIGNAL(triggered()), this, SLOT(newFile()));

    //connect(m_mainWidget, SIGNAL(tabCloseRequested(int)), this, SLOT(closeTab(int)));

    loadPlugins();

    m_workspace = new QTreeWidgetItem(ui->projectWidget);
    m_workspace->setText(0, tr("Workspace"));
    m_workspace->setIcon(0, QIcon(":/icons/desktop.png"));
    m_workspace->setExpanded(true);

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
    */

    QSettings settings;
    settings.beginGroup("state");
    restoreGeometry(settings.value("geometry").toByteArray());
    restoreState(settings.value("state").toByteArray());
    settings.endGroup();
}

void MainWindow::pluginDialog()
{
    PluginDialog *dialog = new PluginDialog(this);
    dialog->setModelPlugins(m_model_plugins);
    dialog->show();
}

void MainWindow::aboutDialog()
{
    AboutDialog *dialog = new AboutDialog(this);
    dialog->show();
}

void MainWindow::closeEvent(QCloseEvent *event) {
    event->accept();
    // ignore if canceled
}

void MainWindow::newFile()
{
    NewFileDialog dialog(m_model_plugins, this);
    if (dialog.exec() == QDialog::Accepted) {
        QTreeWidgetItem *itemTest = new QTreeWidgetItem(m_workspace);
        itemTest->setText(0, dialog.projectName());
        itemTest->setIcon(0, dialog.typeModel()->smallIcon());
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
    qDeleteAll(m_model_plugins);
    delete ui;
}

void MainWindow::loadPlugins()
{
    loadModelPlugins();
}

void MainWindow::loadModelPlugins()
{

    // plugins
    QDir pluginsDir(qApp->applicationDirPath());
#if defined(Q_OS_MAC)
    if (pluginsDir.dirName() == "MacOS") {
        pluginsDir.cdUp();
        pluginsDir.cd("PlugIns");
    }
#else
    pluginsDir.cd("plugins");
#endif
    ModelInterface *interface;

    pluginsDir.cd("model");
    foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
        QPluginLoader pluginLoader(pluginsDir.absoluteFilePath(fileName));
        //pluginLoader.setLoadHints(QLibrary::ExportExternalSymbolsHint);
        QObject *plugin = pluginLoader.instance();
        if (plugin) {
            interface = qobject_cast<ModelInterface *>(plugin);
            if (interface) {
                //qDebug() << interface->getPluginName() << interface->getPluginVersion() << interface->getPluginVendor();
                m_model_plugins.append(interface);
            }
        }
    }
}
