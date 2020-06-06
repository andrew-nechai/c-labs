#include "Cel.h"
#ifndef H_Collection
#define H_Collection

class Collection {
    friend void operator += (Cel, Collection&);
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
        int operator -(Cel);
        ~Collection();
};

#endif
