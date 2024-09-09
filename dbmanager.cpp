#include "dbmanager.h"

DBManager::DBManager(QObject *parent)
    : QObject{parent}
{}

void DBManager::openFile(QTableWidget* table, const QString& filename)
{

    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Не удалось открыть файл";
        return;
    }

    QTextStream in(&file);
    int row = 0;

    table->setRowCount(0);
    table->setColumnCount(5);

    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList columns = line.split(QRegExp("\\s+"));

        if (columns.size() < 5)
        {
            qDebug() << "Некорректная строка: " << line;
            continue;
        }
        table->insertRow(row);

        for (int col = 0; col < 5; ++col)
        {
            table->setItem(row, col, new QTableWidgetItem(columns[col]));
        }
        ++row;
    }

    table->setHorizontalHeaderItem(0, new QTableWidgetItem("Имя"));
    table->setHorizontalHeaderItem(1, new QTableWidgetItem("Координата X"));
    table->setHorizontalHeaderItem(2, new QTableWidgetItem("Координата Y"));
    table->setHorizontalHeaderItem(3, new QTableWidgetItem("Тип объекта"));
    table->setHorizontalHeaderItem(4, new QTableWidgetItem("Время создания"));

    file.close();
}

