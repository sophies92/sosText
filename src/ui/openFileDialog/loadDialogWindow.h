#ifndef LOADDIALOGWINDOW_H
#define LOADDIALOGWINDOW_H

#include <QDialog>
#include <QMainWindow>
#include <QPlainTextEdit>

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
    void loadFile();

    private:
    Ui::LoadDialogWindow *ui;

    QPlainTextEdit *filePathText;

};

#endif // LOADDIALOGWINDOW_H
