/**
 * @file
 * @brief
 * @author
 */
#ifndef NEWPROJECTWINDOW_H
#define NEWPROJECTWINDOW_H

#include <QWidget>

namespace Ui
{
    class NewProjectWindow;
}

namespace sosText
{
    namespace ui
    {
        class NewProjectWindow : public QWidget
        {
            Q_OBJECT

            private:
            Ui::NewProjectWindow *ui;

            public: 
            NewProjectWindow(QWidget *parent = nullptr);
            ~NewProjectWindow();
        };
    }
}

#endif // NEWPROJECTWINDOW_H