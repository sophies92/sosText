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
        void close();
    };
}
#endif // SETTINGSWINDOW_H