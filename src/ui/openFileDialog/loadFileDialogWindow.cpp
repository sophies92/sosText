#include "loadFileDialogWindow.h"
#include "ui_loadFileDialogWindow.h"

sosText::ui::LoadFileDialogWindow::LoadFileDialogWindow(QMainWindow *parent) : QDialog(parent), ui(new Ui::LoadFileDialogWindow)
{
    LoadFileDialogWindow::ui->setupUi(this);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &LoadFileDialogWindow::openFileButton);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &LoadFileDialogWindow::close);
    connect(ui->directories, &QTreeView::clicked, this, &LoadFileDialogWindow::onDirListClick);

    path = new std::filesystem::path("/");
    filesModel = new QFileSystemModel();
    filesModel->setRootPath(ui->filepath->toPlainText());
    ui->directories->setModel(filesModel);
    ui->directories->expandToDepth(1);
    updateUIPathView();

    // TODO show devices
    for(std::filesystem::directory_entry e : std::filesystem::directory_iterator("/dev"))
    {
        if(e.is_block_file())
        {
            ui->devicesList->addItem(e.path().filename().c_str());
        }
    }
}

sosText::ui::LoadFileDialogWindow::~LoadFileDialogWindow()
{
    delete path;
    delete ui;
}

void sosText::ui::LoadFileDialogWindow::onDirListClick(QModelIndex index)
{
    *path = filesModel->filePath(index).toStdString().c_str();
    updateUIPathView();
}

void sosText::ui::LoadFileDialogWindow::openFileButton()
{
    emit fileOpened(path);
    this->close();
}

void sosText::ui::LoadFileDialogWindow::close()
{
    delete this;
}

void sosText::ui::LoadFileDialogWindow::updateUIPathView()
{
    ui->filepath->setPlainText(path->c_str());
}
