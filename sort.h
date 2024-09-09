#ifndef SORT_H
#define SORT_H

#include <QDialog>
#include <QMessageBox>
#include <cmath>
#include "widget.h"


class Widget;

namespace Ui {
class Sort;
}

class Sort : public QDialog
{
    Q_OBJECT

public:
    explicit Sort(QWidget *parent = nullptr);
    ~Sort();

private slots:
    void on_OK_btn_clicked();
    void on_Cancel_btn_clicked();
    void on_Distant_rbtn_clicked();
    void on_Name_rbtn_clicked();
    void on_Type_rbtn_clicked();

private:
    Ui::Sort *ui;
    Widget *mainWidget;
    void filterByDistance(double maxDistance);
    void filterByName(QChar searchChar);
    void filterByType(QChar searchChar);
    void filterByCreationTime();
};

#endif // SORT_H
