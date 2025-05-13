#include "loadDialog.h"
#include "ui_loadDialog.h"

LoadDialog::LoadDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoadDialog)
{
    ui->setupUi(this);
}

LoadDialog::~LoadDialog()
{
    delete ui;
}
