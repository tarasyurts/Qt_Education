#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    dbConn = new DBConnector();
    model = new QSqlTableModel();

    model->setTable("student");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnFieldChange);


    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

