#include "settingsWindow.h"
#include "ui_settingsWindow.h"

sosText::ui::SettingsWindow::SettingsWindow(QWidget *parent) : QWidget(), ui(new Ui::SettingsWindow)
{
    SettingsWindow::ui->setupUi(this);
    ui->buttonBox->addButton("Cancel", QDialogButtonBox::ButtonRole::RejectRole);
    ui->buttonBox->addButton("Save", QDialogButtonBox::ButtonRole::AcceptRole);
    ui->buttonBox->addButton("Set Defaults", QDialogButtonBox::ButtonRole::ResetRole);
    connect(ui->buttonBox, &QDialogButtonBox::clicked, this, &SettingsWindow::buttonPressed);
}

sosText::ui::SettingsWindow::~SettingsWindow()
{
    delete ui;
}

void sosText::ui::SettingsWindow::buttonPressed(QAbstractButton *button)
{
    switch(ui->buttonBox->buttonRole(button))
    {
        case QDialogButtonBox::ButtonRole::RejectRole:
            close();
        break;

        case QDialogButtonBox::ButtonRole::AcceptRole:
            saveSettings();
        break;

        case QDialogButtonBox::ButtonRole::ResetRole:
            setDefaults();
        break;
    }
}

void sosText::ui::SettingsWindow::allSettingsRequestReturn(std::map<std::string, sosText::settings::Setting> *allSettings)
{
    // TODO display settings
}

void sosText::ui::SettingsWindow::close()
{
    delete this;
}

void sosText::ui::SettingsWindow::setDefaults()
{
    emit requestSetDefaults();
}

void sosText::ui::SettingsWindow::saveSettings()
{
    emit requestSaveSettings();
}
