/********************************************************************************
** Form generated from reading UI file 'newFileTab.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILETAB_H
#define UI_NEWFILETAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewFileTab
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;

    void setupUi(QWidget *NewFileTab)
    {
        if (NewFileTab->objectName().isEmpty())
            NewFileTab->setObjectName("NewFileTab");
        NewFileTab->resize(785, 441);
        gridLayout = new QGridLayout(NewFileTab);
        gridLayout->setObjectName("gridLayout");
        textEdit = new QTextEdit(NewFileTab);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);


        retranslateUi(NewFileTab);

        QMetaObject::connectSlotsByName(NewFileTab);
    } // setupUi

    void retranslateUi(QWidget *NewFileTab)
    {
        NewFileTab->setWindowTitle(QCoreApplication::translate("NewFileTab", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewFileTab: public Ui_NewFileTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILETAB_H
