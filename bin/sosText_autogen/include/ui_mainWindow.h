/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_File;
    QAction *actionSave_File;
    QAction *actionExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitterTopBottom;
    QSplitter *splitterTopLeftRight;
    QToolBox *projectBar;
    QWidget *pageProjectView;
    QGridLayout *gridLayout_2;
    QTreeView *treeView;
    QWidget *pageSettings;
    QTabWidget *filesTabs;
    QTabWidget *consoleBar;
    QWidget *tabConsole;
    QGridLayout *gridLayout_4;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *lineEdit;
    QWidget *tabErrors;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(800, 666);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName("actionOpen_File");
        actionSave_File = new QAction(MainWindow);
        actionSave_File->setObjectName("actionSave_File");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(800, 556));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        splitterTopBottom = new QSplitter(centralwidget);
        splitterTopBottom->setObjectName("splitterTopBottom");
        sizePolicy.setHeightForWidth(splitterTopBottom->sizePolicy().hasHeightForWidth());
        splitterTopBottom->setSizePolicy(sizePolicy);
        splitterTopBottom->setOrientation(Qt::Vertical);
        splitterTopLeftRight = new QSplitter(splitterTopBottom);
        splitterTopLeftRight->setObjectName("splitterTopLeftRight");
        sizePolicy.setHeightForWidth(splitterTopLeftRight->sizePolicy().hasHeightForWidth());
        splitterTopLeftRight->setSizePolicy(sizePolicy);
        splitterTopLeftRight->setOrientation(Qt::Horizontal);
        projectBar = new QToolBox(splitterTopLeftRight);
        projectBar->setObjectName("projectBar");
        sizePolicy.setHeightForWidth(projectBar->sizePolicy().hasHeightForWidth());
        projectBar->setSizePolicy(sizePolicy);
        projectBar->setMinimumSize(QSize(200, 400));
        projectBar->setMaximumSize(QSize(400, 16777215));
        pageProjectView = new QWidget();
        pageProjectView->setObjectName("pageProjectView");
        pageProjectView->setGeometry(QRect(0, 0, 378, 338));
        sizePolicy.setHeightForWidth(pageProjectView->sizePolicy().hasHeightForWidth());
        pageProjectView->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(pageProjectView);
        gridLayout_2->setObjectName("gridLayout_2");
        treeView = new QTreeView(pageProjectView);
        treeView->setObjectName("treeView");
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);
        treeView->setSortingEnabled(true);
        treeView->header()->setVisible(true);

        gridLayout_2->addWidget(treeView, 1, 0, 1, 1);

        projectBar->addItem(pageProjectView, QString::fromUtf8("Project: $PROJECTNAME"));
        pageSettings = new QWidget();
        pageSettings->setObjectName("pageSettings");
        pageSettings->setGeometry(QRect(0, 0, 378, 338));
        projectBar->addItem(pageSettings, QString::fromUtf8("Settings"));
        splitterTopLeftRight->addWidget(projectBar);
        filesTabs = new QTabWidget(splitterTopLeftRight);
        filesTabs->setObjectName("filesTabs");
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(filesTabs->sizePolicy().hasHeightForWidth());
        filesTabs->setSizePolicy(sizePolicy1);
        filesTabs->setMinimumSize(QSize(400, 400));
        filesTabs->setDocumentMode(true);
        filesTabs->setTabsClosable(true);
        filesTabs->setMovable(true);
        splitterTopLeftRight->addWidget(filesTabs);
        splitterTopBottom->addWidget(splitterTopLeftRight);
        consoleBar = new QTabWidget(splitterTopBottom);
        consoleBar->setObjectName("consoleBar");
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(consoleBar->sizePolicy().hasHeightForWidth());
        consoleBar->setSizePolicy(sizePolicy2);
        consoleBar->setMinimumSize(QSize(780, 200));
        consoleBar->setBaseSize(QSize(0, 200));
        tabConsole = new QWidget();
        tabConsole->setObjectName("tabConsole");
        sizePolicy2.setHeightForWidth(tabConsole->sizePolicy().hasHeightForWidth());
        tabConsole->setSizePolicy(sizePolicy2);
        gridLayout_4 = new QGridLayout(tabConsole);
        gridLayout_4->setObjectName("gridLayout_4");
        plainTextEdit = new QPlainTextEdit(tabConsole);
        plainTextEdit->setObjectName("plainTextEdit");
        sizePolicy2.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy2);
        plainTextEdit->setReadOnly(true);

        gridLayout_4->addWidget(plainTextEdit, 0, 0, 1, 1);

        lineEdit = new QLineEdit(tabConsole);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(lineEdit, 1, 0, 1, 1);

        consoleBar->addTab(tabConsole, QString());
        tabErrors = new QWidget();
        tabErrors->setObjectName("tabErrors");
        sizePolicy2.setHeightForWidth(tabErrors->sizePolicy().hasHeightForWidth());
        tabErrors->setSizePolicy(sizePolicy2);
        consoleBar->addTab(tabErrors, QString());
        splitterTopBottom->addWidget(consoleBar);

        gridLayout->addWidget(splitterTopBottom, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen_File);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_File);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        projectBar->setCurrentIndex(0);
        filesTabs->setCurrentIndex(-1);
        consoleBar->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "sosText", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File/Project", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_File->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_File->setText(QCoreApplication::translate("MainWindow", "Save File", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_File->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        projectBar->setItemText(projectBar->indexOf(pageProjectView), QCoreApplication::translate("MainWindow", "Project: $PROJECTNAME", nullptr));
        projectBar->setItemText(projectBar->indexOf(pageSettings), QCoreApplication::translate("MainWindow", "Settings", nullptr));
        consoleBar->setTabText(consoleBar->indexOf(tabConsole), QCoreApplication::translate("MainWindow", "Console", nullptr));
        consoleBar->setTabText(consoleBar->indexOf(tabErrors), QCoreApplication::translate("MainWindow", "Errors", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
