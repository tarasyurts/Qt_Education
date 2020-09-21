#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initialTODO();
}

void MainWindow::initialTODO(){
}


void MainWindow::on_changeWidgetBtn_clicked()
{
    ui->widgetToChange->setText(QString::number(++clickCounter));
}

MainWindow::~MainWindow()
{
    delete ui;
}
