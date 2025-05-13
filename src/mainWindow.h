#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "loadDialogWindow.h"
#include "ui_loadDialogWindow.h"

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
    int showLoadDialog();
    QWidget *getTextBox();

    private:
    Ui::MainWindow *ui;
    LoadDialogWindow *loadDialogWindow;
};

#endif // MAINWINDOW_H
