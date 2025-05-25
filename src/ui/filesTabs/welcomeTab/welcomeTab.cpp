#include "welcomeTab.h"
#include "ui_welcomeTab.h"

WelcomeTab::WelcomeTab(QWidget *parent) : QWidget(), ui(new Ui::WelcomeTab)
{
    WelcomeTab::ui->setupUi(this);
    connect(ui->newFileButton, &QCommandLinkButton::pressed, this, &WelcomeTab::newFileButtonPressed);
    connect(ui->openFileButton, &QCommandLinkButton::pressed, this, &WelcomeTab::openFileButtonPressed);
    connect(ui->newProjectButton, &QCommandLinkButton::pressed, this, &WelcomeTab::newProjectButtonPressed);
    connect(ui->openProjectButton, &QCommandLinkButton::pressed, this, &WelcomeTab::openProjectButtonPressed);
}

WelcomeTab::~WelcomeTab()
{
    delete ui;
}

void WelcomeTab::newFileButtonPressed()
{
    emit newFileButtonPressedSignal();
}

void WelcomeTab::openFileButtonPressed()
{
    emit openFileButtonPressedSignal();
}

void WelcomeTab::newProjectButtonPressed()
{
    emit newProjectButtonPressedSignal();
}

void WelcomeTab::openProjectButtonPressed()
{
    emit openProjectButtonPressedSignal();
}