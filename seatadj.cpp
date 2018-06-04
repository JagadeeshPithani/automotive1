#include "seatadj.h"
#include "ui_seatadj.h"
#include<intial.h>
#include<qdesktopwidget.h>


Seatadj::Seatadj(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Seatadj)
{
    QRect Screen_size;
    QDesktopWidget *wid = new QDesktopWidget;
    Screen_size = wid->screenGeometry(-1);
    this -> setGeometry(Screen_size);
    ui->setupUi(this);

    QPixmap pixmap("/home/jagadeesh/Desktop/Can/window/png/seat_height.png");
    pixmap = pixmap.scaled(150, 150, Qt::KeepAspectRatio);
    ui->adj_uplabel->setPixmap(pixmap);


    QPixmap pixmap1("/home/jagadeesh/Desktop/Can/window/png/adjustment.png");
    pixmap1 = pixmap1.scaled(250, 250, Qt::KeepAspectRatio);
    ui->adj_leftlabel->setPixmap(pixmap1);


    QImage img2("/home/jagadeesh/Desktop/Can/window/png/up.png");
    img2 = img2.scaled(30, 30, Qt::KeepAspectRatio);
    QIcon ButtonIcon1(QPixmap::fromImage(img2));
    ui->up_btn->setIcon(ButtonIcon1);
    ui->up_btn->setIconSize(QPixmap::fromImage(img2).rect().size());

    QImage img3("/home/jagadeesh/Desktop/Can/window/png/down.png");
    img3 = img3.scaled(30, 30, Qt::KeepAspectRatio);
    QIcon ButtonIcon2(QPixmap::fromImage(img3));
    ui->down_btn->setIcon(ButtonIcon2);
    ui->down_btn->setIconSize(QPixmap::fromImage(img3).rect().size());


    QImage img4("/home/jagadeesh/Desktop/Can/window/png/left.png");
    img4 = img4.scaled(30, 30, Qt::KeepAspectRatio);
    QIcon ButtonIcon3(QPixmap::fromImage(img4));
    ui->left_btn->setIcon(ButtonIcon3);
    ui->left_btn->setIconSize(QPixmap::fromImage(img4).rect().size());

    QImage img5("/home/jagadeesh/Desktop/Can/window/png/right.png");
    img5 = img5.scaled(30, 30, Qt::KeepAspectRatio);
    QIcon ButtonIcon4(QPixmap::fromImage(img5));
    ui->right_btn->setIcon(ButtonIcon4);
    ui->right_btn->setIconSize(QPixmap::fromImage(img5).rect().size());


}

Seatadj::~Seatadj()
{
    delete ui;

}

void Seatadj::on_back_btn_pressed()
{
    Intial *inl=new Intial;;
    close();
    inl->show();
}


