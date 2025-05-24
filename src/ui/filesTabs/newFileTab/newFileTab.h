/**
 * @file
 * @brief
 * @author
 */
#ifndef NEWFILETAB_H
#define NEWFILETAB_H

#include <QWidget>
#include <QTextEdit>

namespace Ui
{
    class NewFileTab;
}

class NewFileTab : public QWidget
{
    public:
    QTextEdit *textEdit;

    private:
    Ui::NewFileTab *ui;

    public:
    NewFileTab(QWidget *parent = nullptr);
    ~NewFileTab();
};

#endif // NEWFILETAB