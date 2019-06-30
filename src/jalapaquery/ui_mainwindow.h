/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionExit;
    QAction *actionPreferences;
    QAction *actionIndex;
    QAction *actionNewProject;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionClose;
    QAction *actionSaveAs;
    QAction *actionPrint;
    QAction *actionPageSetup;
    QAction *actionImport;
    QAction *actionExport;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionFind;
    QAction *actionSelectAll;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionFitToWindow;
    QAction *action50;
    QAction *action75;
    QAction *action100;
    QAction *action125;
    QAction *action150;
    QAction *action175;
    QAction *action200;
    QAction *actionAboutPlugins;
    QAction *actionNew;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuRecent_Files;
    QMenu *menuNew;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuToolbars;
    QMenu *menuZoom;
    QMenu *menuDocks;
    QMenu *menuModel;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *fileToolBar;
    QStatusBar *statusBar;
    QDockWidget *projectDock;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *projectWidget;
    QDockWidget *toolsDock;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *layout_2;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *page_2;
    QToolBar *editingToolBar;
    QToolBar *helpToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(623, 427);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icon128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::VerticalTabs);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout->setMenuRole(QAction::AboutRole);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionExit->setMenuRole(QAction::QuitRole);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionPreferences->setMenuRole(QAction::PreferencesRole);
        actionIndex = new QAction(MainWindow);
        actionIndex->setObjectName(QStringLiteral("actionIndex"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIndex->setIcon(icon1);
        actionIndex->setMenuRole(QAction::NoRole);
        actionNewProject = new QAction(MainWindow);
        actionNewProject->setObjectName(QStringLiteral("actionNewProject"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/newproject.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewProject->setIcon(icon2);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon3);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon4);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon5);
        actionPageSetup = new QAction(MainWindow);
        actionPageSetup->setObjectName(QStringLiteral("actionPageSetup"));
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QStringLiteral("actionImport"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon6);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon7);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/resources/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon8);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/resources/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon9);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/resources/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon10);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/resources/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon11);
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName(QStringLiteral("actionSelectAll"));
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/resources/zoom_in.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon12);
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QStringLiteral("actionZoomOut"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/resources/zoom_out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon13);
        actionFitToWindow = new QAction(MainWindow);
        actionFitToWindow->setObjectName(QStringLiteral("actionFitToWindow"));
        action50 = new QAction(MainWindow);
        action50->setObjectName(QStringLiteral("action50"));
        action75 = new QAction(MainWindow);
        action75->setObjectName(QStringLiteral("action75"));
        action100 = new QAction(MainWindow);
        action100->setObjectName(QStringLiteral("action100"));
        action125 = new QAction(MainWindow);
        action125->setObjectName(QStringLiteral("action125"));
        action150 = new QAction(MainWindow);
        action150->setObjectName(QStringLiteral("action150"));
        action175 = new QAction(MainWindow);
        action175->setObjectName(QStringLiteral("action175"));
        action200 = new QAction(MainWindow);
        action200->setObjectName(QStringLiteral("action200"));
        actionAboutPlugins = new QAction(MainWindow);
        actionAboutPlugins->setObjectName(QStringLiteral("actionAboutPlugins"));
        actionAboutPlugins->setMenuRole(QAction::ApplicationSpecificRole);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/resources/newfile.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon14);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 623, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuRecent_Files = new QMenu(menuFile);
        menuRecent_Files->setObjectName(QStringLiteral("menuRecent_Files"));
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName(QStringLiteral("menuNew"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuToolbars = new QMenu(menuView);
        menuToolbars->setObjectName(QStringLiteral("menuToolbars"));
        menuZoom = new QMenu(menuView);
        menuZoom->setObjectName(QStringLiteral("menuZoom"));
        menuDocks = new QMenu(menuView);
        menuDocks->setObjectName(QStringLiteral("menuDocks"));
        menuModel = new QMenu(menuBar);
        menuModel->setObjectName(QStringLiteral("menuModel"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        fileToolBar = new QToolBar(MainWindow);
        fileToolBar->setObjectName(QStringLiteral("fileToolBar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileToolBar->sizePolicy().hasHeightForWidth());
        fileToolBar->setSizePolicy(sizePolicy);
        fileToolBar->setIconSize(QSize(24, 24));
        MainWindow->addToolBar(Qt::TopToolBarArea, fileToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        projectDock = new QDockWidget(MainWindow);
        projectDock->setObjectName(QStringLiteral("projectDock"));
        projectDock->setMinimumSize(QSize(150, 128));
        projectDock->setFloating(false);
        projectDock->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        projectWidget = new QTreeWidget(dockWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        projectWidget->setHeaderItem(__qtreewidgetitem);
        projectWidget->setObjectName(QStringLiteral("projectWidget"));
        projectWidget->setDragEnabled(true);
        projectWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        projectWidget->setRootIsDecorated(false);
        projectWidget->setHeaderHidden(true);

        horizontalLayout_2->addWidget(projectWidget);

        projectDock->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), projectDock);
        toolsDock = new QDockWidget(MainWindow);
        toolsDock->setObjectName(QStringLiteral("toolsDock"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolsDock->sizePolicy().hasHeightForWidth());
        toolsDock->setSizePolicy(sizePolicy1);
        toolsDock->setMinimumSize(QSize(150, 170));
        toolsDock->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        layout_2 = new QVBoxLayout(dockWidgetContents_2);
        layout_2->setSpacing(0);
        layout_2->setContentsMargins(11, 11, 11, 11);
        layout_2->setObjectName(QStringLiteral("layout_2"));
        layout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        layout_2->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(dockWidgetContents_2);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 150, 258));
        toolBox->addItem(page, QStringLiteral("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 98, 28));
        toolBox->addItem(page_2, QStringLiteral("Page 2"));

        layout_2->addWidget(toolBox);

        toolsDock->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), toolsDock);
        editingToolBar = new QToolBar(MainWindow);
        editingToolBar->setObjectName(QStringLiteral("editingToolBar"));
        editingToolBar->setIconSize(QSize(24, 24));
        MainWindow->addToolBar(Qt::TopToolBarArea, editingToolBar);
        helpToolBar = new QToolBar(MainWindow);
        helpToolBar->setObjectName(QStringLiteral("helpToolBar"));
        helpToolBar->setIconSize(QSize(24, 24));
        MainWindow->addToolBar(Qt::TopToolBarArea, helpToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuModel->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(menuNew->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionClose);
        menuFile->addSeparator();
        menuFile->addAction(actionPageSetup);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionImport);
        menuFile->addAction(actionExport);
        menuFile->addSeparator();
        menuFile->addAction(menuRecent_Files->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuNew->addAction(actionNewProject);
        menuNew->addAction(actionNew);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelectAll);
        menuEdit->addSeparator();
        menuEdit->addAction(actionPreferences);
        menuView->addAction(menuZoom->menuAction());
        menuView->addSeparator();
        menuView->addAction(menuToolbars->menuAction());
        menuView->addAction(menuDocks->menuAction());
        menuZoom->addAction(actionZoomIn);
        menuZoom->addAction(actionZoomOut);
        menuZoom->addAction(actionFitToWindow);
        menuZoom->addSeparator();
        menuZoom->addAction(action50);
        menuZoom->addAction(action75);
        menuZoom->addAction(action100);
        menuZoom->addAction(action125);
        menuZoom->addAction(action150);
        menuZoom->addAction(action175);
        menuZoom->addAction(action200);
        menuHelp->addAction(actionIndex);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAboutPlugins);
        menuHelp->addAction(actionAbout);
        fileToolBar->addAction(actionNewProject);
        fileToolBar->addAction(actionNew);
        fileToolBar->addAction(actionOpen);
        fileToolBar->addAction(actionSave);
        fileToolBar->addAction(actionPrint);
        editingToolBar->addAction(actionCut);
        editingToolBar->addAction(actionCopy);
        editingToolBar->addAction(actionPaste);
        editingToolBar->addSeparator();
        editingToolBar->addAction(actionUndo);
        editingToolBar->addAction(actionRedo);
        editingToolBar->addSeparator();
        editingToolBar->addAction(actionFind);
        editingToolBar->addSeparator();
        editingToolBar->addAction(actionZoomIn);
        editingToolBar->addAction(actionZoomOut);
        helpToolBar->addAction(actionIndex);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(-1);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "JalapaQuery", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionPreferences->setText(QApplication::translate("MainWindow", "&Preferences", nullptr));
        actionIndex->setText(QApplication::translate("MainWindow", "Index", nullptr));
#ifndef QT_NO_SHORTCUT
        actionIndex->setShortcut(QApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_NO_SHORTCUT
        actionNewProject->setText(QApplication::translate("MainWindow", "&New Project", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNewProject->setToolTip(QApplication::translate("MainWindow", "New Project", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNewProject->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "&Open...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionClose->setText(QApplication::translate("MainWindow", "Close", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionSaveAs->setText(QApplication::translate("MainWindow", "Save As...", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSaveAs->setToolTip(QApplication::translate("MainWindow", "Save As...", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSaveAs->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionPrint->setText(QApplication::translate("MainWindow", "Print", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPrint->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionPageSetup->setText(QApplication::translate("MainWindow", "Page Setup", nullptr));
        actionImport->setText(QApplication::translate("MainWindow", "Import", nullptr));
        actionExport->setText(QApplication::translate("MainWindow", "Export", nullptr));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionFind->setText(QApplication::translate("MainWindow", "Find...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFind->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionSelectAll->setText(QApplication::translate("MainWindow", "Select All", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSelectAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionZoomIn->setText(QApplication::translate("MainWindow", "Zoom In", nullptr));
        actionZoomOut->setText(QApplication::translate("MainWindow", "Zoom Out", nullptr));
        actionFitToWindow->setText(QApplication::translate("MainWindow", "Fit To Window", nullptr));
        action50->setText(QApplication::translate("MainWindow", "50%", nullptr));
        action75->setText(QApplication::translate("MainWindow", "75%", nullptr));
        action100->setText(QApplication::translate("MainWindow", "100%", nullptr));
        action125->setText(QApplication::translate("MainWindow", "125%", nullptr));
        action150->setText(QApplication::translate("MainWindow", "150%", nullptr));
        action175->setText(QApplication::translate("MainWindow", "175%", nullptr));
        action200->setText(QApplication::translate("MainWindow", "200%", nullptr));
        actionAboutPlugins->setText(QApplication::translate("MainWindow", "About Plugins...", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "&New Diagram", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        menuRecent_Files->setTitle(QApplication::translate("MainWindow", "Recent Files", nullptr));
        menuNew->setTitle(QApplication::translate("MainWindow", "New", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", nullptr));
        menuToolbars->setTitle(QApplication::translate("MainWindow", "Toolbars", nullptr));
        menuZoom->setTitle(QApplication::translate("MainWindow", "Zoom", nullptr));
        menuDocks->setTitle(QApplication::translate("MainWindow", "Views", nullptr));
        menuModel->setTitle(QApplication::translate("MainWindow", "&Model", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "&Tools", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
        fileToolBar->setWindowTitle(QApplication::translate("MainWindow", "File", nullptr));
        projectDock->setWindowTitle(QApplication::translate("MainWindow", "Project", nullptr));
        toolsDock->setWindowTitle(QApplication::translate("MainWindow", "Tools", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "Page 1", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "Page 2", nullptr));
        editingToolBar->setWindowTitle(QApplication::translate("MainWindow", "Editing", nullptr));
        helpToolBar->setWindowTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
