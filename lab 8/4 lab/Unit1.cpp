//����� ������ ��-21
//������������ ������ �4
//9) ������ ��������� � ���������� ������� � ��������� �������� � ���������� ��������;

#include <vcl.h>
#pragma hdrstop
#include <stdio.h>
#include <conio.h>
#include "ChangeCel.h"
#include <string.h>
#include <iostream.h>
#pragma argsused

int main() {
    ChangeCel obj1, obj2("OOP", "Tuesday", 3, "Math", 1);

    cout << "subject = " << obj1.getsubject() << ", week_day = " << obj1.getweek_day() << ", num_para = " << obj1.getnum_para() << endl;
    cout << "change_sub = " << obj1.getchange_sub() << ", change_kab = " << obj1.getchange_kab();

    obj2.print();

    obj1.setsubject("Math");
    obj1.setweek_day("Monday");
    obj1.setnum_para(2);
    obj1.setchange_sub("History");
    obj1.setchange_kab(2);

    cout << endl;
    obj1.print();

    obj1.scan();
    obj1.print();

    ChangeCel obj3(obj1);
    obj3.print();

    ChangeCel *dobj1, *dobj2, *dobj3;

    dobj1 = new ChangeCel;
    dobj2 = new ChangeCel("Math", "Tuesday", 5, "OOP", 2);

    cout << endl << endl << "subject = " << dobj1->getsubject() << ", week_day = " << dobj1->getweek_day() << ", num_para = " << dobj1->getnum_para();
    cout << endl << "change_sub = " << dobj1->getchange_sub() << "change_kab = " << dobj1->getchange_kab();

    dobj2->print();

    dobj1->setsubject("OOP");
    dobj1->setweek_day("Thursday");
    dobj1->setnum_para(3);
    dobj1->setchange_sub("History");
    dobj1->setchange_kab(1);

    cout << endl;
    dobj1->print();

    dobj1->scan();
    dobj1->print();

    dobj3 = new ChangeCel(*dobj1);
    dobj3->print();

    getch();

    return 0;
}
