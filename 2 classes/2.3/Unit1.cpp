// Нечай Андрей ПО - 21
// Лабораторная работа 2.3
// 9) Клетка расписания занятий

#include <vcl.h>
#pragma hdrstop
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#pragma argsused
#include "Cel.h"

int main() {
    Cel object1, object2("Math", "Monday", 1), object3(object2), object4("Monday");

    object1.scan();

    object1.print();
    object2.print();
    object3.print();
    object4.print();

    Cel *obj1, *obj2, *obj3, *obj4;

    obj1 = new Cel;
    obj2 = new Cel("Math", "Monday", 1);
    obj3 = new Cel(*obj2);
    obj4 = new Cel("Thusday");

    obj1->scan();
    obj1->print();
    obj2->print();
    obj3->print();
    obj4->print();

    getch();
    
    delete obj1;
    delete obj2;
    delete obj3;
    delete obj4;

    return 0;
}
