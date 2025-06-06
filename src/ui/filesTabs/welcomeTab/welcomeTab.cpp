#include "welcomeTab.h"
#include "ui_welcomeTab.h"

sosText::ui::WelcomeTab::WelcomeTab(QWidget *parent) : QWidget(), ui(new Ui::WelcomeTab)
{
    sosText::ui::WelcomeTab::ui->setupUi(this);
    connect(ui->newFileButton, &QCommandLinkButton::pressed, this, &sosText::ui::WelcomeTab::newFileButtonPressed);
    connect(ui->openFileButton, &QCommandLinkButton::pressed, this, &sosText::ui::WelcomeTab::openFileButtonPressed);
    connect(ui->newProjectButton, &QCommandLinkButton::pressed, this, &sosText::ui::WelcomeTab::newProjectButtonPressed);
    connect(ui->openProjectButton, &QCommandLinkButton::pressed, this, &sosText::ui::WelcomeTab::openProjectButtonPressed);
}

sosText::ui::WelcomeTab::~WelcomeTab()
{
    delete ui;
}

void sosText::ui::WelcomeTab::newFileButtonPressed()
{
    emit newFileButtonPressedSignal();
}

void sosText::ui::WelcomeTab::openFileButtonPressed()
{
    emit openFileButtonPressedSignal();
}

void sosText::ui::WelcomeTab::newProjectButtonPressed()
{
    emit newProjectButtonPressedSignal();
}

void sosText::ui::WelcomeTab::openProjectButtonPressed()
{
    emit openProjectButtonPressedSignal();
}