#include "Cel.h"
#include <stdio.h>
#include <iostream.h>
#include <iomanip.h>
#include <fstream.h>
#ifndef ChangeH
#define ChangeH

class ChangeCel : public Cel {
    friend ostream &operator << (ostream &, ChangeCel &);
    friend void operator >>(istream &, ChangeCel &);
    private:
        char change_sub[80];
        int change_kab;
    public:
        ChangeCel();
        ChangeCel(ChangeCel &obj);
        ChangeCel(char*, char*, int, char*, int);
        void setchange_sub (char*);
        void setchange_kab (int);
        char* getchange_sub();
        int getchange_kab();
        void print();
        void scan();
        virtual char *getkey();
        virtual char *sortkey(char*);
        void savef(ofstream &f);
        void readf(ifstream &f);
};

#endif

