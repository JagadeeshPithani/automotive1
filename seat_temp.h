#ifndef SEAT_TEMP_H
#define SEAT_TEMP_H

#include <QWidget>
namespace Ui {
class seat_temp;
}

class seat_temp : public QWidget
{
    Q_OBJECT

public:

    explicit seat_temp(QWidget *parent = 0);
    ~seat_temp();
public slots:
    // void temp_adj_slot(unsigned int);
private slots:
    void plus();
    void minus();
    void on_up_btn_clicked();
    void on_down_btn_clicked();
    void on_back_btn_pressed();

signals:

    // unsigned temp_adj_signal(unsigned int);

private:
    Ui::seat_temp *ui;
};

#endif // SEAT_TEMP_H
