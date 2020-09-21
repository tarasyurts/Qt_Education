#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QDir dir("C:/");
    dir.mkdir("images");

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QPixmap pix("C:/images/image.jpg");
    int width = ui->Image->width();
    int height = ui->Image->height();

    ui->Image->setPixmap(pix.scaled(width, height, Qt::KeepAspectRatio));
}
