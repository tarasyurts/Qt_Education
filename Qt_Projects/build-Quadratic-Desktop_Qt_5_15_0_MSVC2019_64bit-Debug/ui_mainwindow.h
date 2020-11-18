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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *aLE;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *bLE;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *cLE;
    QLabel *label_18;
    QPushButton *countBtn;
    QLabel *resultLbl;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(668, 446);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(150, 120, 361, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        aLE = new QLineEdit(verticalLayoutWidget);
        aLE->setObjectName(QString::fromUtf8("aLE"));
        QFont font;
        font.setPointSize(18);
        aLE->setFont(font);
        aLE->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(aLE);

        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font1;
        font1.setPointSize(22);
        label_13->setFont(font1);

        horizontalLayout_2->addWidget(label_13);

        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        horizontalLayout_2->addWidget(label_14);

        label_15 = new QLabel(verticalLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);

        horizontalLayout_2->addWidget(label_15);

        bLE = new QLineEdit(verticalLayoutWidget);
        bLE->setObjectName(QString::fromUtf8("bLE"));
        bLE->setFont(font);
        bLE->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(bLE);

        label_16 = new QLabel(verticalLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font1);

        horizontalLayout_2->addWidget(label_16);

        label_17 = new QLabel(verticalLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font1);

        horizontalLayout_2->addWidget(label_17);

        cLE = new QLineEdit(verticalLayoutWidget);
        cLE->setObjectName(QString::fromUtf8("cLE"));
        cLE->setFont(font);
        cLE->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(cLE);

        label_18 = new QLabel(verticalLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font1);

        horizontalLayout_2->addWidget(label_18);


        verticalLayout->addLayout(horizontalLayout_2);

        countBtn = new QPushButton(verticalLayoutWidget);
        countBtn->setObjectName(QString::fromUtf8("countBtn"));
        QFont font2;
        font2.setPointSize(16);
        countBtn->setFont(font2);

        verticalLayout->addWidget(countBtn);

        resultLbl = new QLabel(verticalLayoutWidget);
        resultLbl->setObjectName(QString::fromUtf8("resultLbl"));
        resultLbl->setFont(font);
        resultLbl->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(resultLbl);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 668, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Quadratic Equation", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\302\262", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "= 0", nullptr));
        countBtn->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\321\200\320\260\321\205\321\203\320\262\320\260\321\202\320\270", nullptr));
        resultLbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
