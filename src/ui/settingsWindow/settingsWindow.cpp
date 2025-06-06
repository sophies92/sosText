#include "settingsWindow.h"
#include "ui_settingsWindow.h"

sosText::SettingsWindow::SettingsWindow(QWidget *parent) : QWidget(), ui(new Ui::SettingsWindow)
{
    SettingsWindow::ui->setupUi(this);
}

sosText::SettingsWindow::~SettingsWindow()
{
    delete ui;
}
