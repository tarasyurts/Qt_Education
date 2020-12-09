#include "volumewindow.h"
#include "ui_volumewindow.h"

VolumeWindow::VolumeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VolumeWindow)
{
    ui->setupUi(this);
}

VolumeWindow::~VolumeWindow()
{
    delete ui;
}

void VolumeWindow::setData(QString str){
    ui->figureName->setText(str);
    figureName = str;
    if(str == "Prism"){
        ui->firstParamLabel->setText("Площа основи");
        ui->secondParamLabel->setText("Висота");
    }else if(str == "Cone"){
        ui->firstParamLabel->setText("Радіус основи");
        ui->secondParamLabel->setText("Висота");
    }
}

void VolumeWindow::on_calsBtn_clicked()
{
    double result;
    if(figureName == "Prism"){
        result = ui->firstParamLabel->text().toDouble() * ui->secondParamLabel->text().toDouble();
    }else if(figureName == "Cone"){
        result = 1/3 * M_PI * qPow(ui->firstParamLabel->text().toDouble(), 2) * ui->secondParamLabel->text().toDouble();
    }

    QString message = "Результат = " + QString::number(result) +  " .Зберегти результут у файл?";

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Result", message,
                                    QMessageBox::Yes|QMessageBox::No);
      if (reply == QMessageBox::Yes) {


      } else {
      }
}
