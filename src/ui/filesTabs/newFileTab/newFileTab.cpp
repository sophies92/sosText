#include "newFileTab.h"
#include "ui_newFileTab.h"

NewFileTab::NewFileTab(QWidget *parent) : QWidget(), ui(new Ui::NewFileTab)
{
    NewFileTab::ui->setupUi(this);
    this->file = new Project::File();
    textEdit = ui->textEdit;
}

NewFileTab::~NewFileTab()
{
    delete ui;
}
