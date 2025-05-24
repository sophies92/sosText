/**
 * @file
 * @brief
 * @author
 */
#ifndef WELCOMETAB_H
#define WELCOMETAB_H

#include <QWidget>

#include "../../../project/project.h"
#include "../../../project/file.h"

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

    // Signals
    signals:
    void newFileButtonPressed();
    void openFileButtonPressed(Project::File);
    void newProjectButtonPressed();
    void openProjectButtonPressed(Project::Project*);

    // Private Functions
};

#endif // WELCOMETAB_H