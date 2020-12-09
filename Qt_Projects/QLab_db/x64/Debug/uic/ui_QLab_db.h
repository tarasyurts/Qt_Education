/********************************************************************************
** Form generated from reading UI file 'QLab_db.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QLAB_DB_H
#define UI_QLAB_DB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QLab_dbClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *nameRB;
    QRadioButton *surnameRB;
    QRadioButton *phoneRB;
    QLineEdit *textInput;
    QPushButton *findBtn;
    QPushButton *showAllBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QLab_dbClass)
    {
        if (QLab_dbClass->objectName().isEmpty())
            QLab_dbClass->setObjectName(QString::fromUtf8("QLab_dbClass"));
        QLab_dbClass->resize(621, 372);
        centralWidget = new QWidget(QLab_dbClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);
        tableView->setSortingEnabled(true);

        gridLayout->addWidget(tableView, 2, 1, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nameRB = new QRadioButton(groupBox);
        nameRB->setObjectName(QString::fromUtf8("nameRB"));
        nameRB->setChecked(true);

        horizontalLayout->addWidget(nameRB);

        surnameRB = new QRadioButton(groupBox);
        surnameRB->setObjectName(QString::fromUtf8("surnameRB"));

        horizontalLayout->addWidget(surnameRB);

        phoneRB = new QRadioButton(groupBox);
        phoneRB->setObjectName(QString::fromUtf8("phoneRB"));

        horizontalLayout->addWidget(phoneRB);

        textInput = new QLineEdit(groupBox);
        textInput->setObjectName(QString::fromUtf8("textInput"));

        horizontalLayout->addWidget(textInput);

        findBtn = new QPushButton(groupBox);
        findBtn->setObjectName(QString::fromUtf8("findBtn"));

        horizontalLayout->addWidget(findBtn);


        gridLayout->addWidget(groupBox, 1, 1, 1, 1);

        showAllBtn = new QPushButton(centralWidget);
        showAllBtn->setObjectName(QString::fromUtf8("showAllBtn"));

        gridLayout->addWidget(showAllBtn, 3, 1, 1, 1);

        QLab_dbClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QLab_dbClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 621, 21));
        QLab_dbClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QLab_dbClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QLab_dbClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QLab_dbClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QLab_dbClass->setStatusBar(statusBar);

        retranslateUi(QLab_dbClass);

        QMetaObject::connectSlotsByName(QLab_dbClass);
    } // setupUi

    void retranslateUi(QMainWindow *QLab_dbClass)
    {
        QLab_dbClass->setWindowTitle(QCoreApplication::translate("QLab_dbClass", "QLab_db", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QLab_dbClass", "find student", nullptr));
        nameRB->setText(QCoreApplication::translate("QLab_dbClass", "name", nullptr));
        surnameRB->setText(QCoreApplication::translate("QLab_dbClass", "surname", nullptr));
        phoneRB->setText(QCoreApplication::translate("QLab_dbClass", "phone number", nullptr));
        findBtn->setText(QCoreApplication::translate("QLab_dbClass", "find", nullptr));
        showAllBtn->setText(QCoreApplication::translate("QLab_dbClass", "show all", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QLab_dbClass: public Ui_QLab_dbClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QLAB_DB_H
