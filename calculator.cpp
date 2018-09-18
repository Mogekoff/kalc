#include "calculator.h"
#include "ui_calculator.h"
#include <QLineEdit>
#include <QString>

calculator::calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calculator)
{
    ui->setupUi(this);
}

calculator::~calculator()
{
    delete ui;
}
double resultVariable = 0;


int exp(int number, int exp)	//функция возвращающая целое число(int) с названием exp и принимающая
                                //два целых числа в переменные number(число) и exp(степень)
{
    int result = 1;				//создал целую переменную для записи результата вычислений со значением 1
    for (; exp != 0; exp--)		//пока степень не равна 0; после кода степень уменьшается на единицу
        {
            result *= number;	//число умножается само на себя и записывается в перем. result
        }
    resultVariable=result;
    return result;				//возвращается результат работы функции из переменной result
}
void calculator::on_equalButton_clicked()                       //равно
{
    ui->resultLine->setText(QString::number(resultVariable));
    resultVariable = 0;
}
void calculator::on_plusButton_clicked()                        //плюс
{
    resultVariable+=ui->resultLine->text().toInt();
    ui->resultLine->setText(QString::number(resultVariable));
}
void calculator::on_minusButton_clicked()                       //минус
{
    resultVariable-=ui->resultLine->text().toInt();
    ui->resultLine->setText(QString::number(resultVariable));
}
void calculator::on_multipButton_clicked()                      //умножить
{
    resultVariable*=ui->resultLine->text().toInt();
    ui->resultLine->setText(QString::number(resultVariable));
}
void calculator::on_divButton_clicked()                         //поделить
{
    if (ui->resultLine->text().toInt()==0) {                    //случай деления на 0
        ui->resultLine->setText("Ебан???"); }
    else {
    resultVariable/=ui->resultLine->text().toInt();             //штатная ситуация
    ui->resultLine->setText(QString::number(resultVariable));
    }
}
void calculator::on_oneButton_clicked()               //1
{
    if(ui->resultLine->text()=="0")
        ui->resultLine->backspace();
    ui->resultLine->insert("1");
}

void calculator::on_twoButton_clicked()
{
    if(ui->resultLine->text()=="0")
        ui->resultLine->backspace();
    ui->resultLine->insert("2");
}

void calculator::on_threeButton_clicked()
{
    if(ui->resultLine->text()=="0")
        ui->resultLine->backspace();
    ui->resultLine->insert("3");
}

void calculator::on_fourButton_clicked()
{
    if(ui->resultLine->text()=="0")
        ui->resultLine->backspace();
    ui->resultLine->insert("4");
}

void calculator::on_fiveButton_clicked()
{
    if(ui->resultLine->text()=="0")
        ui->resultLine->backspace();
    ui->resultLine->insert("5");
}

void calculator::on_sixButton_clicked()
{
    if(ui->resultLine->text()=="0")
        ui->resultLine->backspace();
    ui->resultLine->insert("6");
}

void calculator::on_sevenButton_clicked()
{
    if(ui->resultLine->text()=="0")
        ui->resultLine->backspace();
    ui->resultLine->insert("7");
}

void calculator::on_eightButton_clicked()
{
    if(ui->resultLine->text()=="0")
        ui->resultLine->backspace();
    ui->resultLine->insert("8");
}

void calculator::on_nineButton_clicked()                //9
{
    if(ui->resultLine->text()=="0")
        ui->resultLine->backspace();
    ui->resultLine->insert("9");
}

void calculator::on_zeroButton_clicked()                //0
{
    if(ui->resultLine->text()!="0")
        ui->resultLine->insert("0");
}

void calculator::on_pushButton_clicked()                //.
{
    QString str = ui->resultLine->text();               //в перменную str передан текст из поля ввода
    if(str.indexOf(".")==-1)
        ui->resultLine->insert(".");
}

void calculator::on_clearButton_clicked()
{
    ui->resultLine->setText("0");
    resultVariable = 0;
}

void calculator::on_deleteButton_clicked()
{
    if(ui->resultLine->text()!="0")
        ui->resultLine->backspace();
    if(ui->resultLine->text()=="")
        ui->resultLine->setText("0");
}

static int tempNumber = 0;
static int tempExp = 0;
static bool times = false;
void calculator::on_expButton_clicked()
{

    if (times==false) {
        tempNumber=ui->resultLine->text().toInt();
        times=true;
        return;

    }
    else {
        tempExp=ui->resultLine->text().toInt();
        ui->resultLine->setText(QString::number(exp(tempNumber,tempExp)));
        times=false;
        return;
    }

}



void calculator::on_sqrtButton_clicked()
{
    long long int number = ui->resultLine->text().toInt();
    int i=0;
    while(i*i!=number)
    {
        if(i*i>number){
            i--;
            break;
        }

        i++;
    }
    resultVariable=i;
    ui->resultLine->setText(QString::number(i));
}
