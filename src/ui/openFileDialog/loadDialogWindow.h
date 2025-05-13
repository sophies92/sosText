#ifndef LOADDIALOGWINDOW_H
#define LOADDIALOGWINDOW_H

#include <QDialog>
#include <QMainWindow>
#include <QPlainTextEdit>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class LoadDialogWindow;
}

class LoadDialogWindow : public QDialog
{
    Q_OBJECT

    public:
    LoadDialogWindow(QMainWindow *parent = nullptr);
    ~LoadDialogWindow();

    public slots:

    private:
    Ui::LoadDialogWindow *ui;
};

#endif // LOADDIALOGWINDOW_H
