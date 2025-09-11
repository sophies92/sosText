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
    this->setWindowIcon(QIcon("resources/icons/sosText_icon.svg"));
    connectSlots();
    appSettings = new Sosware::SosText::Settings();;
    // TODO Load settings
    this->showMaximized();
}

Sosware::SosText::MainWindow::~MainWindow()
{
    delete ui;
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

    // About actions

    // Tab slots
    connect(this->ui->tabWidget, &QTabWidget::tabCloseRequested, this, &Sosware::SosText::MainWindow::closeTab);
}

void Sosware::SosText::MainWindow::createTextEditTab(QString path)
{
    Sosware::SosText::TextEditTab *textTab = new Sosware::SosText::TextEditTab(this);
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
        }
    }
}

void Sosware::SosText::MainWindow::closeTab(int index)
{
    // TODO check if file is modified
    // TODO Ask to save file
    this->ui->tabWidget->removeTab(index);
}

void Sosware::SosText::MainWindow::newFile()
{
    createTextEditTab();
}

void Sosware::SosText::MainWindow::openFile()
{
    QFileDialog dialog;
    QString file = dialog.getOpenFileName(this);
    createTextEditTab(file);
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
    if(tab->saveFile())
    {

    }
    else
    {
        // TODO Save Failed
    }
}

void Sosware::SosText::MainWindow::launchSettingsWindow()
{
    settingsWindow = new Sosware::SosText::SettingsWindow(this);
    settingsWindow->show();
}
