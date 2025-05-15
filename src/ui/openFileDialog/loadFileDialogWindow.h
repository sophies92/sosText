#ifndef LOADFILEDIALOGWINDOW_H
#define LOADFILEDIALOGWINDOW_H

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

    public:
    LoadFileDialogWindow(QMainWindow *parent = nullptr);
    ~LoadFileDialogWindow();

    public slots:

    private:
    Ui::LoadFileDialogWindow *ui;
};

#endif // LOADFILEDIALOGWINDOW_H
