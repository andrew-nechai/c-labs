//����� ������ ��-21
//������������ ������ �5

#pragma hdrstop
#include <stdio.h>
#include <conio.h>
#include "Cel.h"
#include "Collection.h"
#include <string.h>
#pragma argsused

int main() {
    Cel *sub1 = new Cel("OOP", "Monday", 1),
        *sub2 = new Cel("History", "Monday", 2),
        *sub3 = new Cel("Math", "Monday", 3),
        *sub4 = new Cel("KSS", "Monday", 4),
        *sub5 = new Cel("OSSP", "Monday", 5),
        *sub6 = new Cel("TI", "Thusday", 1),
        *sub7 = new Cel("KSS", "Thusday", 2),
        *sub8 = new Cel("OOP", "Thusday", 3),
        *sub9 = new Cel("OSSP", "Thusday", 4),
        *sub10 = new Cel("History", "Thusday", 5);

    Collection mas, mas2;

    mas.add_element(sub1);
    mas.add_element(sub2);
    mas.add_element(sub3);
    mas.add_element(sub4);
    mas.add_element(sub5);

    int len_mas = mas.getcount_cels();
    int len_mas2 = mas2.getcount_cels();

    for (int i=0; i<5; i++) {

    }

    Cel sss("OOP", "Monday", 1);
    sss.print();

    mas.add(sss, 5);
    mas.add(sss, 1);

    printf("\nMas with 5 copys: \n");
    mas.print();

    mas.remove_element(1);
    printf("\n\nCount of elements (after remove 1): %d;", mas.getcount_cels());

    printf("\n\nFirst element: ");
    mas.getykazat_obj(1)->print();

    mas.swap(1,2);
    printf("\n\nSwap 1 and 2:");
    mas.print();

    mas.sort();
    printf("\n\nSorted collection:");
    mas.print();

    Collection *dmas;

    dmas = new Collection;

    dmas->add_element(sub6);
    dmas->add_element(sub7);
    dmas->add_element(sub8);
    dmas->add_element(sub9);
    dmas->add_element(sub10);

    printf("\n");
    dmas->print();
    dmas->remove_element(2);
    printf("\n\nCount of elements (after remove 2): %d;", dmas->getcount_cels());

    printf("\n\nFirst element: ");
    dmas->getykazat_obj(1)->print();

    dmas->swap(2,3);
    printf("\n\nSwap 2 and 3:");
    dmas->print();

    dmas->sort();
    printf("\n\nSorted collection:");
    dmas->print();

    getch();

    delete dmas;

    return 0;
}
