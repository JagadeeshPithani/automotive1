#ifndef INTIAL_H
#define INTIAL_H

#include <QMainWindow>
#include<seatadj.h>
#include<seat_temp.h>

namespace Ui {
class Intial;
}

class Intial : public QMainWindow
{
    Q_OBJECT

public:

    seat_temp temp;
    Seatadj adj;
    explicit Intial(QWidget *parent = 0);
    ~Intial();

private slots:

    void on_seat_tempbtn_clicked();
    void on_seat_btn_clicked();
    void on_back_btn_clicked();

private:
    Ui::Intial *ui;
};

#endif // INTIAL_H
