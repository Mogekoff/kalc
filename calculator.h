#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class calculator;
}

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit calculator(QWidget *parent = 0);
    ~calculator();

private slots:


    void on_equalButton_clicked();

    void on_plusButton_clicked();

    void on_minusButton_clicked();

    void on_multipButton_clicked();

    void on_divButton_clicked();



    void on_oneButton_clicked();

    void on_twoButton_clicked();

    void on_threeButton_clicked();

    void on_fourButton_clicked();

    void on_fiveButton_clicked();

    void on_sixButton_clicked();

    void on_sevenButton_clicked();

    void on_eightButton_clicked();

    void on_nineButton_clicked();

    void on_zeroButton_clicked();

    void on_clearButton_clicked();

    void on_deleteButton_clicked();



    void on_expButton_clicked();

    void on_pushButton_clicked();

    void on_sqrtButton_clicked();

private:
    Ui::calculator *ui;
};

#endif // CALCULATOR_H
