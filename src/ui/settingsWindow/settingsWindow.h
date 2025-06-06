/**
 * @file settingsWindow.h
 * @brief
 * @author
 */
#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QWidget>

#include "../../settings/setting.h"

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
             * @fn SettingsWindow(QWidget *parent = nullptr)
             * @brief The constructor for SettingsWindow
             * @param parent A pointer to the parent object. Default=nullptr
             */
            SettingsWindow(QWidget *parent = nullptr);
            /**
             * @fn ~SettingsWindow()
             * @brief The destructor for SettingsWindow
             */
            ~SettingsWindow();
            

            public slots:
            /**
             * @fn
             * @brief
             * @param none
             * @return none
             */
            void close();
            /**
             * @fn
             * @brief
             * @param none
             * @return none
             */
            void allSettingsRequestReturn(std::map<std::string, sosText::settings::Setting> *allSettings);

            signals:
            /**
             * @fn
             * @brief
             * @param none
             * @return none
             */
            void requestAllSettings();
        };
    }
}
#endif // SETTINGSWINDOW_H