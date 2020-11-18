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


void MainWindow::on_countBtn_clicked()
{
    double aVal = ui->aLE->text().toDouble();
    double bVal = ui->bLE->text().toDouble();
    double cVal = ui->cLE->text().toDouble();
    ui->resultLbl->setText(countQuadratic(aVal, bVal, cVal));
}

QString MainWindow::countQuadratic(double a, double b, double c)
{
    QString result = QString("Коренів немає");

    double discriminant = pow(b, 2) - 4 * a * c;
    if (discriminant > 0) {
      result = "x1= " + QString::number((-b + sqrt(discriminant)) / (2 * a)) +
               "  x2= " + QString::number((-b - sqrt(discriminant)) / (2 * a));
    } else if (discriminant == 0) {
      result = "x= " + QString::number(-b / (2 * a));
    }

    return result;
}
