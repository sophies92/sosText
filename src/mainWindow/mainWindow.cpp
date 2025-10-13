/* 
    sosText - A text editor.
    Copyright (C) 2025  Sophie Short / sosware

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "mainWindow.h"
#include "ui_mainWindow.h"

Sosware::SosText::MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("sosText");
    this->setWindowIcon(QIcon("/usr/local/bin/sosText/resources/icons/sosText_icon.svg")); // TODO make this better

    appSettings = new Sosware::SosText::Settings();
    // TODO Load settings

    findToolbar = new Sosware::SosText::FindToolbar(this);

    connectSlots();

    this->show();
}

Sosware::SosText::MainWindow::~MainWindow()
{
    delete ui;
    delete appSettings;
}

void Sosware::SosText::MainWindow::updateWindowName(int tabIndex)
{
    if(tabIndex >= 0)
    {
        this->setWindowTitle(ui->tabWidget->tabText(tabIndex) + " - " + "sosText");
    }
    else
    {
        this->setWindowTitle("sosText");
    }
}

void Sosware::SosText::MainWindow::connectSlots()
{
    // File actions
    connect(this->ui->actionNew_File, &QAction::triggered, this, &Sosware::SosText::MainWindow::newFile);
    connect(this->ui->actionOpen_File, &QAction::triggered, this, &Sosware::SosText::MainWindow::openFile);
    connect(this->ui->actionSave, &QAction::triggered, this, &Sosware::SosText::MainWindow::saveFile);
    connect(this->ui->actionSave_As, &QAction::triggered, this, &Sosware::SosText::MainWindow::saveFileAs);
    connect(this->ui->actionSettings, &QAction::triggered, this, &Sosware::SosText::MainWindow::launchSettingsWindow);
    connect(this->ui->actionExit, &QAction::triggered, this, &Sosware::SosText::MainWindow::close);

    // Edit actions
    // connect(this->ui->actionSelect_All, &QAction::triggered, this, selecat all text);
    connect(this->ui->action_Find, &QAction::triggered, this, &Sosware::SosText::MainWindow::launchFindToolbar);
    

    // About actions
    connect(this->ui->actionAbout, &QAction::triggered, this, &Sosware::SosText::MainWindow::launchAboutWindow);

    // Tab slots
    connect(this->ui->tabWidget, &QTabWidget::tabCloseRequested, this, &Sosware::SosText::MainWindow::closeTab);
    connect(this->ui->tabWidget, &QTabWidget::currentChanged, this, &Sosware::SosText::MainWindow::updateWindowName);

    // FindToolbar slots
    connect(findToolbar, &Sosware::SosText::FindToolbar::searchCurrentTabSignal, this, &Sosware::SosText::MainWindow::searchCurrentTabText);
}

void Sosware::SosText::MainWindow::createTextEditTab(QString path)
{
    Sosware::SosText::TextEditTab *textTab = new Sosware::SosText::TextEditTab(this);
    // Text changed
    connect(textTab->textArea, &QPlainTextEdit::textChanged, this, &Sosware::SosText::MainWindow::markTabUnsaved);

    if(path == nullptr)
    {
        ui->tabWidget->addTab(textTab, "*newFile");
    }
    else
    {
        if(textTab->openFile(path) == 0)
        {
            textTab->setFilepath(path);
            ui->tabWidget->addTab(textTab, QString(std::filesystem::path(path.toStdString().c_str()).filename().c_str()));
        }
        else
        {
            //TODO File load failed
            delete textTab;
            return;
        }
    }
    this->ui->tabWidget->setCurrentWidget(textTab);
}

void Sosware::SosText::MainWindow::closeTab(int index)
{
    // TODO check if file is modified
    // TODO Ask to save file
    Sosware::SosText::TextEditTab *tab = (Sosware::SosText::TextEditTab*)ui->tabWidget->widget(index);
    delete tab;
}

void Sosware::SosText::MainWindow::updateTabText(int index, QString text)
{
    ui->tabWidget->setTabText(index, text);
}

void Sosware::SosText::MainWindow::markTabUnsaved()
{
    ui->tabWidget->tabBar()->setTabTextColor(ui->tabWidget->currentIndex(), Qt::red);
}

void Sosware::SosText::MainWindow::markTabSaved(int index)
{
    ui->tabWidget->tabBar()->setTabTextColor(index, Qt::green);
}

void Sosware::SosText::MainWindow::newFile()
{
    createTextEditTab();
}

void Sosware::SosText::MainWindow::openFile()
{
    QFileDialog dialog;
    QString file = dialog.getOpenFileName(this);
    if(!file.isEmpty())
    {
        createTextEditTab(file);
    }
}

void Sosware::SosText::MainWindow::openFileFromPath(char *path)
{
    QString qs(path);
    createTextEditTab(qs);
}

void Sosware::SosText::MainWindow::saveFile()
{
    Sosware::SosText::TextEditTab *tab = (Sosware::SosText::TextEditTab*)ui->tabWidget->widget(ui->tabWidget->currentIndex());
    if(tab->saveFile() == 0)
    {
        updateTabText(ui->tabWidget->currentIndex(), tab->getFilename());
        markTabSaved(ui->tabWidget->currentIndex());
        updateWindowName(ui->tabWidget->currentIndex());
    }
    else
    {
        //TODO Save Failed
    }
}

void Sosware::SosText::MainWindow::saveFileAs()
{
    QFileDialog dialog;
    Sosware::SosText::TextEditTab *tab = (Sosware::SosText::TextEditTab*)ui->tabWidget->widget(ui->tabWidget->currentIndex());
    tab->setFilepath(dialog.getSaveFileName());
    if(tab->saveFile() == 0)
    {
        updateTabText(ui->tabWidget->currentIndex(), tab->getFilename());
        markTabSaved(ui->tabWidget->currentIndex());
        updateWindowName(ui->tabWidget->currentIndex());
    }
    else
    {
        // TODO Save Failed
    }
}

void Sosware::SosText::MainWindow::launchFindToolbar()
{
    if(findToolbar->isHidden())
    {
        findToolbar->show();
    }
    else
    {
        findToolbar->hide();
    }
}

void Sosware::SosText::MainWindow::launchSettingsWindow()
{
    settingsWindow = new Sosware::SosText::SettingsWindow(this);
}

void Sosware::SosText::MainWindow::launchAboutWindow()
{
    aboutWindow = new Sosware::SosText::AboutWindow(this);
}

void Sosware::SosText::MainWindow::searchCurrentTabText(QString searchTerm)
{
    // TODO Tab.searchText :)
    TextEditTab *textTab = (TextEditTab *)ui->tabWidget->currentWidget();
    textTab->findInText(searchTerm);
}