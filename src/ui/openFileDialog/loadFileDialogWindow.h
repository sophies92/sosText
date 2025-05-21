#ifndef LOADFILEDIALOGWINDOW_H
#define LOADFILEDIALOGWINDOW_H

#include <filesystem>

#include <QDialog>
#include <QMainWindow>
#include <QPlainTextEdit>
#include <QString>

namespace Ui
{
    class LoadFileDialogWindow;
}

class LoadFileDialogWindow : public QDialog
{
    Q_OBJECT

    // Public variables

    // Private variables
    Ui::LoadFileDialogWindow *ui;

    QString currentDirectoryString;
    std::filesystem::path currentDirectory;

    // Public functions
    public:
    LoadFileDialogWindow(QMainWindow *parent = nullptr);
    ~LoadFileDialogWindow();

    // Public UI slots
    public slots:
    void openFileButton();

    // Private functions
    private:
    void onStart();
};

#endif // LOADFILEDIALOGWINDOW_H
