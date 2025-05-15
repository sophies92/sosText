#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "../openFileDialog/loadFileDialogWindow.h"
#include "../openProjectDialog/loadProjectDialogWindow.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    public slots:
    void showLoadFileDialog();
    void showLoadProjectDialog();

    private:
    Ui::MainWindow *ui;
    LoadFileDialogWindow *loadFileDialogWindow;
    LoadProjectDialogWindow *loadProjectDialgWindow;

};

#endif // MAINWINDOW_H
