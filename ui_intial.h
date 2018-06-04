/********************************************************************************
** Form generated from reading UI file 'intial.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTIAL_H
#define UI_INTIAL_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QHeaderView>
#include <QLabel>
#include <QMainWindow>
#include <QMenuBar>
#include <QPushButton>
#include <QStatusBar>
#include <QToolBar>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_Intial
{
public:
    QWidget *centralWidget;
    QLabel *setng_label;
    QLabel *label;
    QLabel *label_2;
    QPushButton *seat_btn;
    QLabel *label_3;
    QPushButton *seat_tempbtn;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *back_btn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Intial)
    {
        if (Intial->objectName().isEmpty())
            Intial->setObjectName(QString::fromUtf8("Intial"));
        Intial->resize(925, 814);
        Intial->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 174, 86);"));
        centralWidget = new QWidget(Intial);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        setng_label = new QLabel(centralWidget);
        setng_label->setObjectName(QString::fromUtf8("setng_label"));
        setng_label->setGeometry(QRect(240, 40, 121, 91));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 70, 171, 51));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 165, 331, 281));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(215, 232, 184);"));
        seat_btn = new QPushButton(centralWidget);
        seat_btn->setObjectName(QString::fromUtf8("seat_btn"));
        seat_btn->setGeometry(QRect(140, 215, 311, 221));
        seat_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(159, 148, 159);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(480, 165, 291, 281));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 186, 139);"));
        seat_tempbtn = new QPushButton(centralWidget);
        seat_tempbtn->setObjectName(QString::fromUtf8("seat_tempbtn"));
        seat_tempbtn->setGeometry(QRect(510, 214, 211, 221));
        seat_tempbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(159, 148, 159);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 170, 231, 31));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(215, 232, 184);"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(500, 180, 261, 31));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 186, 139);"));
        back_btn = new QPushButton(centralWidget);
        back_btn->setObjectName(QString::fromUtf8("back_btn"));
        back_btn->setGeometry(QRect(410, 480, 131, 41));
        back_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 156, 255);"));
        Intial->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Intial);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 925, 20));
        Intial->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Intial);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Intial->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Intial);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Intial->setStatusBar(statusBar);

        retranslateUi(Intial);

        QMetaObject::connectSlotsByName(Intial);
    } // setupUi

    void retranslateUi(QMainWindow *Intial)
    {
        Intial->setWindowTitle(QApplication::translate("Intial", "Intial", 0));
        setng_label->setText(QString());
        label->setText(QApplication::translate("Intial", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; color:#3e7d5c;\">SETTINGS</span></p></body></html>", 0));
        label_2->setText(QString());
        seat_btn->setText(QString());
        label_3->setText(QString());
        seat_tempbtn->setText(QString());
        label_4->setText(QApplication::translate("Intial", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#0000a1;\">SEAT ADJUSTMENT</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("Intial", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#0000a1;\">TEMPERATURE ADJUSTMENT</span></p></body></html>", 0));
        back_btn->setText(QApplication::translate("Intial", "BACK", 0));
    } // retranslateUi

};

namespace Ui {
    class Intial: public Ui_Intial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTIAL_H
