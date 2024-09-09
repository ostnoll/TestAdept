#include "widget.h"
#include "./ui_widget.h"

DBManager db;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->MainTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    db.openFile(ui->MainTable, "db.txt");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_FullLint_btn_clicked()
{
    db.openFile(ui->MainTable, "db.txt");
}

void Widget::updateTable()
{
    db.openFile(ui->MainTable, "db.txt");
}

void Widget::on_NewObj_btn_clicked()
{
    NewObject dialog(this);
    dialog.exec();
}

void Widget::saveObj(const QString name, const QString X, const QString Y, const QString type)
{
    qDebug() << "Добавление строки: " << name << X << Y << type;

    QString creationTime = QString::number(QDateTime::currentDateTime().toMSecsSinceEpoch() / 1000.0, 'f', 3);

    int row = ui->MainTable->rowCount();
    ui->MainTable->insertRow(row);

    ui->MainTable->setItem(row, 0, new QTableWidgetItem(name));
    ui->MainTable->setItem(row, 1, new QTableWidgetItem(X));
    ui->MainTable->setItem(row, 2, new QTableWidgetItem(Y));
    ui->MainTable->setItem(row, 3, new QTableWidgetItem(type));
    ui->MainTable->setItem(row, 4, new QTableWidgetItem(creationTime));
}


void Widget::on_Delete_btn_clicked()
{
    QList<QTableWidgetItem*> selectedItems = ui->MainTable->selectedItems();

    if (!selectedItems.isEmpty())
    {
        int row = selectedItems.first()->row();

        ui->MainTable->removeRow(row);
    }
    else
    {
        QMessageBox::warning(this, "Предупреждение", "Пожалуйста, выберите строку для удаления.");
    }
}

void Widget::on_Sort_btn_clicked()
{
    Sort dialog(this);
    dialog.exec();
}

QTableWidget* Widget::getMainTable() const
{
    return ui->MainTable;
}

void Widget::on_SaveFile_btn_clicked()
{
    QString filename = "db.txt";
    QFile file(filename);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::critical(this, "Ошибка", "Не удалось открыть файл для записи.");
        return;
    }

    QTextStream out(&file);

    for (int row = 0; row < ui->MainTable->rowCount(); ++row)
    {
        QStringList rowData;

        for (int col = 0; col < ui->MainTable->columnCount(); ++col)
        {
            QTableWidgetItem* item = ui->MainTable->item(row, col);
            if (item)
            {
                QString text = item->text();

                if (col == 4)
                {
                    bool ok;
                    double timestamp = text.toDouble(&ok);
                    if (ok)
                    {
                        text = QString::number(timestamp, 'f', 3);
                    }
                }

                rowData << text;
            }
            else
            {
                rowData << "";  // Пустое значение, если ячейка отсутствует
            }
        }

        // Записываем строку в файл, разделяя значения пробелами
        out << rowData.join(' ') << '\n';
    }

    file.close();
    QMessageBox::information(this, "Сохранение", "Данные успешно сохранены в файл.");
}


