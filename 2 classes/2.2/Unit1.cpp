// Нечай Андрей ПО - 21
// Лабораторная работа 2.2
// 9) Клетка расписания занятий

#include <vcl.h>
#pragma hdrstop
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "Cell.h"
#pragma argsused

int main() {
    Cell *object1 = new Cell;

    object1->setsubject("Math");
    object1->setweek_day("Monday");
    object1->setnum_para(1);

    printf("%s, %s, %d", object1->getsubject(), object1->getweek_day(), object1->getnum_para());

    object1->scan();
    object1->print();

    Cell object2;

    char *sub = object1->getsubject();
    object2.setsubject(sub);

    object2.setweek_day("Thusday");
    object2.setnum_para(2);

    printf("\n%s, %s, %d", object2.getsubject(), object2.getweek_day(), object2.getnum_para());

    Cell mobj[5];

    mobj->copy(object2, 5);

    for (int i=0; i<5; i++) {
        mobj[i].print();
    }

    object2.scan();
    object2.print();

    getch();

    delete object1;
    return 0;
}
