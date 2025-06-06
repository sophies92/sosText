#include "settingsWindow.h"
#include "ui_settingsWindow.h"

sosText::SettingsWindow::SettingsWindow(QWidget *parent) : QWidget(), ui(new Ui::SettingsWindow)
{
    SettingsWindow::ui->setupUi(this);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &SettingsWindow::close);
}

sosText::SettingsWindow::~SettingsWindow()
{
    delete ui;
}

void sosText::SettingsWindow::close()
{
    delete this;
}