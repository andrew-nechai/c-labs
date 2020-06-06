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

void ChangeCel::print(ostream &s) {
    Cel::print(s);
    s << endl << "change_sub = " << change_sub << dec << ", change_kab = " << change_kab;
}

void ChangeCel::scan(istream &s) {
    Cel::scan(s);
    cout << "Vvedite new subject: ";
    s >> setw(20) >> change_sub;
    flushall();
    cout << "Vvedite new kab: ";
    s >> change_kab;
}

ostream &operator <<(ostream &s, ChangeCel &obj) {
    obj.print(s);
    return s;
}

istream &operator >>(istream &s, ChangeCel &obj) {
    obj.scan(s);
    return s;
}

char* ChangeCel::getkey() {
    return "b";
}

char* ChangeCel::sortkey(char *str) {
    *(str) = 'b';
    *(str+1) = '\0';
    strcat(str, change_sub);
    return str;
}

void ChangeCel::savef(ofstream &f) {
    f << getsubject() << " " << getweek_day() << " " << getnum_para() << " " << getchange_sub() << " " << getchange_kab() << " \n";
}

void ChangeCel::readf(ifstream &f) {
    char str1[80], str2[80], str3[80];
    int n1, n2;
    f >> str1 >> str2 >> n1 >> str3 >> n2;
    setsubject(str1);
    setweek_day(str2);
    setnum_para(n1);
    setchange_sub(str3);
    setchange_kab(n2);
}
