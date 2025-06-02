/********************************************************************************
** Form generated from reading UI file 'welcomeTab.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMETAB_H
#define UI_WELCOMETAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeTab
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QCommandLinkButton *newFileButton;
    QCommandLinkButton *openFileButton;
    QCommandLinkButton *newProjectButton;
    QCommandLinkButton *openProjectButton;
    QFrame *frame;

    void setupUi(QWidget *WelcomeTab)
    {
        if (WelcomeTab->objectName().isEmpty())
            WelcomeTab->setObjectName("WelcomeTab");
        WelcomeTab->resize(701, 580);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WelcomeTab->sizePolicy().hasHeightForWidth());
        WelcomeTab->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(WelcomeTab);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(WelcomeTab);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(WelcomeTab);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        newFileButton = new QCommandLinkButton(WelcomeTab);
        newFileButton->setObjectName("newFileButton");
        newFileButton->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(newFileButton);

        openFileButton = new QCommandLinkButton(WelcomeTab);
        openFileButton->setObjectName("openFileButton");
        openFileButton->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(openFileButton);

        newProjectButton = new QCommandLinkButton(WelcomeTab);
        newProjectButton->setObjectName("newProjectButton");
        newProjectButton->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(newProjectButton);

        openProjectButton = new QCommandLinkButton(WelcomeTab);
        openProjectButton->setObjectName("openProjectButton");
        openProjectButton->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(openProjectButton);

        frame = new QFrame(WelcomeTab);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);


        retranslateUi(WelcomeTab);

        QMetaObject::connectSlotsByName(WelcomeTab);
    } // setupUi

    void retranslateUi(QWidget *WelcomeTab)
    {
        WelcomeTab->setWindowTitle(QCoreApplication::translate("WelcomeTab", "Form", nullptr));
        label->setText(QCoreApplication::translate("WelcomeTab", "Welcome to sosText", nullptr));
        label_2->setText(QCoreApplication::translate("WelcomeTab", "What would you like to do?", nullptr));
        newFileButton->setText(QCoreApplication::translate("WelcomeTab", "Start a New File", nullptr));
        openFileButton->setText(QCoreApplication::translate("WelcomeTab", "Open an Existing File", nullptr));
        newProjectButton->setText(QCoreApplication::translate("WelcomeTab", "Start a New Project", nullptr));
        openProjectButton->setText(QCoreApplication::translate("WelcomeTab", "Open an Existing Project", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeTab: public Ui_WelcomeTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMETAB_H
