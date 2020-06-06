//Нечай Андрей ПО-21
//Лабораторная работа №6

#pragma hdrstop
#include <stdio.h>
#include <conio.h>
#include "Cel.h"
#include "Collection.h"
#include <string.h>
#pragma argsused

int main() {

    Cel c1, c2;
    if (c1 == c2) puts("==");

    Cel *sub1 = new Cel("OOP", "Monday", 1),
        *sub2 = new Cel("History", "Monday", 2),
        *sub3 = new Cel("History", "Monday", 2),
        *sub4 = new Cel("History", "Monday", 2),
        *sub5 = new Cel("OSSP", "Monday", 5),
        *sub6 = new Cel("TI", "Thusday", 1),
        *sub7 = new Cel("KSS", "Thusday", 2),
        *sub8 = new Cel("OOP", "Thusday", 3),
        *sub9 = new Cel("OSSP", "Thusday", 4),
        *sub10 = new Cel("History", "Thusday", 5);


    Collection col;
    Cel c;

    int k = (col - c);

    printf("%d", k);

    Cel c11(*sub1);
    Collection col11;
    c11 += col;

    col11.print();

    Collection mas;

    mas.add_element(sub1);
    mas.add_element(sub2);
    mas.add_element(sub3);
    mas.add_element(sub4);
    mas.add_element(sub5);

    Cel *obj_add1 = new Cel("Math", "Monday", 6);
    Cel *obj_add2 = new Cel(*obj_add1);
    Cel *obj_add3 = new Cel(*obj_add1);

    mas += obj_add1;
    mas += *obj_add2;

    mas.print();

    mas -= 1;
    mas -= "Math";

    printf("\n");
    mas.print();

    printf("\n");
    if (mas[3] == NULL){
        printf("\nNet elementa s takim nomerom!");
    }
    else {
        mas[3]->print();
    }

    if (mas["Math"] == NULL) {
        printf("\nNet elementa s takim name subject!");
    }
    else {
        mas["Math"]->print();
    }

    printf("\n\nDmas: \n");
    Collection *dmas = new Collection;

    dmas->add_element(sub6);
    dmas->add_element(sub7);
    dmas->add_element(sub8);
    dmas->add_element(sub9);
    dmas->add_element(sub10);

    (*dmas) += obj_add3;
    (*dmas) += *obj_add2;

    dmas->print();

    (*dmas) -= 3;
    (*dmas) -= "Math";

    printf("\n");
    dmas->print();

    printf("\n");

    if ((*dmas)[2] == NULL){
        printf("\nNet elementa s takim nomerom!");
    }
    else {
        (*dmas)[2]->print();
    }

    if ((*dmas)["History"] == NULL){
        printf("\nNet elementa s takim name subject!");
    }
    else {
        (*dmas)["History"]->print();
    }

    getch();

    delete dmas;

    return 0;
}
