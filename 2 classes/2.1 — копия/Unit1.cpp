// Нечай Андрей ПО - 21
// Лабораторная работа 2.1
// 9) Клетка расписания занятий

#include <vcl.h>
#pragma hdrstop
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "Cell.h"
#pragma argsused

int main(int argc, char* argv[]) {
    Cell object1;

    printf("Vvedite name of subject: ");
    scanf("%s", &object1.subject);

    printf("Vvedite numer of class: ");
    scanf("%d", &object1.num_kabinet);

    printf("Vvedite fio teacher: ");
    scanf("%s", &object1.fio_teacher);

    printf("Vvedite number of para: ");
    scanf("%d", &object1.num_para);

    printf("\nLesson: %s;\nKabinet: %d;\nTeacher: %s;\nPara: %d\n\n", object1.subject, object1.num_kabinet, object1.fio_teacher, object1.num_para);


    Cell *object2;
    object2 = new Cell;

    printf("Vvedite name of subject: ");
    scanf("%s", &object2->subject);

    printf("Vvedite numer of class: ");
    scanf("%d", &object2->num_kabinet);

    printf("Vvedite fio teacher: ");
    scanf("%s", &object2->fio_teacher);

    printf("Vvedite number of para: ");
    scanf("%d", &object2->num_para);

    printf("\nLesson: %s;\nKabinet: %d;\nTeacher: %s;\nPara: %d\n\n", object2->subject, object2->num_kabinet, object2->fio_teacher, object2->num_para);


    Cell mas1[15];
    int n, i;

    printf("Vvedite razmer massiva: ");
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        printf("\nVvedite name of subject: ");
        scanf("%s", &mas1[i].subject);

        printf("Vvedite numer of class: ");
        scanf("%d", &mas1[i].num_kabinet);

        printf("Vvedite fio teacher: ");
        scanf("%s", &mas1[i].fio_teacher);

        printf("Vvedite number of para: ");
        scanf("%d", &mas1[i].num_para);
    }

    for (i=0; i<n; i++) {
        printf("%d)", i+1);
        printf("\nLesson: %s;\nKabinet: %d;\nTeacher: %s;\nPara: %d\n\n", mas1[i].subject, mas1[i].num_kabinet, mas1[i].fio_teacher, mas1[i].num_para);
    }

    Cell *mas2;

    printf("Vvedite razmer massiva: ");
    scanf("%d", &n);

    mas2 = new Cell[n];

    for (i=0; i<n; i++) {
        printf("\nVvedite name of subject: ");
        scanf("%s", &mas2[i].subject);

        printf("Vvedite numer of class: ");
        scanf("%d", &mas2[i].num_kabinet);

        printf("Vvedite fio teacher: ");
        scanf("%s", &mas2[i].fio_teacher);

        printf("Vvedite number of para: ");
        scanf("%d", &mas2[i].num_para);
    }

    for (i=0; i<n; i++) {
        printf("%d)", i+1);
        printf("\nLesson: %s;\nKabinet: %d;\nTeacher: %s;\nPara: %d\n\n", mas2[i].subject, mas2[i].num_kabinet, mas2[i].fio_teacher, mas2[i].num_para);
    }

    getch();

    delete object2;
    delete [] mas2;

    return 0;
}
