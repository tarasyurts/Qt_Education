#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>

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
    void initialTODO();
    void on_changeWidgetBtn_clicked();

private:
    Ui::MainWindow *ui;
    int clickCounter{0};
    int randInt(int, int);
};
#endif // MAINWINDOW_H
