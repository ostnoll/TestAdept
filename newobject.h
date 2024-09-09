#ifndef NEWOBJECT_H
#define NEWOBJECT_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>
#include "widget.h"
#include "ui_newobject.h"

class Widget;

namespace Ui {
class NewObject;
}

class NewObject : public QDialog
{
    Q_OBJECT

public:
    explicit NewObject(QWidget *parent = nullptr);
    ~NewObject();

private slots:
    void on_Cancel_btn_clicked();
    void on_OK_btn_clicked();

private:
    Ui::NewObject *ui;
    Widget *mainWidget;
};

#endif // NEWOBJECT_H
