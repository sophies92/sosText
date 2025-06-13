#include "newProjectWindow.h"
#include "ui_newProjectWindow.h"

sosText::ui::NewProjectWindow::NewProjectWindow(QWidget *parent) : QWizard(parent), ui(new Ui::NewProjectWindow)
{
    sosText::ui::NewProjectWindow::ui->setupUi(this);
    connect(ui->browseButton, &QPushButton::clicked, this, &sosText::ui::NewProjectWindow::requestFileBrowserSignal);
}

sosText::ui::NewProjectWindow::~NewProjectWindow()
{
    delete ui;
}

Ui::NewProjectWindow *sosText::ui::NewProjectWindow::getUi()
{
    return(this->ui);
}