#include "sort.h"
#include "ui_sort.h"

Sort::Sort(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Sort)
    , mainWidget(static_cast<Widget*>(parent))
{
    ui->setupUi(this);
    this->setWindowTitle("Поиск");
}

Sort::~Sort()
{
    delete ui;
}

void Sort::on_OK_btn_clicked()
{
    if (ui->Distant_box->currentIndex() != 0
        || ui->Name_rbtn->isChecked()
        || ui->Type_rbtn->isChecked()
        || ui->Time_rbtn->isChecked())
    {
        if (ui->Distant_box->currentIndex() != 0)
        {
            if (ui->Distant_box->currentIndex() == 1)
            {
                mainWidget->updateTable();
                filterByDistance(100);
            }
            else if (ui->Distant_box->currentIndex() == 2)
            {
                mainWidget->updateTable();
                filterByDistance(1000);
            }
            else if (ui->Distant_box->currentIndex() == 3)
            {
                mainWidget->updateTable();
                filterByDistance(10000);
            }
            else if (ui->Distant_box->currentIndex() == 4)
            {
                mainWidget->updateTable();
                filterByDistance(10000000);
            }
        }
        else if (ui->Name_rbtn->isChecked())
        {
            if (ui->Name_line->text().isEmpty())
            {
                QMessageBox::warning(this, "Предупреждение", "Строка поиска пуста!");
            }
            else
            {
                mainWidget->updateTable();
                filterByName(ui->Name_line->text()[0]);
            }
        }
        else if (ui->Type_rbtn->isChecked())
        {
            mainWidget->updateTable();
            filterByType(ui->Type_line->text()[0]);
        }
        else if (ui->Time_rbtn->isChecked())
        {
            mainWidget->updateTable();
            filterByCreationTime();
        }
    }
    else
    {
        QMessageBox::warning(this, "Предупреждение", "Выберите способ сортировки!");
    }
    accept();
}

void Sort::filterByDistance(double maxDistance)
{
    if (!mainWidget) return;

    QTableWidget* table = mainWidget->getMainTable();
    if (!table) return;

    for (int i = 0; i < table->rowCount(); ++i)
    {
        double x = table->item(i, 1)->text().toDouble();
        double y = table->item(i, 2)->text().toDouble();

        double distance = std::sqrt(std::pow(x, 2) + std::pow(y, 2));

        if (distance > maxDistance)
        {
            table->removeRow(i);
            --i;
        }
    }
}

void Sort::filterByName(QChar searchChar)
{
    if (!mainWidget) return;

    QTableWidget* table = mainWidget->getMainTable();
    if (!table) return;

    QList<QList<QTableWidgetItem*>> filteredRows;

    for (int i = 0; i < table->rowCount(); ++i)
    {
        QString name = table->item(i, 0)->text();

        if (name.isEmpty()) continue;

        QChar firstChar = name[0].toUpper();
        QString groupKey = firstChar.isLetter() ? firstChar : '#';

        if (groupKey == searchChar.toUpper() || (searchChar == '#' && groupKey == '#'))
        {
            QList<QTableWidgetItem*> rowItems;

            for (int col = 0; col < table->columnCount(); ++col)
            {
                rowItems.append(table->item(i, col)->clone());
            }

            filteredRows.append(rowItems);
        }
    }

    std::sort(filteredRows.begin(), filteredRows.end(), [](const QList<QTableWidgetItem*>& a, const QList<QTableWidgetItem*>& b)
              {
        return a[0]->text() < b[0]->text();
    });

    table->setRowCount(0);

    for (int i = 0; i < filteredRows.size(); ++i)
    {
        table->insertRow(i);
        for (int col = 0; col < filteredRows[i].size(); ++col)
        {
            table->setItem(i, col, filteredRows[i][col]);
        }
    }
}

void Sort::filterByType(QChar searchChar)
{
    if (!mainWidget) return;

    QTableWidget* table = mainWidget->getMainTable();
    if (!table) return;


    QList<QList<QTableWidgetItem*>> filteredRows;


    for (int i = 0; i < table->rowCount(); ++i)
    {
        QString type = table->item(i, 3)->text();

        if (type.isEmpty()) continue;

        QChar firstChar = type[0].toUpper();
        QString groupKey = firstChar.isLetter() ? firstChar : '#';


        if (groupKey == searchChar.toUpper() || (searchChar == '#' && groupKey == '#'))
        {
            QList<QTableWidgetItem*> rowItems;


            for (int col = 0; col < table->columnCount(); ++col)
            {
                rowItems.append(table->item(i, col)->clone());
            }

            filteredRows.append(rowItems);
        }
    }

    std::sort(filteredRows.begin(), filteredRows.end(), [](const QList<QTableWidgetItem*>& a, const QList<QTableWidgetItem*>& b)
    {
        return a[3]->text() < b[3]->text();
    });

    table->setRowCount(0);

    for (int i = 0; i < filteredRows.size(); ++i)
    {
        table->insertRow(i);
        for (int col = 0; col < filteredRows[i].size(); ++col)
        {
            table->setItem(i, col, filteredRows[i][col]);
        }
    }
}

void Sort::filterByCreationTime()
{
    if (!mainWidget) return;

    QTableWidget* table = mainWidget->getMainTable();
    if (!table) return;

    QVector<QPair<QDateTime, QList<QTableWidgetItem*>>> rowsWithTime;

    for (int i = 0; i < table->rowCount(); ++i)
    {
        QString timestampStr = table->item(i, 4)->text();

        if (timestampStr.isEmpty()) continue;


        bool ok;
        double timestamp = timestampStr.toDouble(&ok);
        if (!ok) continue;


        QDateTime dateTime = QDateTime::fromSecsSinceEpoch(static_cast<qint64>(timestamp));
        if (!dateTime.isValid()) continue;

        QList<QTableWidgetItem*> rowItems;


        for (int col = 0; col < table->columnCount(); ++col)
        {
            rowItems.append(table->item(i, col)->clone());
        }

        rowsWithTime.append(QPair<QDateTime, QList<QTableWidgetItem*>>(dateTime, rowItems));
    }

    std::sort(rowsWithTime.begin(), rowsWithTime.end(), [](const QPair<QDateTime, QList<QTableWidgetItem*>>& a,
                                                           const QPair<QDateTime, QList<QTableWidgetItem*>>& b)
    {
        return a.first < b.first;
    });

    table->setRowCount(0);

    for (int i = 0; i < rowsWithTime.size(); ++i)
    {
        table->insertRow(i);
        for (int col = 0; col < rowsWithTime[i].second.size(); ++col)
        {
            table->setItem(i, col, rowsWithTime[i].second[col]);
        }
    }
}

void Sort::on_Type_rbtn_clicked()
{
    ui->Name_line->setEnabled(false);
    ui->Distant_box->setEnabled(false);
    ui->Type_line->setEnabled(true);
}

void Sort::on_Name_rbtn_clicked()
{
    ui->Name_line->setEnabled(true);
    ui->Distant_box->setEnabled(false);
    ui->Type_line->setEnabled(false);
}

void Sort::on_Distant_rbtn_clicked()
{
    ui->Distant_box->setEnabled(true);
    ui->Name_line->setEnabled(false);
    ui->Type_line->setEnabled(false);
}

void Sort::on_Cancel_btn_clicked()
{
    reject();
}



