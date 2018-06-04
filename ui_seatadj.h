/********************************************************************************
** Form generated from reading UI file 'seatadj.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEATADJ_H
#define UI_SEATADJ_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QHeaderView>
#include <QLabel>
#include <QPushButton>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_Seatadj
{
public:
    QPushButton *back_btn;
    QLabel *label;
    QLabel *adj_uplabel;
    QPushButton *down_btn;
    QPushButton *up_btn;
    QLabel *label_2;
    QLabel *adj_leftlabel;
    QPushButton *right_btn;
    QPushButton *left_btn;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Seatadj)
    {
        if (Seatadj->objectName().isEmpty())
            Seatadj->setObjectName(QString::fromUtf8("Seatadj"));
        Seatadj->resize(753, 675);
        Seatadj->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 174, 86);"));
        back_btn = new QPushButton(Seatadj);
        back_btn->setObjectName(QString::fromUtf8("back_btn"));
        back_btn->setGeometry(QRect(250, 610, 131, 41));
        back_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 156, 255);"));
        label = new QLabel(Seatadj);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(159, 62, 371, 271));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 209, 200);"));
        adj_uplabel = new QLabel(Seatadj);
        adj_uplabel->setObjectName(QString::fromUtf8("adj_uplabel"));
        adj_uplabel->setGeometry(QRect(170, 101, 231, 221));
        down_btn = new QPushButton(Seatadj);
        down_btn->setObjectName(QString::fromUtf8("down_btn"));
        down_btn->setGeometry(QRect(419, 208, 101, 71));
        up_btn = new QPushButton(Seatadj);
        up_btn->setObjectName(QString::fromUtf8("up_btn"));
        up_btn->setGeometry(QRect(419, 128, 101, 71));
        label_2 = new QLabel(Seatadj);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 350, 401, 241));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 255, 227);"));
        adj_leftlabel = new QLabel(Seatadj);
        adj_leftlabel->setObjectName(QString::fromUtf8("adj_leftlabel"));
        adj_leftlabel->setGeometry(QRect(160, 400, 261, 181));
        right_btn = new QPushButton(Seatadj);
        right_btn->setObjectName(QString::fromUtf8("right_btn"));
        right_btn->setGeometry(QRect(436, 490, 101, 71));
        left_btn = new QPushButton(Seatadj);
        left_btn->setObjectName(QString::fromUtf8("left_btn"));
        left_btn->setGeometry(QRect(436, 410, 101, 71));
        label_3 = new QLabel(Seatadj);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(166, 360, 231, 31));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 255, 227);"));
        label_4 = new QLabel(Seatadj);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(169, 66, 231, 31));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 209, 200);"));

        retranslateUi(Seatadj);

        QMetaObject::connectSlotsByName(Seatadj);
    } // setupUi

    void retranslateUi(QWidget *Seatadj)
    {
        Seatadj->setWindowTitle(QApplication::translate("Seatadj", "Form", 0));
        back_btn->setText(QApplication::translate("Seatadj", "BACK", 0));
        label->setText(QString());
        adj_uplabel->setText(QString());
        down_btn->setText(QString());
        up_btn->setText(QString());
        label_2->setText(QString());
        adj_leftlabel->setText(QString());
        right_btn->setText(QString());
        left_btn->setText(QString());
        label_3->setText(QApplication::translate("Seatadj", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#0000a1;\">SIDE WARDS CONTROLS</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("Seatadj", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#0000a1;\">UP WARD CONTROLS</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Seatadj: public Ui_Seatadj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEATADJ_H
