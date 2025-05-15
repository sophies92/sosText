#ifndef LOADPROJECTDIALOGWINDOW_H
#define LOADPROJECTDIALOGWINDOW_H

#include <QDialog>
#include <QMainWindow>
#include <QPlainTextEdit>
#include <QString>

namespace Ui
{
    class LoadProjectDialogWindow;
}

class LoadProjectDialogWindow : public QDialog
{
    Q_OBJECT

    public:
    LoadProjectDialogWindow(QMainWindow *parent = nullptr);
    ~LoadProjectDialogWindow();

    public slots:

    private:
    Ui::LoadProjectDialogWindow *ui;
};

#endif // LOADPROJECTDIALOGWINDOW_H
