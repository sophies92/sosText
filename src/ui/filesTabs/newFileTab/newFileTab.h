/**
 * @file
 * @brief
 * @author
 */
#ifndef NEWFILETAB_H
#define NEWFILETAB_H

#include <QWidget>
#include <QPlainTextEdit>

#include "../../../project/file.h"

namespace Ui
{
    class NewFileTab;
}

class NewFileTab : public QWidget
{
    public:
    QPlainTextEdit *textEdit;
    Project::File *file;

    private:
    Ui::NewFileTab *ui;

    public:
    NewFileTab(QWidget *parent = nullptr);
    ~NewFileTab();
};

#endif // NEWFILETAB