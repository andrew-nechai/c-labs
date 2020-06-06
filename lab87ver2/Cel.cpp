#include "Cel.h"
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <iomanip.h>
#include <fstream.h>

void Cel::setsubject(char *s) {
    strcpy(subject, s);
}

void Cel::setweek_day(char *s) {
    strcpy(week_day, s);
}

void Cel::setnum_para(int i) {
    num_para = i;
}

char *Cel::getsubject() {
    return subject;
}

char *Cel::getweek_day() {
    return week_day;
}

int Cel::getnum_para() {
    return num_para;
}


void Cel::print(ostream &s) {
    s << endl << left << "subject = " << subject << ", week_day = " << week_day << ", num_para = " << num_para;
}

void Cel::scan(istream &s) {
    cout << endl << "Vvedite subject: ";
    s.width(20);
    s >> subject;
    flushall();
    cout << "Vvedite week_day: ";
    s.width(20);
    s >> week_day;
    flushall();
    cout << "Vvedite num_para: ";
    s >> num_para;
}

ostream &operator <<(ostream &s, Cel &obj) {
    obj.print(s);
    return s;
}

istream &operator >>(istream &s, Cel &obj) {
    obj.scan(s);
    return s;
}

void Cel::savef(ofstream &f) {
    f << getsubject() << " " << getweek_day() << " " << getnum_para() << " \n";
}

void Cel::readf(ifstream &f) {
    char str1[80], str2[80];
    int n;
    f >> str1 >> str2 >> n;
    setsubject(str1);
    setweek_day(str2);
    setnum_para(n);
}

char* Cel::getkey(){
    return "a";
}

char* Cel::sortkey(char* str) {
    *(str) = 'a';
    *(str+1) = '\0';
    strcat(str, subject);
    return str;
}

Cel::Cel() {
    *subject = 0;
    *week_day = 0;
    num_para = 0;
}

Cel::Cel(char *sub, char *week, int num){
    strcpy(subject, sub);
    strcpy(week_day, week);
    num_para = num;
}

Cel::Cel(Cel &obj){
    strcpy(subject, obj.subject);
    strcpy(week_day, obj.week_day);
    num_para = obj.num_para;
}

Cel::Cel(char *s) : num_para(0) {
    strcpy(subject, s);
    *week_day = '\0';
}

