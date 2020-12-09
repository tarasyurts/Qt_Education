#ifndef DBCONNECTOR_H
#define DBCONNECTOR_H

#include <QtSql/QSqlDatabase>
#include <QTableView>

class DBConnector
{
public:
    DBConnector();
    QSqlDatabase conn;
};

#endif // DBCONNECTOR_H
