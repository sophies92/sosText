#ifndef LOADFILEDIALOGWINDOW_H
#define LOADFILEDIALOGWINDOW_H

#include <filesystem>
#include <vector>
#include <fstream>

#include <QDialog>
#include <QMainWindow>
#include <QPlainTextEdit>
#include <QString>
#include <QListWidgetItem>

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

    // Public functions
    public:
    LoadFileDialogWindow(QMainWindow *parent = nullptr);
    ~LoadFileDialogWindow();

    // Public UI slots
    public slots:
    void openFileButton();

    // Private functions
    private:
};

#endif // LOADFILEDIALOGWINDOW_H
