//Нечай Андрей ПО-21
//Лабораторная работа №3
#include <stdio.h>
#include <conio.h>
#include <string.h>
#pragma hdrstop
#pragma argsused

class Valute {
    private :
        char name_valute[80];
        int kurs_prodashi;
        int kurs_pokupki;
    public :
        Valute(char *, int, int);
        Valute(Valute &);
        void print();
        void setname_value(char *);
        int getkurs_prodashi();
};

void Valute::print() {
    printf("\nname valute: %s , kurs prodashi: %d , kurs pokupki: %d", name_valute, kurs_prodashi, kurs_pokupki);
}

void Valute::setname_value(char* valute_name){
    strcpy(name_valute, valute_name);
}

int Valute::getkurs_prodashi(){
    return kurs_prodashi;
}

Valute::Valute(char* val, int k_prod, int k_pokup) {
    strcpy(name_valute, val);
    kurs_prodashi = k_prod;
    kurs_pokupki = k_pokup;
}

Valute::Valute(Valute &v) {
    strcpy(name_valute, v.name_valute);
    kurs_prodashi = v.kurs_prodashi;
    kurs_pokupki = v.kurs_pokupki;
}

int main() {
    Valute obj1("EUR", 2, 3);
    obj1.print();

    Valute obj2(obj1);
    obj2.print();

    obj2.setname_value("BYN");
    obj2.print();

    printf("\nKurs prodashi: %d", obj2.getkurs_prodashi());

    Valute *dobj1 = new Valute("EUR", 2, 3);
    dobj1->print();

    Valute *dobj2 = new Valute(*dobj1);
    dobj2->print();

    dobj2->setname_value("BYN");
    dobj2->print();

    printf("\nKurs prodashi: %d", dobj2->getkurs_prodashi());

    getch();
    delete dobj1;
    delete dobj2;
    return 0;
}
