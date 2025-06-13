/**
 * @file
 * @brief
 * @author
 */
#ifndef NEWPROJECTWINDOW_H
#define NEWPROJECTWINDOW_H

#include <QWidget>
#include <QWizard>

namespace Ui
{
    class NewProjectWindow;
}

namespace sosText
{
    namespace ui
    {
        class NewProjectWindow : public QWizard
        {
            Q_OBJECT

            private:
            Ui::NewProjectWindow *ui;

            public: 
            NewProjectWindow(QWidget *parent = nullptr);
            ~NewProjectWindow();

            Ui::NewProjectWindow *getUi();

            signals:
            void requestFileBrowserSignal();
        };
    }
}

#endif // NEWPROJECTWINDOW_H