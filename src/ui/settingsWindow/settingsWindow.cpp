#include "settingsWindow.h"
#include "ui_settingsWindow.h"

SettingsWindow::SettingsWindow(QWidget *parent) : QWidget(), ui(new Ui::SettingsWindow)
{
    SettingsWindow::ui->setupUi(this);
}

SettingsWindow::~SettingsWindow()
{
    delete ui;
}
