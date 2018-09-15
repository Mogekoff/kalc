//Работа программа начинается с инструкций конструктора объекта Calc класса calc.

#include "calc.h"                   //Подключается описание класса calc. Описание конструктора в calc.cpp
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);     //Создается объект приложение и в него передаются аргументы ф-ции main()
    calc Calc;                      //Создается объект класса calc
    a.exec();                       //После вызова деструктора класса calc программа закрывается
    return 0;
}
