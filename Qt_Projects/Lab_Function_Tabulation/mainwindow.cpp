#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->functionCalculator = new FunctionCalculator();
    this->points = new QList<Point*>();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete functionCalculator;
}


void MainWindow::showPoints()
{
    ui->pointsTW->setRowCount(points->size());
    ui->pointsTW->setColumnCount(2);
    for (int i = 0; i < points->size() ; i++)
    {
      ui->pointsTW->setItem(i, 0, new QTableWidgetItem(QString::number(points->at(i)->getX())));
      ui->pointsTW->setItem(i, 1, new QTableWidgetItem(QString::number(points->at(i)->getY())));
    }
}

void MainWindow::on_calculatePB_clicked()
{
    points = functionCalculator->calculate(
                ui->startSB->value(),
                ui->endSB->value(),
                ui->splitNumSB->value(),
                [](double y){ return qCos(y); });
    showPoints();
}

void MainWindow::on_saveToFilePB_clicked()
{
    if(points->empty()){
        ui->messageLabel->setText("Нічого зберігати!");
        return;
    }

    QString filename = QFileDialog::getSaveFileName(this, tr("Open file"), ".", tr("*.txt"));

    QTextStream in(stdin);
      QFile file(filename);
      if (file.open(QIODevice::WriteOnly | QIODevice::Truncate))
      {
        for (int i = 0; i < points->size(); i++)
        {
          file.write(qPrintable(QString::number(points->at(i)->getX()) + '\n'));
          file.write(qPrintable(QString::number(points->at(i)->getY()) + '\n'));
        }
        file.close();
      }

    ui->messageLabel->setText("Збережено до "+filename);
}

void MainWindow::on_readFromFile_clicked()
{
    points = new QList<Point*>();
    QString filename = QFileDialog::getOpenFileName(this, tr("Open file"), ".", tr("*.txt"));
      QFile file(filename);
      if (file.open(QIODevice::ReadOnly | QIODevice::Truncate))
      {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            double x = in.readLine().toDouble();
            double y = in.readLine().toDouble();
            points->append(new Point(x, y));
        }
            ui->messageLabel->setText("Зчитано із "+filename);
            file.close();

            showPoints();
      }
}
