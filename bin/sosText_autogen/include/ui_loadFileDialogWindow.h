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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoadFileDialogWindow
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPlainTextEdit *filepath;
    QSplitter *splitter;
    QTreeView *directories;
    QListWidget *files;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LoadFileDialogWindow)
    {
        if (LoadFileDialogWindow->objectName().isEmpty())
            LoadFileDialogWindow->setObjectName("LoadFileDialogWindow");
        LoadFileDialogWindow->resize(610, 557);
        verticalLayout = new QVBoxLayout(LoadFileDialogWindow);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(LoadFileDialogWindow);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 50));
        frame->setMaximumSize(QSize(16777215, 50));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButton_2);

        filepath = new QPlainTextEdit(frame);
        filepath->setObjectName("filepath");
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(filepath->sizePolicy().hasHeightForWidth());
        filepath->setSizePolicy(sizePolicy1);
        filepath->setMinimumSize(QSize(400, 20));

        horizontalLayout->addWidget(filepath);


        verticalLayout->addWidget(frame);

        splitter = new QSplitter(LoadFileDialogWindow);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        directories = new QTreeView(splitter);
        directories->setObjectName("directories");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(directories->sizePolicy().hasHeightForWidth());
        directories->setSizePolicy(sizePolicy2);
        directories->setMinimumSize(QSize(150, 400));
        directories->setMaximumSize(QSize(300, 16777215));
        directories->setDragEnabled(true);
        splitter->addWidget(directories);
        files = new QListWidget(splitter);
        files->setObjectName("files");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(files->sizePolicy().hasHeightForWidth());
        files->setSizePolicy(sizePolicy3);
        files->setMinimumSize(QSize(300, 400));
        files->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        splitter->addWidget(files);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(LoadFileDialogWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LoadFileDialogWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), LoadFileDialogWindow, SLOT(openFileButton()));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LoadFileDialogWindow, qOverload<>(&QDialog::reject));
        QObject::connect(files, SIGNAL(itemClicked(QListWidgetItem*)), LoadFileDialogWindow, SLOT(filesListItemClicked(QListWidgetItem*)));

        QMetaObject::connectSlotsByName(LoadFileDialogWindow);
    } // setupUi

    void retranslateUi(QDialog *LoadFileDialogWindow)
    {
        LoadFileDialogWindow->setWindowTitle(QCoreApplication::translate("LoadFileDialogWindow", "Load File", nullptr));
        pushButton->setText(QCoreApplication::translate("LoadFileDialogWindow", "Up", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoadFileDialogWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadFileDialogWindow: public Ui_LoadFileDialogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADFILEDIALOGWINDOW_H
