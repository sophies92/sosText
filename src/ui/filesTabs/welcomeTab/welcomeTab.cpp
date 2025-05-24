#include "welcomeTab.h"
#include "ui_welcomeTab.h"

WelcomeTab::WelcomeTab(QWidget *parent) : QWidget(), ui(new Ui::WelcomeTab)
{
    WelcomeTab::ui->setupUi(this);
}

WelcomeTab::~WelcomeTab()
{
    delete ui;
}