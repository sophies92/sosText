/**
 * @file
 * @brief
 * @author
 */
#ifndef NEWFILETAB_H
#define NEWFILETAB_H

#include <QWidget>

namespace Ui
{
    class NewFileTab;
}

class NewFileTab : public QWidget
{
    private:
    Ui::NewFileTab *ui;

    public:
    NewFileTab(QWidget *parent = nullptr);
    ~NewFileTab();
};

#endif // NEWFILETAB