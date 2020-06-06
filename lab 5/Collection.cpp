#include "Cel.h"
#include "Collection.h"
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

void Collection::add(Cel obj, int count) {
    for (int i=0; i<count; i++) {
        Cel *(elem) = new Cel(obj);
        add_element(elem);
    }
}

void Collection::remove_element(int num) {
    delete *(mas_cels+num-1);

    for (int i = num-1; i < count_cels-1; i++){
        *(mas_cels+i) = *(mas_cels+i+1);
    }

    count_cels--;
}

Cel* Collection::getykazat_obj(int n) {
    return *(mas_cels+n-1);
}

void Collection::swap(int num1, int num2) {
    Cel obj;
    obj = **(mas_cels+num1-1);
    **(mas_cels+num1-1) = **(mas_cels+num2-1);
    **(mas_cels+num2-1) = obj;
}

void Collection::sort(){
    for (int i = 0; i < count_cels; i++) {
        for (int j = 0; j<count_cels-1; j++) {
            if (strcmp((*(mas_cels+j))->getsubject(), (*(mas_cels+j+1))->getsubject()) > 0){
                swap(j+1, j+2);
            }
        }
    }
}

void Collection::print() {
    for (int i = 0; i < count_cels; i++) {
        (*(mas_cels + i))->print();
    }
}

Collection::~Collection() {
    for (int i = 0; i < count_cels; i++){
        delete *(mas_cels+i);
    }
    delete mas_cels;
}
