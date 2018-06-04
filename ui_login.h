/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QMainWindow>
#include <QMenuBar>
#include <QPushButton>
#include <QSplitter>
#include <QStatusBar>
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *passwd_label;
    QLabel *username_label;
    QLineEdit *username_le;
    QLineEdit *passwd_le;
    QLabel *user_label;
    QLabel *logo_label;
    QLabel *veh_label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QSplitter *splitter_2;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QSplitter *splitter_3;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancel_btn;
    QPushButton *btn0;
    QPushButton *login_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(800, 555);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 143, 140);\n"
"background-color: rgb(198, 174, 86);"));
        login->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        passwd_label = new QLabel(centralwidget);
        passwd_label->setObjectName(QString::fromUtf8("passwd_label"));
        passwd_label->setGeometry(QRect(216, 167, 81, 20));
        passwd_label->setStyleSheet(QString::fromUtf8("color: rgb(32, 17, 255);"));
        username_label = new QLabel(centralwidget);
        username_label->setObjectName(QString::fromUtf8("username_label"));
        username_label->setGeometry(QRect(213, 120, 81, 31));
        username_label->setStyleSheet(QString::fromUtf8("color: rgb(32, 17, 255);"));
        username_le = new QLineEdit(centralwidget);
        username_le->setObjectName(QString::fromUtf8("username_le"));
        username_le->setGeometry(QRect(300, 120, 191, 31));
        username_le->setStyleSheet(QString::fromUtf8(""));
        passwd_le = new QLineEdit(centralwidget);
        passwd_le->setObjectName(QString::fromUtf8("passwd_le"));
        passwd_le->setGeometry(QRect(301, 160, 191, 31));
        passwd_le->setStyleSheet(QString::fromUtf8(""));
        user_label = new QLabel(centralwidget);
        user_label->setObjectName(QString::fromUtf8("user_label"));
        user_label->setGeometry(QRect(520, 110, 71, 81));
        logo_label = new QLabel(centralwidget);
        logo_label->setObjectName(QString::fromUtf8("logo_label"));
        logo_label->setGeometry(QRect(301, 37, 201, 51));
        veh_label = new QLabel(centralwidget);
        veh_label->setObjectName(QString::fromUtf8("veh_label"));
        veh_label->setGeometry(QRect(139, 10, 151, 101));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(290, 210, 221, 211));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        btn1 = new QPushButton(splitter);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 193, 255);\n"
"font: 16pt \"Sans Serif\";"));
        splitter->addWidget(btn1);
        btn2 = new QPushButton(splitter);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 193, 255);\n"
"font: 16pt \"Sans Serif\";"));
        splitter->addWidget(btn2);
        btn3 = new QPushButton(splitter);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 193, 255);\n"
"font: 16pt \"Sans Serif\";"));
        splitter->addWidget(btn3);

        verticalLayout->addWidget(splitter);

        splitter_2 = new QSplitter(widget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        btn4 = new QPushButton(splitter_2);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 193, 255);\n"
"font: 16pt \"Sans Serif\";"));
        splitter_2->addWidget(btn4);
        btn5 = new QPushButton(splitter_2);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 193, 255);\n"
"font: 16pt \"Sans Serif\";"));
        splitter_2->addWidget(btn5);
        btn6 = new QPushButton(splitter_2);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 193, 255);\n"
"font: 16pt \"Sans Serif\";"));
        splitter_2->addWidget(btn6);

        verticalLayout->addWidget(splitter_2);

        splitter_3 = new QSplitter(widget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        btn7 = new QPushButton(splitter_3);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 193, 255);\n"
"font: 16pt \"Sans Serif\";"));
        splitter_3->addWidget(btn7);
        btn8 = new QPushButton(splitter_3);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 193, 255);\n"
"font: 16pt \"Sans Serif\";"));
        splitter_3->addWidget(btn8);
        btn9 = new QPushButton(splitter_3);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 193, 255);\n"
"font: 16pt \"Sans Serif\";"));
        splitter_3->addWidget(btn9);

        verticalLayout->addWidget(splitter_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cancel_btn = new QPushButton(widget);
        cancel_btn->setObjectName(QString::fromUtf8("cancel_btn"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        cancel_btn->setFont(font);
        cancel_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(197, 158, 191);"));
        cancel_btn->setDefault(false);

        horizontalLayout->addWidget(cancel_btn);

        btn0 = new QPushButton(widget);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 193, 255);\n"
"font: 16pt \"Sans Serif\";\n"
""));

        horizontalLayout->addWidget(btn0);

        login_btn = new QPushButton(widget);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        login_btn->setFont(font);
        login_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(197, 158, 191);"));
        login_btn->setIconSize(QSize(10, 16));

        horizontalLayout->addWidget(login_btn);


        verticalLayout->addLayout(horizontalLayout);

        login->setCentralWidget(centralwidget);
        passwd_label->raise();
        username_label->raise();
        username_le->raise();
        passwd_le->raise();
        cancel_btn->raise();
        login_btn->raise();
        user_label->raise();
        logo_label->raise();
        btn0->raise();
        veh_label->raise();
        splitter_3->raise();
        menubar = new QMenuBar(login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "MainWindow", 0));
        passwd_label->setText(QApplication::translate("login", "Password", 0));
        username_label->setText(QApplication::translate("login", "User name", 0));
        username_le->setText(QString());
        passwd_le->setText(QString());
        user_label->setText(QApplication::translate("login", "TextLabel", 0));
        logo_label->setText(QApplication::translate("login", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#41399d;\">LOGIN HERE</span></p></body></html>", 0));
        veh_label->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn1->setToolTip(QApplication::translate("login", "font: bold;background-color: rgb(195, 193, 255);font-size: 36px;height: 48px;width: 120px", 0));
#endif // QT_NO_TOOLTIP
        btn1->setText(QApplication::translate("login", "1", 0));
        btn2->setText(QApplication::translate("login", "2", 0));
        btn3->setText(QApplication::translate("login", "3", 0));
        btn4->setText(QApplication::translate("login", "4", 0));
        btn5->setText(QApplication::translate("login", "5", 0));
        btn6->setText(QApplication::translate("login", "6", 0));
        btn7->setText(QApplication::translate("login", "7", 0));
        btn8->setText(QApplication::translate("login", "8", 0));
        btn9->setText(QApplication::translate("login", "9", 0));
        cancel_btn->setText(QApplication::translate("login", "Cancel", 0));
#ifndef QT_NO_TOOLTIP
        btn0->setToolTip(QApplication::translate("login", "<html><head/><body><p><span style=\" font-weight:600;\">1</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btn0->setText(QApplication::translate("login", "0", 0));
        login_btn->setText(QApplication::translate("login", "Login", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
