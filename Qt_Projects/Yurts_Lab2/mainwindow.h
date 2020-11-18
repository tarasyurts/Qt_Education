#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtDebug>
#include <QMainWindow>
#include <QPushButton>
#include <QCheckBox>
#include "qhoversensitivebutton.h"
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void handleNoButton();
    void handleYesButton();
    void cbToggled(bool);
private:
    QLabel *questionLabel;
    QLabel *msgLabel;

    QCheckBox *holdCheckBox;

    QHoverSensitiveButton *yesButton;
    QPushButton *noButton;

};
#endif // MAINWINDOW_H
