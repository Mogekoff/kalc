#include "calc.h"   //подключает calc.h с объявлениями класса
calc::calc()        //описание конструктора
{
    button1 = new QPushButton("Сложить числа");     //создание кнопки с текстом "Сложить числа"

    lineEdit1 = new QLineEdit;                      //создание поля ввода
    lineEdit2 = new QLineEdit;                      //создание поля ввода2

    label1 = new QLabel("Результат");               //создание строки с текстом "результат"

    hbox = new QHBoxLayout;                         //создание слоя
    hbox->addWidget(button1);                       //добавление на слой всех элементов
    hbox->addWidget(lineEdit1);                     //
    hbox->addWidget(lineEdit2);                     //
    hbox->addWidget(label1);                        //

    connect(button1,SIGNAL(clicked()),this,SLOT(sum()));    //коннект сигнала к слоту


    window = new QWidget;                           //создание окна
    window->setWindowTitle("Pivo");                 //задать название окну
    window->setLayout(hbox);                        //установить слой окну hbox
    window->resize(230,45);                         //изменить размер окна по х и у
    window->show();                                 //показать окно(изначально скрыто)


}
    void calc::sum()               //слот(функция), вызываемый кликом по кнопке
    {
      this->label1->setNum(this->lineEdit1->text().toInt()+this->lineEdit2->text().toInt());
    }
/*
    this->label1->setNum(...)
    Здесь в строку label1 через функцию setNum записывается число
    (которое сконвертируется в текст), которое состоит из суммы двух чисел.
    Первое число находится в поле ввода lineEdit1, второе в lineEdit2
    Доступ к этим числам осуществлен через функцию .text()
    Т.к. в поле ввода строковый тип данных, то нужно его сконвертировать в тип int
    Это осуществляется через функцию .toInt
    Вот так записывается их сумма:
    this->lineEdit1->text().toInt() + this->lineEdit2->text().toInt()
*/



