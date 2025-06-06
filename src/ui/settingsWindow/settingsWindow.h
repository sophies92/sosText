/**
 * @file settingsWindow.h
 * @brief
 * @author
 */
#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QWidget>

namespace Ui
{
    class SettingsWindow;
}

namespace sosText
{
    namespace ui
    {
        class SettingsWindow : public QWidget
        {
            Q_OBJECT

            private:
            Ui::SettingsWindow *ui;

            public:
            /**
             * @fn
             * @brief
             */
            SettingsWindow(QWidget *parent = nullptr);
            /**
             * @fn
             * @brief
             */
            ~SettingsWindow();
            /**
             * @fn
             * @brief
             * @param none
             * @return none
             */

            public slots:
            void close();

            signals:
            void requestAllSettings();
        };
    }
}
#endif // SETTINGSWINDOW_H