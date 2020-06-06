#include "Cel.h"
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>

ofstream &operator <<(ofstream &f, Cel obj) {
    f << *(obj.getsubject());
    return f;
}

ifstream &operator >>(ifstream &f, Cel &obj) {
    char line[100];
    f.getline(line, ')');

    return f;
}

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


void Cel::print() {
    cout << endl << left << "subject = " << subject << ", week_day = " << week_day << ", num_para = " << num_para;
}

void Cel::scan() {
    cout << endl << "Vvedite subject: ";
    cin.width(20);
    cin >> subject;
    flushall();
    cout << "Vvedite week_day: ";
    cin.width(20);
    cin >> week_day;
    flushall();
    cout << "Vvedite num_para: ";
    cin >> num_para;
}

void Cel::savef(FILE *f) {
    fwrite(this, sizeof(Cel), 1, f);
}

void Cel::readf(FILE *f) {
    Cel obj;
    fread(&obj, sizeof(Cel), 1, f);
    *(this) = obj;
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
