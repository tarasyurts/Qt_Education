#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_setPhotoBtn_clicked()
{
    QPixmap userPhotoPixmap(":/img/userImg.jpg");

    int w = ui->userPhoto->width();
    int h = ui->userPhoto->height();
    ui->userPhoto->setPixmap(userPhotoPixmap.scaled(w,h,Qt::KeepAspectRatio));
}
