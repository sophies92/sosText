/**
 * @file
 * @brief
 * @author
 */
#ifndef WELCOMETAB_H
#define WELCOMETAB_H

#include <QWidget>

#include "../newFileTab/newFileTab.h"

namespace Ui
{
    class WelcomeTab;
}

namespace sosText
{
    namespace ui
    {
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

            public slots:
            void newFileButtonPressed();
            void openFileButtonPressed();
            void newProjectButtonPressed();
            void openProjectButtonPressed();

            // Signals
            signals:
            void newFileButtonPressedSignal();
            void openFileButtonPressedSignal();
            void newProjectButtonPressedSignal();
            void openProjectButtonPressedSignal();

            // Private Functions
        };
    }
}

#endif // WELCOMETAB_H