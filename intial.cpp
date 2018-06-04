#include "intial.h"
#include "ui_intial.h"
#include<QLabel>
#include<login.h>
#include<qdesktopwidget.h>

Intial::Intial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Intial)
{

    QRect Screen_size;
    QDesktopWidget *wid = new QDesktopWidget;
    Screen_size = wid->screenGeometry(-1);
    this -> setGeometry(Screen_size);
    ui->setupUi(this);









    QImage img("/home/jagadeesh/Desktop/Can/window/png/seatadj.png");
    QImage img2 = img.scaled(200, 200, Qt::KeepAspectRatio);
    QIcon ButtonIcon1(QPixmap::fromImage(img2));
    ui->seat_btn->setIcon(ButtonIcon1);
    ui->seat_btn->setIconSize(QPixmap::fromImage(img2).rect().size());



    QImage img1("/home/jagadeesh/Desktop/Can/window/png/canvas.png");
    img1 = img1.scaled(200, 300, Qt::KeepAspectRatio);
    QIcon ButtonIcon2(QPixmap::fromImage(img1));
    ui->seat_tempbtn->setIcon(ButtonIcon2);
    ui->seat_tempbtn->setIconSize(QPixmap::fromImage(img1).rect().size());



    QPixmap pixmap1("/home/jagadeesh/Desktop/Can/window/png/settings.png");
    pixmap1 = pixmap1.scaled(100, 100, Qt::KeepAspectRatio);
    ui->setng_label->setPixmap(pixmap1);
}

Intial::~Intial()
{
    delete ui;
}

void Intial::on_seat_tempbtn_clicked()
{
    temp.show();
    close();
}

void Intial::on_seat_btn_clicked()
{
    adj.show();
    close();
}


void Intial::on_back_btn_clicked()
{   login *lg = new login;
    close();
    lg->show();
}
