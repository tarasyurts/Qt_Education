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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *pointsTW;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *startSB;
    QDoubleSpinBox *endSB;
    QSpinBox *splitNumSB;
    QPushButton *calculatePB;
    QPushButton *saveToFilePB;
    QPushButton *readFromFile;
    QLabel *messageLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pointsTW = new QTableWidget(centralwidget);
        pointsTW->setObjectName(QString::fromUtf8("pointsTW"));
        pointsTW->setGeometry(QRect(315, 50, 331, 451));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 50, 211, 157));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(12);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        startSB = new QDoubleSpinBox(verticalLayoutWidget);
        startSB->setObjectName(QString::fromUtf8("startSB"));

        horizontalLayout->addWidget(startSB);

        endSB = new QDoubleSpinBox(verticalLayoutWidget);
        endSB->setObjectName(QString::fromUtf8("endSB"));

        horizontalLayout->addWidget(endSB);

        splitNumSB = new QSpinBox(verticalLayoutWidget);
        splitNumSB->setObjectName(QString::fromUtf8("splitNumSB"));

        horizontalLayout->addWidget(splitNumSB);


        verticalLayout->addLayout(horizontalLayout);

        calculatePB = new QPushButton(verticalLayoutWidget);
        calculatePB->setObjectName(QString::fromUtf8("calculatePB"));

        verticalLayout->addWidget(calculatePB);

        saveToFilePB = new QPushButton(verticalLayoutWidget);
        saveToFilePB->setObjectName(QString::fromUtf8("saveToFilePB"));

        verticalLayout->addWidget(saveToFilePB);

        readFromFile = new QPushButton(verticalLayoutWidget);
        readFromFile->setObjectName(QString::fromUtf8("readFromFile"));

        verticalLayout->addWidget(readFromFile);

        messageLabel = new QLabel(centralwidget);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setGeometry(QRect(130, 280, 47, 13));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\244\321\203\320\275\320\272\321\206\321\226\321\217 f(Cos(y)/2)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276\321\207\320\260\321\202\320\276\320\272(A)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\272\321\226\320\275\320\265\321\206\321\214(B)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276\320\264\321\226\320\273(N)", nullptr));
        calculatePB->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\205\321\203\320\262\320\260\321\202\320\270", nullptr));
        saveToFilePB->setText(QCoreApplication::translate("MainWindow", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270 \321\203 \321\204\320\260\320\271\320\273", nullptr));
        readFromFile->setText(QCoreApplication::translate("MainWindow", "\320\227\321\207\320\270\321\202\320\260\321\202\320\270 \320\267 \321\204\320\260\320\271\320\273\321\203", nullptr));
        messageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
