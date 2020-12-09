#pragma once
#include "repository.h"

Repository::Repository() 
{
	
	conn = &(QSqlDatabase::addDatabase("QSQLITE"));
	conn->setDatabaseName("student.sqlite");

	if (!conn->open()) 
	{
		qDebug() << conn->lastError().text();
	}
	else {
		qDebug() << "ok";
	}

	
	
}