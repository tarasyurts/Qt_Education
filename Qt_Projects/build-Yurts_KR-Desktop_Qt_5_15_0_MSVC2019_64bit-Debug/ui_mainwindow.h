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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QRadioButton *triangleAreaRB;
    QRadioButton *rectAreaRB;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QRadioButton *prismVolumeRB;
    QRadioButton *coneVolumeRB;
    QPushButton *submitBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(362, 274);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 321, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(9, 19, 301, 128));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        triangleAreaRB = new QRadioButton(verticalLayoutWidget_2);
        triangleAreaRB->setObjectName(QString::fromUtf8("triangleAreaRB"));

        verticalLayout_2->addWidget(triangleAreaRB);

        rectAreaRB = new QRadioButton(verticalLayoutWidget_2);
        rectAreaRB->setObjectName(QString::fromUtf8("rectAreaRB"));

        verticalLayout_2->addWidget(rectAreaRB);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        prismVolumeRB = new QRadioButton(verticalLayoutWidget_2);
        prismVolumeRB->setObjectName(QString::fromUtf8("prismVolumeRB"));

        verticalLayout_3->addWidget(prismVolumeRB);

        coneVolumeRB = new QRadioButton(verticalLayoutWidget_2);
        coneVolumeRB->setObjectName(QString::fromUtf8("coneVolumeRB"));

        verticalLayout_3->addWidget(coneVolumeRB);


        verticalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addWidget(groupBox);

        submitBtn = new QPushButton(verticalLayoutWidget);
        submitBtn->setObjectName(QString::fromUtf8("submitBtn"));

        verticalLayout->addWidget(submitBtn);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 362, 21));
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
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260", nullptr));
        triangleAreaRB->setText(QCoreApplication::translate("MainWindow", "\320\242\321\200\320\270\320\272\321\203\321\202\320\275\320\270\320\272", nullptr));
        rectAreaRB->setText(QCoreApplication::translate("MainWindow", "\320\247\320\276\321\202\320\270\321\200\320\270\320\272\321\203\321\202\320\275\320\270\320\272", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261'\321\224\320\274", nullptr));
        prismVolumeRB->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\267\320\274\320\260", nullptr));
        coneVolumeRB->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\321\203\321\201", nullptr));
        submitBtn->setText(QCoreApplication::translate("MainWindow", "\320\237\321\226\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
