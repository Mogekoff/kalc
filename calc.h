#ifndef CALC_H
#define CALC_H

#include <QObject>      //Требуется наследование от него для сигналов и слотов
#include <QPushButton>  //Кнопка
#include <QLabel>       //Текст
#include <QDebug>       //Для сообщений в нижнем окошке
#include <QLineEdit>    //Текстовое поле
#include <QString>      //Строковый тип в реализации QT
#include <QHBoxLayout>  //Слой

class calc:public QObject   //наследование от QObject
{
Q_OBJECT                    //макрос для сигналов и слотов
private:
    QPushButton *button1;   //кнопка сложения
    QLabel *label1;         //результат
    QLineEdit *lineEdit1;   //первое число
    QLineEdit *lineEdit2;   //второе число
    QWidget *window;        //окно
    QHBoxLayout * hbox;     //слой
public:
    calc();                 //объявлен конструктор, описан он в calc.cpp
    ~calc()                 //деструктор, освобождает память
    {
        qDebug()<<"delete object calc";     //сообщение в нижнем окошке вывода
        delete label1;                      //очистка памяти
        delete lineEdit1;
        delete lineEdit2;
        delete button1;
        delete window;
        delete hbox;
    }
private slots:           //слоты
    void sum();          //слот сложение двух чисел в lineEdit'ах
};

#endif // CALC_H
