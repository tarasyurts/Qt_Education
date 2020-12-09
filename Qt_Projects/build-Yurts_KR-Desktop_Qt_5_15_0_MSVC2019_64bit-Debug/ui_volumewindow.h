/********************************************************************************
** Form generated from reading UI file 'volumewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLUMEWINDOW_H
#define UI_VOLUMEWINDOW_H

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

class Ui_VolumeWindow
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
    QPushButton *calsBtn;
    QPushButton *getFromFileBtn;

    void setupUi(QDialog *VolumeWindow)
    {
        if (VolumeWindow->objectName().isEmpty())
            VolumeWindow->setObjectName(QString::fromUtf8("VolumeWindow"));
        VolumeWindow->resize(400, 300);
        label = new QLabel(VolumeWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 111, 41));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        figureName = new QLabel(VolumeWindow);
        figureName->setObjectName(QString::fromUtf8("figureName"));
        figureName->setGeometry(QRect(120, 40, 47, 13));
        verticalLayoutWidget = new QWidget(VolumeWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(65, 160, 281, 81));
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

        calsBtn = new QPushButton(verticalLayoutWidget);
        calsBtn->setObjectName(QString::fromUtf8("calsBtn"));

        verticalLayout->addWidget(calsBtn);

        getFromFileBtn = new QPushButton(VolumeWindow);
        getFromFileBtn->setObjectName(QString::fromUtf8("getFromFileBtn"));
        getFromFileBtn->setGeometry(QRect(234, 120, 111, 23));

        retranslateUi(VolumeWindow);

        QMetaObject::connectSlotsByName(VolumeWindow);
    } // setupUi

    void retranslateUi(QDialog *VolumeWindow)
    {
        VolumeWindow->setWindowTitle(QCoreApplication::translate("VolumeWindow", "\320\236\320\261'\321\224\320\274", nullptr));
        label->setText(QCoreApplication::translate("VolumeWindow", "\320\236\320\261'\321\224\320\274", nullptr));
        figureName->setText(QCoreApplication::translate("VolumeWindow", "TextLabel", nullptr));
        firstParamLabel->setText(QCoreApplication::translate("VolumeWindow", "FirstParam", nullptr));
        secondParamLabel->setText(QCoreApplication::translate("VolumeWindow", "SecondParam", nullptr));
        calsBtn->setText(QCoreApplication::translate("VolumeWindow", "\320\237\321\226\320\264\321\200\320\260\321\205\321\203\320\262\320\260\321\202\320\270", nullptr));
        getFromFileBtn->setText(QCoreApplication::translate("VolumeWindow", "\320\227\321\207\320\270\321\202\320\260\321\202\320\270 \320\267 \321\204\320\260\320\271\320\273\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VolumeWindow: public Ui_VolumeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLUMEWINDOW_H
