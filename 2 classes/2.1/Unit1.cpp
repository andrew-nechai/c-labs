// Нечай Андрей ПО - 21
// Лабораторная работа 2.1
// 9) Клетка расписания занятий
// отсортировать динам массив по дню недели (если по дню недели одинаково, то по номеру пары)

#include <vcl.h>
#pragma hdrstop
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "Cell.h"
#pragma argsused

int main() {
    Cell object1;

    printf("Vvedite name of subject: ");
    scanf("%s", &object1.subject);

    printf("Vvedite week day: ");
    scanf("%s", &object1.week_day);

    printf("Vvedite number of para: ");
    scanf("%d", &object1.num_para);

    printf("\nLesson: %s;\nWeek day: %s;\nPara: %d\n\n", object1.subject, object1.week_day, object1.num_para);


    Cell *object2;
    object2 = new Cell;

    printf("Vvedite name of subject: ");
    scanf("%s", &(*(object2)).subject);

    printf("Vvedite week day: ");
    scanf("%s", &object2->week_day);


    printf("Vvedite number of para: ");
    scanf("%d", &object2->num_para);

    printf("\nLesson: %s;\nWeek day: %s;\nPara: %d\n\n", object2->subject, object2->week_day, object2->num_para);


    Cell mas1[15];
    int n, i, j;
    printf("Vvedite razmer massiva: ");
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        printf("\nVvedite name of subject: ");
        scanf("%s", &mas1[i].subject);

        printf("Vvedite week day: ");
        scanf("%s", &mas1[i].week_day);

        printf("Vvedite number of para: ");
        scanf("%d", &mas1[i].num_para);
    }

    for (i=0; i<n; i++) {
        printf("%d)", i+1);
        printf("\nLesson: %s;\nWeek day: %s;\nPara: %d\n\n", mas1[i].subject, mas1[i].week_day, mas1[i].num_para);
    }

    Cell *mas2;

    printf("Vvedite razmer massiva: ");
    scanf("%d", &n);

    mas2 = new Cell[n];

    for (i=0; i<n; i++) {
        printf("\nVvedite name of subject: ");
        scanf("%s", &mas2[i].subject);

        printf("Vvedite week day: ");
        scanf("%s", &mas2[i].week_day);

        printf("Vvedite number of para: ");
        scanf("%d", &mas2[i].num_para);
    }

    Cell x;

    int k, ind1, ind2;

    //сортировка

    char a[4][20];
    strcpy(a[0], "M");
    strcpy(a[1], "T");
    strcpy(a[2], "W");
    strcpy(a[3], "Th");
    strcpy(a[4], "F");

    char str[20];

    for (i=0; i<n; i++){
       for (j=0; j<n-i-1; j++){
           for (k=0; k<5; k++){
                if (strcmp(a[k],  mas2[j].week_day) == 0)
                    ind1 = k;
                if (strcmp(a[k], mas2[j+1].week_day) == 0)
                    ind2 = k;
           }
           if (ind1 > ind2) {
                x = mas2[j];
                mas2[j] = mas2[j+1];
                mas2[j+1] = x;
           }
       }
    }

    for (i=0; i<n; i++){
        for (j=0; j<n-i-1; j++){
            if ((strcmp(mas2[j].week_day, mas2[j+1].week_day) == 0) && (mas2[j].num_para > mas2[j+1].num_para)){
                    x = mas2[j];
                    mas2[j] = mas2[j+1];
                    mas2[j+1] = x;
            }
        }
    }

    //

    for (i=0; i<n; i++) {
        printf("%d)", i+1);
        printf("\nLesson: %s;\nWeek day: %s;\nPara: %d\n\n", mas2[i].subject, mas2[i].week_day, mas2[i].num_para);
    }

    getch();

    delete object2;
    delete [] mas2;

    return 0;
}

