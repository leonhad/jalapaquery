#include "appwindow.h"
#include <QApplication>
#include <QAction>
#include <QCloseEvent>
#include <QMenu>
#include <QMenuBar>
#include <QMenuItem>
#include <QTabWidget>
#include <QToolBar>
#include <QDockWidget>
#include <QSettings>

AppWindow::AppWindow(QWidget *parent) : QMainWindow(parent)
{
    setWindowTitle(tr("JalapaQuery"));
    resize(800, 600);

    m_mainWidget = new QTabWidget;
    m_mainWidget->setDocumentMode(true);
    m_mainWidget->setMovable(true);
    m_mainWidget->setTabsClosable(true);
    setCentralWidget(m_mainWidget);

    connect(m_mainWidget, SIGNAL(tabCloseRequested(int)), this, SLOT(closeTab(int)));
    connect(qApp, SIGNAL(aboutToQuit()), this, SLOT(appClose()));

    loadPlugins();

    createMenus();
    createDocks();

    // load state

    connect(qApp, SIGNAL(aboutToQuit()), this, SLOT(appClose()));

    // Restore the Windows settings
    QSettings settings;
    settings.beginGroup("state");
    QByteArray geometry = settings.value("geometry").toByteArray();
    QByteArray state = settings.value("state").toByteArray();
    settings.endGroup();
    if (!geometry.isNull()) {
        restoreGeometry(geometry);
    }
    if (!state.isNull()) {
        restoreState(state);
    }
}

AppWindow::~AppWindow()
{

}

void AppWindow::appClose()
{
    QByteArray geometry = saveGeometry();
    QByteArray state = saveState();

    QSettings settings;
    settings.beginGroup("state");
    settings.setValue("geometry", geometry);
    settings.setValue("state", state);
    settings.endGroup();
}

void AppWindow::closeEvent(QCloseEvent *event) {
    event->accept();
    // ignore if canceled
}


void AppWindow::loadPlugins()
{

}

void AppWindow::newFile()
{
    m_mainWidget->addTab(new QWidget(), "No name");
}

void AppWindow::closeTab(int index)
{
    m_mainWidget->removeTab(index);
}

void AppWindow::createMenus()
{
    QMenuBar *menuBar;
#ifdef Q_OS_MACX
    menuBar = new QMenuBar;
#else
    menuBar = new QMenuBar(this);
#endif

    m_file = new QMenu(tr("&File"), menuBar);
    m_edit = new QMenu(tr("&Edit"), menuBar);
    m_view = new QMenu(tr("&View"), menuBar);
    m_tools = new QMenu(tr("&Tools"), menuBar);
    m_help = new QMenu(tr("&Help"), menuBar);

    menuBar->addMenu(m_file);
    menuBar->addMenu(m_edit);
    menuBar->addMenu(m_view);
    menuBar->addMenu(m_tools);
    menuBar->addMenu(m_help);
    setMenuBar(menuBar);

    // Actions
    QAction *fileNew = new QAction(QIcon(":/icons/new.png"), tr("New"), this);
    m_file->addAction(fileNew);
    connect(m_file, SIGNAL(triggered(QAction*)), this, SLOT(newFile()));

    // Toolbars
    QToolBar *fileBar = new QToolBar(tr("File"), this);
    addToolBar(Qt::TopToolBarArea, fileBar);
    fileBar->addAction(fileNew);

}

void AppWindow::createDocks()
{
    m_projectDock = new QDockWidget(tr("Project"), this);
    m_projectDock->setFeatures(QDockWidget::DockWidgetClosable | QDockWidget::DockWidgetMovable | QDockWidget::DockWidgetFloatable);

    addDockWidget(Qt::LeftDockWidgetArea, m_projectDock);
}
