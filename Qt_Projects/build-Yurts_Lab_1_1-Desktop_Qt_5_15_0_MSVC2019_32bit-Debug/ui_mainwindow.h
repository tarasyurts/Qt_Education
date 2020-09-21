/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *changeWidgetBtn;
    QPushButton *widgetToChange;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(755, 279);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("Raleway SemiBold"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        centralwidget->setFont(font);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: #8BC6EC;\n"
"background-image: linear-gradient(135deg, #8BC6EC 0%, #9599E2 100%);\n"
""));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(150, 30, 431, 181));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        changeWidgetBtn = new QPushButton(horizontalLayoutWidget);
        changeWidgetBtn->setObjectName(QString::fromUtf8("changeWidgetBtn"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Raleway SemiBold"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        changeWidgetBtn->setFont(font1);
        changeWidgetBtn->setAutoFillBackground(false);
        changeWidgetBtn->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"height: 60px;\n"
"border-radius: 8px;\n"
"background-color: rgb(75, 102, 255)"));
        changeWidgetBtn->setAutoDefault(false);
        changeWidgetBtn->setFlat(false);

        horizontalLayout->addWidget(changeWidgetBtn);

        widgetToChange = new QPushButton(horizontalLayoutWidget);
        widgetToChange->setObjectName(QString::fromUtf8("widgetToChange"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Raleway SemiBold"));
        font2.setPointSize(72);
        font2.setBold(true);
        font2.setWeight(75);
        widgetToChange->setFont(font2);
        widgetToChange->setAutoFillBackground(false);
        widgetToChange->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"border-radius: 8px;\n"
"background-color: rgb(75, 102, 255)"));
        widgetToChange->setAutoDefault(false);
        widgetToChange->setFlat(false);

        horizontalLayout->addWidget(widgetToChange);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 755, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        changeWidgetBtn->setDefault(false);
        widgetToChange->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        changeWidgetBtn->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\266\320\274\320\270 \320\275\320\260 \320\274\320\265\320\275\320\265", nullptr));
        widgetToChange->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
