#ifndef SEATADJ_H
#define SEATADJ_H

#include <QWidget>

namespace Ui {
class Seatadj;
}

class Seatadj : public QWidget
{
    Q_OBJECT

public:


    explicit Seatadj(QWidget *parent = 0);
    ~Seatadj();

private slots:
    void on_back_btn_pressed();

private:
    Ui::Seatadj *ui;
};

#endif // SEATADJ_H
