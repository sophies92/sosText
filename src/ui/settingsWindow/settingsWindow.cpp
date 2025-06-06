#include "settingsWindow.h"
#include "ui_settingsWindow.h"

sosText::ui::SettingsWindow::SettingsWindow(QWidget *parent) : QWidget(), ui(new Ui::SettingsWindow)
{
    SettingsWindow::ui->setupUi(this);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &SettingsWindow::close);
}

sosText::ui::SettingsWindow::~SettingsWindow()
{
    delete ui;
}

void sosText::ui::SettingsWindow::close()
{
    delete this;
}

void sosText::ui::SettingsWindow::allSettingsRequestReturn(std::map<std::string, sosText::settings::Setting> *allSettings)
{
    // TODO display settings
}
