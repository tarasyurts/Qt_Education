/********************************************************************************
** Form generated from reading UI file 'QWatch.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWATCH_H
#define UI_QWATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWatchClass
{
public:
    QWidget *centralWidget;
    QLCDNumber *leftDigits;
    QLCDNumber *rightDigits;
    QLCDNumber *smallDigits;
    QLabel *labelAM;
    QLabel *labelPM;
    QLabel *watchPic;
    QPushButton *butUpR;
    QPushButton *butUpL;
    QPushButton *butDownR;
    QPushButton *butDownL;
    QLabel *watchBackground;
    QLabel *DayOfWeek;
    QLabel *points;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QWatchClass)
    {
        if (QWatchClass->objectName().isEmpty())
            QWatchClass->setObjectName(QString::fromUtf8("QWatchClass"));
        QWatchClass->resize(420, 860);
        centralWidget = new QWidget(QWatchClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        leftDigits = new QLCDNumber(centralWidget);
        leftDigits->setObjectName(QString::fromUtf8("leftDigits"));
        leftDigits->setGeometry(QRect(140, 370, 61, 51));
        leftDigits->setFrameShape(QFrame::NoFrame);
        leftDigits->setFrameShadow(QFrame::Plain);
        leftDigits->setDigitCount(2);
        leftDigits->setSegmentStyle(QLCDNumber::Flat);
        leftDigits->setProperty("value", QVariant(22.000000000000000));
        leftDigits->setProperty("intValue", QVariant(22));
        rightDigits = new QLCDNumber(centralWidget);
        rightDigits->setObjectName(QString::fromUtf8("rightDigits"));
        rightDigits->setGeometry(QRect(210, 370, 61, 51));
        rightDigits->setFrameShape(QFrame::NoFrame);
        rightDigits->setFrameShadow(QFrame::Plain);
        rightDigits->setDigitCount(2);
        rightDigits->setSegmentStyle(QLCDNumber::Flat);
        rightDigits->setProperty("value", QVariant(12.000000000000000));
        rightDigits->setProperty("intValue", QVariant(12));
        smallDigits = new QLCDNumber(centralWidget);
        smallDigits->setObjectName(QString::fromUtf8("smallDigits"));
        smallDigits->setGeometry(QRect(280, 390, 31, 31));
        smallDigits->setFrameShape(QFrame::NoFrame);
        smallDigits->setFrameShadow(QFrame::Plain);
        smallDigits->setDigitCount(2);
        smallDigits->setSegmentStyle(QLCDNumber::Flat);
        smallDigits->setProperty("value", QVariant(59.000000000000000));
        labelAM = new QLabel(centralWidget);
        labelAM->setObjectName(QString::fromUtf8("labelAM"));
        labelAM->setEnabled(false);
        labelAM->setGeometry(QRect(120, 380, 21, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(12);
        labelAM->setFont(font);
        labelPM = new QLabel(centralWidget);
        labelPM->setObjectName(QString::fromUtf8("labelPM"));
        labelPM->setEnabled(false);
        labelPM->setGeometry(QRect(120, 400, 21, 20));
        labelPM->setFont(font);
        watchPic = new QLabel(centralWidget);
        watchPic->setObjectName(QString::fromUtf8("watchPic"));
        watchPic->setEnabled(true);
        watchPic->setGeometry(QRect(10, 0, 400, 800));
        watchPic->setPixmap(QPixmap(QString::fromUtf8("res/watchWithoutScreen.png")));
        watchPic->setScaledContents(true);
        butUpR = new QPushButton(centralWidget);
        butUpR->setObjectName(QString::fromUtf8("butUpR"));
        butUpR->setGeometry(QRect(390, 300, 21, 31));
        butUpR->setFlat(true);
        butUpL = new QPushButton(centralWidget);
        butUpL->setObjectName(QString::fromUtf8("butUpL"));
        butUpL->setGeometry(QRect(10, 310, 21, 31));
        butUpL->setFlat(true);
        butDownR = new QPushButton(centralWidget);
        butDownR->setObjectName(QString::fromUtf8("butDownR"));
        butDownR->setGeometry(QRect(390, 410, 21, 31));
        butDownR->setFlat(true);
        butDownL = new QPushButton(centralWidget);
        butDownL->setObjectName(QString::fromUtf8("butDownL"));
        butDownL->setGeometry(QRect(10, 410, 21, 31));
        butDownL->setFlat(true);
        watchBackground = new QLabel(centralWidget);
        watchBackground->setObjectName(QString::fromUtf8("watchBackground"));
        watchBackground->setGeometry(QRect(100, 300, 220, 150));
        watchBackground->setPixmap(QPixmap(QString::fromUtf8("res/greyBackground.jpg")));
        watchBackground->setScaledContents(true);
        DayOfWeek = new QLabel(centralWidget);
        DayOfWeek->setObjectName(QString::fromUtf8("DayOfWeek"));
        DayOfWeek->setGeometry(QRect(260, 330, 41, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(16);
        DayOfWeek->setFont(font1);
        DayOfWeek->setTextFormat(Qt::PlainText);
        points = new QLabel(centralWidget);
        points->setObjectName(QString::fromUtf8("points"));
        points->setGeometry(QRect(190, 360, 31, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(47);
        points->setFont(font2);
        QWatchClass->setCentralWidget(centralWidget);
        watchBackground->raise();
        leftDigits->raise();
        rightDigits->raise();
        smallDigits->raise();
        labelAM->raise();
        labelPM->raise();
        watchPic->raise();
        butUpR->raise();
        butUpL->raise();
        butDownR->raise();
        butDownL->raise();
        DayOfWeek->raise();
        points->raise();
        menuBar = new QMenuBar(QWatchClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 420, 21));
        QWatchClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QWatchClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QWatchClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QWatchClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QWatchClass->setStatusBar(statusBar);

        retranslateUi(QWatchClass);

        QMetaObject::connectSlotsByName(QWatchClass);
    } // setupUi

    void retranslateUi(QMainWindow *QWatchClass)
    {
        QWatchClass->setWindowTitle(QCoreApplication::translate("QWatchClass", "QWatch", nullptr));
        labelAM->setText(QCoreApplication::translate("QWatchClass", "AM", nullptr));
        labelPM->setText(QCoreApplication::translate("QWatchClass", "PM", nullptr));
        watchPic->setText(QString());
        butUpR->setText(QString());
#if QT_CONFIG(shortcut)
        butUpR->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        butUpL->setText(QString());
#if QT_CONFIG(shortcut)
        butUpL->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        butDownR->setText(QString());
#if QT_CONFIG(shortcut)
        butDownR->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        butDownL->setText(QString());
#if QT_CONFIG(shortcut)
        butDownL->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        watchBackground->setText(QString());
        DayOfWeek->setText(QCoreApplication::translate("QWatchClass", "MON", nullptr));
        points->setText(QCoreApplication::translate("QWatchClass", ":", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWatchClass: public Ui_QWatchClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWATCH_H
