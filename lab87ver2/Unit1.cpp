//Нечай Андрей ПО-21
//Лабораторная работа №8

#pragma hdrstop
#include <stdio.h>
#include <conio.h>
#include "Cel.h"
#include "ChangeCel.h"
#include "Collection.h"
#include <iostream.h>
#include <iomanip.h>
#include <fstream.h>
#pragma argsused
#include <iostream>

int main() {
    Cel *sub1 = new Cel("PO", "Monday", 1),
        *sub2 = new ChangeCel("KSS", "Monday", 4, "OSSP", 5),
        *sub3 = new Cel,
        *sub4 = new ChangeCel,
        *sub5 = new Cel("OP", "Thusday", 2),
        *sub6 = new ChangeCel("PO", "Thusday", 3, "OOP", 8),
        *sub7 = new Cel("TI", "Wensday", 3),
        *sub8 = new ChangeCel("PO", "Wensday", 3, "KSS", 81),

        *sub9 = new Cel("TI", "Thusday", 2),
        *sub10 = new ChangeCel("PO", "Wensday", 3, "OSSP", 33),
        *sub11 = new Cel("TI", "Friday", 6),
        *sub12 = new ChangeCel("PI", "Sunday", 1, "KSS", 12),
        *sub13 = new Cel("OOP", "Monday", 1),
        *sub14 = new ChangeCel("KSS", "Monday", 4, "OOP", 5),
        *sub15 = new Cel("RI", "Wensday", 3),
        *sub16 = new ChangeCel("PO", "Thusday", 3, "OSSP", 8);

    Cel obj1(*sub1);
    ChangeCel obj2("KSS", "Monday", 4, "OSSP", 5);

    cin >> obj1;
    cout << obj1;
    cin >> obj2;
    cout << obj2;

    Collection col, col2, *dcol, *dcol2;

    col.add_element(sub1);
    col.add_element(sub2);
    col.add_element(sub3);
    col.add_element(sub4);
    col.add_element(sub5);
    col.add_element(sub6);
    col.add_element(sub7);
    col.add_element(sub8);

    ofstream f1("file.txt");
    if (!f1){
        cout << "File open error!";
    }
    else {
        sub1->savef(f1);
        sub2->savef(f1);
        f1.close();
    }

    ifstream f2("file.txt");
    if (!f2){
        cout << "File open error!";
    }
    else {
        sub3->readf(f2);
        sub4->readf(f2);
        f2.close();
    }

    sub3->print();
    sub4->print();

    col.scanobj(1);
    col.scanobj(2);
    col.printobj(1);
    col.printobj(2);

    f1.open("file.txt");
    if (!f1){
        cout << "File open error!";
    }
    else {
        col.savef(f1);
        f1.close();
    }

    f2.open("file.txt");
    if (!f2){
        cout << "File open error!";
    }
    else {
        col2.readf(f2);
        f2.close();
    }

    printf("\n\n");
    col2.print();

    printf("\n\nSorted collection: ");

    col2.sort();
    col2.print();
    printf("\n\n");

    dcol = new Collection;
    dcol2 = new Collection;

    dcol->add_element(sub9);
    dcol->add_element(sub10);
    dcol->add_element(sub11);
    dcol->add_element(sub12);
    dcol->add_element(sub13);
    dcol->add_element(sub14);
    dcol->add_element(sub15);
    dcol->add_element(sub16);

    dcol->scanobj(1);
    dcol->scanobj(2);
    dcol->printobj(1);
    dcol->printobj(2);

    f1.open("file.txt");
    if (!f1){
        cout << "File open error!";
    }
    else {
        dcol->savef(f1);
        f1.close();
    }

    f2.open("file.txt");
    if (!f2){
        cout << "File open error!";
    }
    else {
        dcol2->readf(f2);
        f2.close();
    }


    printf("\n\n");
    dcol2->print();


    printf("\n\nSorted collection: ");
    dcol2->sort();
    dcol2->print();
    printf("\n\n");

    getch();

    delete dcol;
    delete dcol2;

    return 0;
}
