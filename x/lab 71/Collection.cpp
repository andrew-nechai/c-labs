#include "Collection.h"
#include "Cel.h"
#include "ChangeCel.h"
#include <string.h>
#include <stdio.h>
#include <conio.h>

Collection::Collection() {
    count_cels = 0;
    mas_cels = new Cel *[20];
}

int Collection::getcount_cels(){
    return count_cels;
}

void Collection::add_element(Cel *element) {
    *(mas_cels + count_cels) = element;
    count_cels++;
}

void Collection::remove_element(int num) {
    delete *(mas_cels+num);

    for (int i = num; i < count_cels-1; i++){
        *(mas_cels+i) = *(mas_cels+i+1);
    }

    count_cels--;
}

Cel* Collection::getykazat_obj(int n) {
    return *(mas_cels+n);
}

void Collection::swap(int num1, int num2) {
    Cel *obj;
    obj = *(mas_cels+num1);
    *(mas_cels+num1) = *(mas_cels+num2);
    *(mas_cels+num2) = obj;
}

void Collection::sort(){
    char k1[80], k2[80];
    for (int i = 0; i < count_cels; i++) {
        for (int j = 0; j<count_cels-1; j++) {
            if (strcmp((*(mas_cels+j))->getkey(k1), (*(mas_cels+j+1))->getkey(k2)) > 0) {
                swap(j, j+1);
            }
        }
    }
}

void Collection::operator +=(Cel *x){
    add_element(x);
}

void Collection::operator +=(Cel &x){
    Cel *obj = new Cel(x);
    add_element(obj);
}

void Collection::operator -=(int i) {
    remove_element(i);
}

void Collection::operator -=(char* str){
    for (int i=0; i<count_cels; i++){
        if (strcmp((*(mas_cels+i))->getsubject(), str) == 0){
            remove_element(i);
            break;
        }
    }
}

Cel* Collection::operator [](int i) {
    if (i <= count_cels) {
        return mas_cels[i];
    }
    else {
        return NULL;
    }
}

Cel* Collection::operator [](char *str) {
    for (int i=0; i<count_cels; i++){
        if (strcmp((*(mas_cels+i))->getsubject(), str) == 0){
            return *(mas_cels+i);
        }
    }
    return NULL;
}

void Collection::print() {
    for (int i = 0; i < count_cels; i++) {
        (*(mas_cels + i))->print();
    }
}

void Collection::printobj(int i) {
    mas_cels[i]->print();
}

void Collection::scanobj(int i) {
    mas_cels[i]->scan();
}

void Collection::savef(FILE *f) {
    fwrite(&count_cels, 4, 1, f);
    for (int i=0; i<count_cels; i++) {
        fwrite((*(mas_cels+i))->getkey(), 1, 1, f);
        (*(mas_cels+i))->savef(f);
    }
}

void Collection::readf(FILE *f) {
    char str[2], *class1 = "a";
    int len;
    fread(&len, 4, 1, f);

    for (int i=0; i<len; i++) {
        fread(str, 1, 1, f);
        if (strcmp(str, class1) == 0){
            (*(mas_cels+i)) = new Cel;
        } else {
            (*(mas_cels+i)) = new ChangeCel;
        }
        (*(mas_cels+i))->readf(f);
        count_cels++;
    }
}

Collection::~Collection() {
    for (int i = 0; i < count_cels; i++){
        delete *(mas_cels+i);
    }
    delete mas_cels;
}

 