#include "areawindow.h"
#include "ui_areawindow.h"

AreaWindow::AreaWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AreaWindow)
{
    ui->setupUi(this);
}

AreaWindow::~AreaWindow()
{
    delete ui;
}
void AreaWindow::setData(QString str){
    ui->figureName->setText(str);
    figureName = str;
    if(str == "Triangle"){
        ui->firstParamLabel->setText("Основа");
        ui->secondParamLabel->setText("Висота");
    }else if(str == "Rectangle"){
        ui->firstParamLabel->setText("Сторона");
        ui->secondParamLabel->setText("Сторона");
    }
}
