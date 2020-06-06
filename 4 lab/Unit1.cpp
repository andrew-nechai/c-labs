//Нечай Андрей ПО-21
//Лабораторная работа №4
//9) Клетка изменений в расписании занятий с указанием сведений о заменяющем предмете;

#include <vcl.h>
#pragma hdrstop
#include <stdio.h>
#include <conio.h>
#include "ChangeCel.h"
#include <string.h>
#pragma argsused

int main() {
    ChangeCel obj1, obj2("OOP", "Tuesday", 3, "Math", 1);

    printf("subject = %s, week_day = %s, num_para = %d", obj1.getsubject(), obj1.getweek_day(), obj1.getnum_para());
    printf("\nchange_sub: %s, change_kab: %d\n", obj1.getchange_sub(), obj1.getchange_kab());

    obj2.print();

    obj1.setsubject("Math");
    obj1.setweek_day("Monday");
    obj1.setnum_para(2);
    obj1.setchange_sub("History");
    obj1.setchange_kab(2);

    printf("\n");
    obj1.print();

    obj1.scan();
    obj1.print();

    ChangeCel obj3(obj1);
    obj3.print();

    ChangeCel *dobj1, *dobj2, *dobj3;

    dobj1 = new ChangeCel;
    dobj2 = new ChangeCel("Math", "Tuesday", 5, "OOP", 2);

    printf("\n\n\n\nsubject = %s, week_day = %s, num_para = %d", dobj1->getsubject(), dobj1->getweek_day(), dobj1->getnum_para());
    printf("\nchange_sub: %s, change_kab: %d\n", dobj1->getchange_sub(), dobj1->getchange_kab());

    dobj2->print();

    dobj1->setsubject("OOP");
    dobj1->setweek_day("Thursday");
    dobj1->setnum_para(3);
    dobj1->setchange_sub("History");
    dobj1->setchange_kab(1);

    printf("\n");
    dobj1->print();

    dobj1->scan();
    dobj1->print();

    dobj3 = new ChangeCel(*dobj1);
    dobj3->print();

    getch();

    return 0;
}
