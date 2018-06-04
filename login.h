#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include<intial.h>

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:

    Intial next;
    QString str,passwd_str;
    explicit login(QWidget *parent = 0);
    ~login();

private slots:

    void on_login_btn_clicked();
    void on_btn0_clicked();
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();
    void on_cancel_btn_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
