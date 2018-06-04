#include "seat_temp.h"
#include "ui_seat_temp.h"
#include<intial.h>
#include<qdesktopwidget.h>



seat_temp::seat_temp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::seat_temp)
{

    QRect Screen_size;
    QDesktopWidget *wid = new QDesktopWidget;
    Screen_size = wid->screenGeometry(-1);
    this -> setGeometry(Screen_size);
    ui->setupUi(this);
    //  connect(this,SIGNAL(temp_adj_signal(unsigned int)),this,SLOT(temp_adj_slot(unsigned int)));

    connect(ui->up_btn,SIGNAL(clicked()),this,SLOT(plus()));
    connect(ui->down_btn,SIGNAL(clicked()),this,SLOT(minus()));

    QImage img("/home/jagadeesh/Desktop/Can/window/png/temperature.png");
    QImage img1 = img.scaled(80, 80, Qt::KeepAspectRatio);
    QIcon ButtonIcon(QPixmap::fromImage(img1));
    ui->temp_btn->setIcon(ButtonIcon);
    ui->temp_btn->setIconSize(QPixmap::fromImage(img1).rect().size());

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


}

seat_temp::~seat_temp()
{
    delete ui;
}

void seat_temp::on_up_btn_clicked()
{

}

void seat_temp::on_down_btn_clicked()
{
    unsigned int value=10;

    //emit temp_adj_signal(value);

}
#if 0
void seat_temp::temp_adj_slot(int temp)
{

}
#endif
void seat_temp::plus()
{
    ui->horizontalSlider->setValue(ui->horizontalSlider->value()+1);
}

void seat_temp::minus()
{
    ui->horizontalSlider->setValue(ui->horizontalSlider->value()-1);
}
void seat_temp::on_back_btn_pressed()
{
    Intial *inl =new Intial;;
    close();
    inl->show();
}
