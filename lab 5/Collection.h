#ifndef H_Collection
#define H_Collection

#include "Cel.h"

class Collection {
    private:
        Cel **mas_cels;
        int count_cels;
    public:
        Collection();
        void add_element(Cel *);
        void add(Cel , int);
        void remove_element(int);
        int getcount_cels();
        Cel* getykazat_obj(int);
        void swap(int, int);
        void sort();
        void print();
        ~Collection();

};

#endif
