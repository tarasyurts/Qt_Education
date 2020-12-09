/********************************************************************************
** Form generated from reading UI file 'areawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREAWINDOW_H
#define UI_AREAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AreaWindow
{
public:
    QLabel *label;
    QLabel *figureName;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *firstParamLabel;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *secondParamLabel;
    QDoubleSpinBox *doubleSpinBox_2;
    QPushButton *calcBtn;
    QPushButton *getFromFileBtn;

    void setupUi(QDialog *AreaWindow)
    {
        if (AreaWindow->objectName().isEmpty())
            AreaWindow->setObjectName(QString::fromUtf8("AreaWindow"));
        AreaWindow->resize(400, 300);
        label = new QLabel(AreaWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 91, 61));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        figureName = new QLabel(AreaWindow);
        figureName->setObjectName(QString::fromUtf8("figureName"));
        figureName->setGeometry(QRect(130, 40, 51, 16));
        verticalLayoutWidget = new QWidget(AreaWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 160, 281, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        firstParamLabel = new QLabel(verticalLayoutWidget);
        firstParamLabel->setObjectName(QString::fromUtf8("firstParamLabel"));

        horizontalLayout->addWidget(firstParamLabel);

        doubleSpinBox = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        horizontalLayout->addWidget(doubleSpinBox);

        secondParamLabel = new QLabel(verticalLayoutWidget);
        secondParamLabel->setObjectName(QString::fromUtf8("secondParamLabel"));

        horizontalLayout->addWidget(secondParamLabel);

        doubleSpinBox_2 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));

        horizontalLayout->addWidget(doubleSpinBox_2);


        verticalLayout->addLayout(horizontalLayout);

        calcBtn = new QPushButton(verticalLayoutWidget);
        calcBtn->setObjectName(QString::fromUtf8("calcBtn"));

        verticalLayout->addWidget(calcBtn);

        getFromFileBtn = new QPushButton(AreaWindow);
        getFromFileBtn->setObjectName(QString::fromUtf8("getFromFileBtn"));
        getFromFileBtn->setGeometry(QRect(240, 120, 101, 23));

        retranslateUi(AreaWindow);

        QMetaObject::connectSlotsByName(AreaWindow);
    } // setupUi

    void retranslateUi(QDialog *AreaWindow)
    {
        AreaWindow->setWindowTitle(QCoreApplication::translate("AreaWindow", "\320\237\320\273\320\276\321\211\320\260", nullptr));
        label->setText(QCoreApplication::translate("AreaWindow", "\320\237\320\273\320\276\321\211\320\260", nullptr));
        figureName->setText(QCoreApplication::translate("AreaWindow", "TextLabel", nullptr));
        firstParamLabel->setText(QCoreApplication::translate("AreaWindow", "FirstParam", nullptr));
        secondParamLabel->setText(QCoreApplication::translate("AreaWindow", "SecondParam", nullptr));
        calcBtn->setText(QCoreApplication::translate("AreaWindow", "\320\237\321\226\320\264\321\200\320\260\321\205\321\203\320\262\320\260\321\202\320\270", nullptr));
        getFromFileBtn->setText(QCoreApplication::translate("AreaWindow", "\320\227\321\207\320\270\321\202\320\260\321\202\320\270 \320\267 \321\204\320\260\320\271\320\273\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AreaWindow: public Ui_AreaWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREAWINDOW_H
