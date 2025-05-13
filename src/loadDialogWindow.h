#ifndef LOADDIALOGWINDOW_H
#define LOADDIALOGWINDOW_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class LoadDialogWindow;
};
QT_END_NAMESPACE

class LoadDialogWindow : public QDialog
{
    Q_OBJECT

    public:
    LoadDialogWindow(QWidget *parent = nullptr);
    ~LoadDialogWindow();

    private:
    Ui::LoadDialogWindow *ui;
};


#endif // LOADDIALOGWINDOW_H
