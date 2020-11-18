#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QWatch.h"
#include "Watch.h"

class QWatch : public QMainWindow
{
    Q_OBJECT

public:
    QWatch(QWidget *parent = Q_NULLPTR);

private:
    Ui::QWatchClass ui;
    Watch* watch;

    void changeDesignator();

public slots:
    void updateDisplay();
    
    void changeBackgroundClicked();
    void changeBackground();

    void changeTimeFormatClicked();
    void changeTimeFormat();
    
    void changeModeClicked();
    void changeMode();
    
    void showDateClicked();
    void showDate();
};
