#include "Cell.h"
#include <string.h>
#include <conio.h>
#include <stdio.h>

void Cell::setsubject(char *s) {
    strcpy(subject, s);
}

void Cell::setweek_day(char *s) {
    strcpy(week_day, s);
}

void Cell::setnum_para(int i) {
    num_para = i;
}

void Cell::copy(Cell obj, int n) {
    for (int i=0; i<n; i++) {
        strcpy((this+i)->subject, obj.getsubject());
        strcpy((this+i)->week_day, obj.getweek_day());
        (this+i)->num_para = obj.getnum_para();
    }
}

char *Cell::getsubject() {
    return subject;
}

char *Cell::getweek_day() {
    return week_day;
}

int Cell::getnum_para() {
    return num_para;
}


void Cell::print() {
    printf("\nsubject = %s, week_day = %s, num_para = %d", subject, week_day, num_para);
}

void Cell::scan() {
    printf("\nVvedite subject: ");
    scanf("%s", subject);
    printf("Vvedite week_day: ");
    scanf("%s", week_day);
    printf("Vvedite num_para: ");
    scanf("%d", &num_para);
}
 