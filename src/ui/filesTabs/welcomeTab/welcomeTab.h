/**
 * @file
 * @brief
 * @author
 */
#ifndef WELCOMETAB_H
#define WELCOMETAB_H

#include <QWidget>

namespace Ui
{
    class WelcomeTab;
}

class WelcomeTab : public QWidget
{
    Q_OBJECT

    // Public Variables

    // Private Variables
    private:
    Ui::WelcomeTab *ui;

    // Public Functions
    public:
    WelcomeTab(QWidget *parent = nullptr);
    ~WelcomeTab();

    // Private Functions
};

#endif // WELCOMETAB_H