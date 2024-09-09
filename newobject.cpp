#include "newobject.h"

NewObject::NewObject(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewObject),
    mainWidget(static_cast<Widget*>(parent))
{
    ui->setupUi(this);
    this->setWindowTitle("Новый объект");
}

NewObject::~NewObject()
{
    delete ui;
}

void NewObject::on_OK_btn_clicked()
{
    if(ui->Name_line->text().isEmpty()
        || ui->X_line->text().isEmpty()
        || ui->Y_line->text().isEmpty()
        || ui->Type_box->currentIndex() == 0)
    {
        QMessageBox::warning(this, "Предупреждение", "Не все поля были заполнены!");
    }
    else
    {
        mainWidget->saveObj(ui->Name_line->text(), ui->X_line->text(), ui->Y_line->text(), ui->Type_box->currentText());
        accept();
    }
}

void NewObject::on_Cancel_btn_clicked()
{
    reject();
}
