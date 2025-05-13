/********************************************************************************
** Form generated from reading UI file 'loadDialogWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADDIALOGWINDOW_H
#define UI_LOADDIALOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoadDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit;
    QSplitter *splitter;
    QTreeView *treeView;
    QListWidget *listWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LoadDialog)
    {
        if (LoadDialog->objectName().isEmpty())
            LoadDialog->setObjectName("LoadDialog");
        LoadDialog->resize(610, 557);
        verticalLayout = new QVBoxLayout(LoadDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(LoadDialog);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 20));
        label->setMaximumSize(QSize(16777215, 20));
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        frame = new QFrame(LoadDialog);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(0, 50));
        frame->setMaximumSize(QSize(16777215, 50));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButton_2);

        plainTextEdit = new QPlainTextEdit(frame);
        plainTextEdit->setObjectName("plainTextEdit");
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy2);
        plainTextEdit->setMinimumSize(QSize(400, 20));

        horizontalLayout->addWidget(plainTextEdit);


        verticalLayout->addWidget(frame);

        splitter = new QSplitter(LoadDialog);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        treeView = new QTreeView(splitter);
        treeView->setObjectName("treeView");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy3);
        treeView->setMinimumSize(QSize(150, 400));
        treeView->setMaximumSize(QSize(300, 16777215));
        splitter->addWidget(treeView);
        listWidget = new QListWidget(splitter);
        listWidget->setObjectName("listWidget");
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy4);
        listWidget->setMinimumSize(QSize(300, 400));
        splitter->addWidget(listWidget);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(LoadDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LoadDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LoadDialog, qOverload<>(&QDialog::open));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LoadDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LoadDialog);
    } // setupUi

    void retranslateUi(QDialog *LoadDialog)
    {
        LoadDialog->setWindowTitle(QCoreApplication::translate("LoadDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LoadDialog", "Open File", nullptr));
        pushButton->setText(QCoreApplication::translate("LoadDialog", "Up", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoadDialog", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadDialog: public Ui_LoadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADDIALOGWINDOW_H
