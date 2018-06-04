/********************************************************************************
** Form generated from reading UI file 'seat_temp.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEAT_TEMP_H
#define UI_SEAT_TEMP_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QHeaderView>
#include <QLabel>
#include <QPushButton>
#include <QSlider>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_seat_temp
{
public:
    QPushButton *back_btn;
    QLabel *label;
    QPushButton *up_btn;
    QPushButton *down_btn;
    QPushButton *temp_btn;
    QSlider *horizontalSlider;
    QLabel *label_5;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *seat_temp)
    {
        if (seat_temp->objectName().isEmpty())
            seat_temp->setObjectName(QString::fromUtf8("seat_temp"));
        seat_temp->resize(667, 589);
        seat_temp->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 174, 86);"));
        back_btn = new QPushButton(seat_temp);
        back_btn->setObjectName(QString::fromUtf8("back_btn"));
        back_btn->setGeometry(QRect(230, 394, 131, 41));
        back_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 156, 255);"));
        label = new QLabel(seat_temp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(131, 123, 339, 251));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(215, 232, 184);"));
        up_btn = new QPushButton(seat_temp);
        up_btn->setObjectName(QString::fromUtf8("up_btn"));
        up_btn->setGeometry(QRect(382, 134, 81, 71));
        down_btn = new QPushButton(seat_temp);
        down_btn->setObjectName(QString::fromUtf8("down_btn"));
        down_btn->setGeometry(QRect(382, 214, 81, 71));
        temp_btn = new QPushButton(seat_temp);
        temp_btn->setObjectName(QString::fromUtf8("temp_btn"));
        temp_btn->setGeometry(QRect(140, 134, 231, 151));
        temp_btn->setStyleSheet(QString::fromUtf8("border-color: rgb(203, 0, 0);"));
        horizontalSlider = new QSlider(seat_temp);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(140, 334, 301, 31));
        horizontalSlider->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 199, 255);"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(seat_temp);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 74, 261, 31));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 209, 200);"));

        retranslateUi(seat_temp);

        QMetaObject::connectSlotsByName(seat_temp);
    } // setupUi

    void retranslateUi(QWidget *seat_temp)
    {
        seat_temp->setWindowTitle(QApplication::translate("seat_temp", "Form", 0));
        back_btn->setText(QApplication::translate("seat_temp", "BACK", 0));
        label->setText(QString());
        up_btn->setText(QString());
        down_btn->setText(QString());
        temp_btn->setText(QString());
        label_5->setText(QApplication::translate("seat_temp", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#0000a1;\">TEMPERATURE ADJUSTMENT</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class seat_temp: public Ui_seat_temp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEAT_TEMP_H
