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

class SettingsWindow : public QWidget
{
    Q_OBJECT

    private:
    Ui::SettingsWindow *ui;

    public:
    SettingsWindow(QWidget *parent = nullptr);
    ~SettingsWindow();
};

#endif // SETTINGSWINDOW_H