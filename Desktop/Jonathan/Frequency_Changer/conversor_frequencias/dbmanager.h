#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <includes.h>
#include "pcan.h"

class DbManager : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVector<double> load READ getLoad NOTIFY LoadChanged());
    Q_PROPERTY(QVector<double> load2 READ getLoad2 NOTIFY LoadChanged2());
    Q_PROPERTY(QString getlast READ getlast NOTIFY LastChanged());
    Q_PROPERTY(QString deleteFirst READ deleteFirst)

public:
    DbManager();
    QString lastOne();
    void newSession();
    void insertSession();
    void createTable();
    void dropOlderTable();
    void keep100rows();
    Q_INVOKABLE QVector<QString> selectAllTables();
    void insertIntoTable();
    void selectLoad();
    void selectLoad2();
    Q_INVOKABLE QVector<double> loadParameter(const QString &currentTable);
    Q_INVOKABLE QVector<double> getLoad() const;
    Q_INVOKABLE QVector<double> getLoad2() const;
    QString getlast() const;
    QString deleteFirst();
signals:
    void LoadChanged();
    void LoadChanged2();
    void AllTablesChanged();
    void LastChanged();
private:
    QSqlDatabase m_db;

};

#endif // DBMANAGER_H
