#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include <QDataStream>
#include <QtMath>
#include <QList>
#include "functioncalculator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_calculatePB_clicked();

    void on_saveToFilePB_clicked();

    void on_readFromFile_clicked();

private:
    Ui::MainWindow *ui;
    FunctionCalculator *functionCalculator;
    QList<Point*>* points;
    void showPoints();
};
#endif // MAINWINDOW_H
