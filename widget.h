#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "dbmanager.h"
#include "newobject.h"
#include "sort.h"
#include <QDateTime>


QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void saveObj(const QString name, const QString X, const QString Y, const QString type);
    QTableWidget *getMainTable() const;
    void updateTable();

private slots:
    void on_FullLint_btn_clicked();
    void on_NewObj_btn_clicked();
    void on_Delete_btn_clicked();
    void on_Sort_btn_clicked();
    void on_SaveFile_btn_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
