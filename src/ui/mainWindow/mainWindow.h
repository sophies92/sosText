#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    // Public Variables

    // Private Variables
    private:
    Ui::MainWindow *ui;

    // Public Functions
    public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // Public Slots
    public slots:

    // Private functions
    private:

};

#endif // MAINWINDOW_H
