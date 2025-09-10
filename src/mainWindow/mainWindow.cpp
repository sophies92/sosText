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
    connectSlots();
    this->showMaximized();
}

Sosware::SosText::MainWindow::~MainWindow()
{
    delete ui;
}

void Sosware::SosText::MainWindow::connectSlots()
{
    connect(this->ui->actionNew_File, &QAction::triggered, this, &Sosware::SosText::MainWindow::createNewFile);
}

void Sosware::SosText::MainWindow::createNewFile()
{
    Sosware::SosText::TextEditTab *textTab = new Sosware::SosText::TextEditTab(this);
    ui->tabWidget->addTab(textTab, "*newFile");
}
