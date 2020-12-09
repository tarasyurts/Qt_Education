#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QLab_db.h"
#include "repository.h"

class QLab_db : public QMainWindow
{
    Q_OBJECT

public:
    QLab_db(QWidget *parent = Q_NULLPTR);

    Repository* repo;

private:
    Ui::QLab_dbClass ui;

    QSqlTableModel* model;

public slots:
    void find();
    void showAll();
};
