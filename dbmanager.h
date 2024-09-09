#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <QTableWidget>
#include <QFile>
#include <QDebug>

class DBManager : public QObject
{
    Q_OBJECT
public:
    explicit DBManager(QObject *parent = nullptr);
    void openFile(QTableWidget *table, const QString &filename);

signals:
};

#endif // DBMANAGER_H
