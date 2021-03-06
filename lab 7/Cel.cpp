#include "Cel.h"
#include <string.h>
#include <conio.h>
#include <stdio.h>

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
    printf("\nsubject = %s, week_day = %s, num_para = %d", subject, week_day, num_para);
}

void Cel::scan() {
    printf("\nVvedite subject: ");
    scanf("%s", subject);
    printf("Vvedite week_day: ");
    scanf("%s", week_day);
    printf("Vvedite num_para: ");
    scanf("%d", &num_para);
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

void Cel::clear() {
    *subject = '\0';
    *week_day = '\0';
    num_para = 0;
}
