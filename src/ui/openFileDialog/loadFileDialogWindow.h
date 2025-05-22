#ifndef LOADFILEDIALOGWINDOW_H
#define LOADFILEDIALOGWINDOW_H


#include <QDialog>
#include <QMainWindow>

#include "../../project/project.h"

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
    LoadFileDialogWindow(QMainWindow *parent = nullptr, Project::Project *project);
    ~LoadFileDialogWindow();

    // Public UI slots
    public slots:
    void openFileButton();
    
    // Private functions
    private:
};

#endif // LOADFILEDIALOGWINDOW_H
