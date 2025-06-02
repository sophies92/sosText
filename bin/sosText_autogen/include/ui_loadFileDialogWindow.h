/********************************************************************************
** Form generated from reading UI file 'loadFileDialogWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADFILEDIALOGWINDOW_H
#define UI_LOADFILEDIALOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoadFileDialogWindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *filepath;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QListWidget *listWidget;
    QListView *listView;
    QTreeView *directories;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LoadFileDialogWindow)
    {
        if (LoadFileDialogWindow->objectName().isEmpty())
            LoadFileDialogWindow->setObjectName("LoadFileDialogWindow");
        LoadFileDialogWindow->resize(600, 535);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoadFileDialogWindow->sizePolicy().hasHeightForWidth());
        LoadFileDialogWindow->setSizePolicy(sizePolicy);
        LoadFileDialogWindow->setMinimumSize(QSize(600, 500));
        gridLayout = new QGridLayout(LoadFileDialogWindow);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(10, 10, 10, 10);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        frame = new QFrame(LoadFileDialogWindow);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(0, 20));
        frame->setMaximumSize(QSize(16777215, 30));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        filepath = new QPlainTextEdit(frame);
        filepath->setObjectName("filepath");
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(filepath->sizePolicy().hasHeightForWidth());
        filepath->setSizePolicy(sizePolicy2);
        filepath->setMinimumSize(QSize(400, 20));
        filepath->setMaximumSize(QSize(16777215, 50));

        horizontalLayout->addWidget(filepath);


        verticalLayout->addWidget(frame);

        splitter_2 = new QSplitter(LoadFileDialogWindow);
        splitter_2->setObjectName("splitter_2");
        sizePolicy.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy);
        splitter_2->setOrientation(Qt::Horizontal);
        splitter_2->setHandleWidth(5);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName("splitter");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy3);
        splitter->setMinimumSize(QSize(100, 0));
        splitter->setMaximumSize(QSize(200, 16777215));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(5);
        listWidget = new QListWidget(splitter);
        listWidget->setObjectName("listWidget");
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy4);
        listWidget->setMinimumSize(QSize(100, 0));
        listWidget->setMaximumSize(QSize(200, 16777215));
        splitter->addWidget(listWidget);
        listView = new QListView(splitter);
        listView->setObjectName("listView");
        sizePolicy4.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy4);
        listView->setMinimumSize(QSize(100, 0));
        listView->setMaximumSize(QSize(200, 16777215));
        splitter->addWidget(listView);
        splitter_2->addWidget(splitter);
        directories = new QTreeView(splitter_2);
        directories->setObjectName("directories");
        sizePolicy4.setHeightForWidth(directories->sizePolicy().hasHeightForWidth());
        directories->setSizePolicy(sizePolicy4);
        directories->setMinimumSize(QSize(400, 400));
        directories->setMaximumSize(QSize(16777215, 16777215));
        directories->setDragEnabled(true);
        directories->setAnimated(true);
        splitter_2->addWidget(directories);
        directories->header()->setCascadingSectionResizes(false);
        directories->header()->setDefaultSectionSize(200);
        directories->header()->setStretchLastSection(true);

        verticalLayout->addWidget(splitter_2);

        buttonBox = new QDialogButtonBox(LoadFileDialogWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(LoadFileDialogWindow);

        QMetaObject::connectSlotsByName(LoadFileDialogWindow);
    } // setupUi

    void retranslateUi(QDialog *LoadFileDialogWindow)
    {
        LoadFileDialogWindow->setWindowTitle(QCoreApplication::translate("LoadFileDialogWindow", "Load File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadFileDialogWindow: public Ui_LoadFileDialogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADFILEDIALOGWINDOW_H
