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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *setPhotoBtn;
    QLabel *userPhoto;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 464);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: #FBAB7E;\n"
"background-image: linear-gradient(62deg, #FBAB7E 0%, #F7CE68 100%);\n"
""));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(220, 70, 351, 301));
        QFont font;
        font.setFamily(QString::fromUtf8("Raleway"));
        groupBox->setFont(font);
        groupBox->setLayoutDirection(Qt::LeftToRight);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius: 8px;\n"
"padding: 10px;"));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 30, 160, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Raleway SemiBold"));
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(67, 54, 52)"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(235, 229, 231);"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(67, 54, 52)"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(235, 229, 231);"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        setPhotoBtn = new QPushButton(groupBox);
        setPhotoBtn->setObjectName(QString::fromUtf8("setPhotoBtn"));
        setPhotoBtn->setGeometry(QRect(210, 50, 121, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Raleway Black"));
        font2.setBold(true);
        font2.setWeight(75);
        setPhotoBtn->setFont(font2);
        setPhotoBtn->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #FBAB7E;\n"
""));
        userPhoto = new QLabel(groupBox);
        userPhoto->setObjectName(QString::fromUtf8("userPhoto"));
        userPhoto->setGeometry(QRect(40, 140, 151, 141));
        userPhoto->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"background-color: rgb(235, 229, 231)"));
        userPhoto->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menubar->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        setPhotoBtn->setText(QCoreApplication::translate("MainWindow", "Click For Photo", nullptr));
        userPhoto->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
