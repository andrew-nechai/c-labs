#include "ChangeCel.h"
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <iomanip.h>

ChangeCel::ChangeCel() {
    *change_sub = '\0';
    change_kab = 0;
}

ChangeCel::ChangeCel(char* subj, char* day, int para, char* new_sub, int new_kab) : Cel(subj, day, para), change_kab(new_kab) {
    setchange_sub(new_sub);
}

ChangeCel::ChangeCel(ChangeCel &obj) : Cel(obj){
    strcpy(change_sub, obj.change_sub);
    change_kab = obj.change_kab;
}

void ChangeCel::setchange_sub(char *s) {
    strcpy(change_sub, s);
}


void ChangeCel::setchange_kab(int i) {
    change_kab = i;
}

char* ChangeCel::getchange_sub() {
    return change_sub;
}

int ChangeCel::getchange_kab() {
    return change_kab;
}

void ChangeCel::print() {
    Cel::print();
    cout << endl << "change_sub = " << change_sub << dec << ", change_kab = " << change_kab;
}

void ChangeCel::scan() {
    Cel::scan();
    cout << "Vvedite new subject: ";
    cin >> setw(20) >> change_sub;
    flushall();
    cout << "Vvedite new kab: ";
    cin >> change_kab;
}
