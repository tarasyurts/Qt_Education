#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(400,300);
    this->setStyleSheet("background-color: #f1f2f6");

    questionLabel = new QLabel(this);
    questionLabel->setText("Бажаєш мати 5 ?");
    questionLabel->setMinimumSize(250,30);
    questionLabel->setAlignment(Qt::AlignCenter);
    questionLabel->move((this->size().width()/2)-questionLabel->size().width()/2, 10);
    questionLabel->setStyleSheet("font: 34 18pt \"Raleway Medium\";");

    holdCheckBox = new QCheckBox("Зупинити", this);
    holdCheckBox->move((this->size().width()/2)-holdCheckBox->size().width()/2.5, 40);
    holdCheckBox->setStyleSheet("font: 12 10pt \"Raleway Medium\";");

    msgLabel = new QLabel(this);
    msgLabel->setText("Зроби свій вибір");
    msgLabel->setMinimumSize(250,30);
    msgLabel->setAlignment(Qt::AlignCenter);
    msgLabel->move((this->size().width()/2)-msgLabel->size().width()/2, this->size().height()-msgLabel->size().height());
    msgLabel->setStyleSheet("font: 24 14pt \"Raleway Medium\";");

    yesButton = new QHoverSensitiveButton(this);
    yesButton->setText("ТАК");
    yesButton->move((this->size().width()*0.2),(this->size().height()/2)-yesButton->size().height());
    yesButton->setStyleSheet("background-color: #8c7ae6;"
                             "font: 63 10pt \"Raleway SemiBold\";"
                             "color: #fff;");

    noButton = new QPushButton("НІ",this);
    noButton->move(this->size().width()*0.8-noButton->size().width(),(this->size().height()/2)-noButton->size().height());
    noButton->setStyleSheet("background-color: #ff4757;"
                             "font: 63 10pt \"Raleway SemiBold\";"
                             "color: #fff;");
    //    qDebug() << "Constr";

    connect(holdCheckBox, SIGNAL(clicked(bool)), this, SLOT(cbToggled(bool)));
    connect(yesButton, SIGNAL(clicked()), this, SLOT(handleYesButton()));
    connect(noButton, SIGNAL(clicked()), this, SLOT(handleNoButton()));

}

MainWindow::~MainWindow()
{
}

void MainWindow::handleNoButton()
{
    msgLabel->setText("Як бажаєш ;)");
}

void MainWindow::handleYesButton()
{
    msgLabel->setText("Ну добре. Вмовив");
}

void MainWindow::cbToggled(bool state)
{
    yesButton->allowEvents(!state);
}
