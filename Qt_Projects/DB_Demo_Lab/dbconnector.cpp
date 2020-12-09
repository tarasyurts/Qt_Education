#include "dbconnector.h"


DBConnector::DBConnector()
{
    conn = (QSqlDatabase::addDatabase("QSQLITE"));
    conn.setDatabaseName("student.sqlite");

    !conn.open();

}
