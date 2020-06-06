#include "Cel.h"
#include <stdio.h>
#ifndef H_Collection
#define H_Collection

class Collection {
    private:
        Cel **mas_cels;
        int count_cels;
    public:
        Collection();                                                                           
        void add_element(Cel *);
        void remove_element(int);
        int getcount_cels();
        Cel* getykazat_obj(int);
        void swap(int, int);
        void sort();
        void operator +=(Cel *);
        void operator +=(Cel &);
        void operator -=(int);
        void operator -=(char *);
        Cel* operator [](int);
        Cel* operator [](char *);
        void print();
        void printobj(int);
        void scanobj(int);
        void savef(FILE*);
        void readf(FILE*);
        ~Collection();
};

#endif
