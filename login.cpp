#include "login.h"
#include "ui_login.h"
#include<QLineEdit>
#include<QMessageBox>
#include<intial.h>
#include<qdesktopwidget.h>

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    QRect Screen_size;
    QDesktopWidget *wid = new QDesktopWidget;
    Screen_size = wid->screenGeometry(-1);
    this -> setGeometry(Screen_size);
    ui->setupUi(this);

    QPixmap pixmap1("/home/jagadeesh/Desktop/Can/window/png/vehicle.png");
    pixmap1 = pixmap1.scaled(120, 120, Qt::KeepAspectRatio);
    ui->veh_label->setPixmap(pixmap1);

    QPixmap user("/home/jagadeesh/Desktop/Can/window/png/user.png");
    ui->user_label->setPixmap(user);
    ui->username_le->setStyleSheet("background-color: rgb(72, 216, 216);color: rgb(109, 10, 104)");
    ui->passwd_le->setStyleSheet("background-color: rgb(72, 216, 216);color: rgb(109, 10, 104)");
    // ui->btn0->setStyleSheet("background-color: rgb(186, 186, 139);color: rgb(179, 255, 215);");

    ui->username_le->setText("ggs");
    ui->passwd_le->setEchoMode(QLineEdit::Password);
    ui->passwd_le->setText("12345");


}

login::~login()
{
    delete ui;
}


#if 1
void login::on_login_btn_clicked()
{   int cmp1,cmp2;
    //const char *login_data[2];
    QString loginstr,passwdstr;
    loginstr=ui->username_le->text();

    passwdstr=ui->passwd_le->text();

    printf("%s \n",loginstr.toStdString().c_str());
    printf("%s \n",passwdstr.toStdString().c_str());
    cmp1=qstrcmp(loginstr.toStdString().c_str(),"ggs");
    cmp2=qstrcmp(passwdstr.toStdString().c_str(),"12345");




    if(!cmp1)
    {    printf("%d\n",cmp1);

        if(!cmp2)
        {    printf("%d\n",cmp2);

            next.show();
            close();
        }
        else
        {
            QMessageBox::information(this,"WARNING","password in correct ","OK");
        }
    }
    else
        QMessageBox::information(this,"WARNING","username incorrect ","OK");

}
#endif


void login::on_btn0_clicked()
{
    ui->passwd_le->setText(ui->passwd_le->text()+ "0");
}
void login::on_btn1_clicked()
{
    ui->passwd_le->setText(ui->passwd_le->text()+ "1");
}
void login::on_btn2_clicked()
{
    ui->passwd_le->setText(ui->passwd_le->text()+ "2");
}
void login::on_btn3_clicked()
{
    ui->passwd_le->setText(ui->passwd_le->text()+ "3");
}
void login::on_btn4_clicked()
{
    ui->passwd_le->setText(ui->passwd_le->text()+ "4");
}
void login::on_btn5_clicked()
{
    ui->passwd_le->setText(ui->passwd_le->text()+ "5");
}
void login::on_btn6_clicked()
{
    ui->passwd_le->setText(ui->passwd_le->text()+ "6");
}
void login::on_btn7_clicked()
{
    ui->passwd_le->setText(ui->passwd_le->text()+ "7");
}
void login::on_btn8_clicked()
{
    ui->passwd_le->setText(ui->passwd_le->text()+ "8");
}
void login::on_btn9_clicked()
{
    ui->passwd_le->setText(ui->passwd_le->text()+ "9");
}


void login::on_cancel_btn_clicked()
{
    close();
}
