#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QDialog>

#include "ui_sortdialog.h"

class SortDialog : public QDialog, public Ui::SortDialog
{
    Q_OBJECT

public:
    SortDialog(QWidget *parent = nullptr);
//    ~SortDialog();

    void setColumnRange(QChar first, QChar last);

private slots:
    void SetmoreButtonText();
};
#endif // SORTDIALOG_H
