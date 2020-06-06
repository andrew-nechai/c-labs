#include <stdio.h>
#include <fstream.h>   
#include <iostream>

#ifndef H_CLASS
#define H_CLASS


class Cel {
    friend ostream &operator <<(ostream &, Cel &);
    friend istream &operator >>(istream &, Cel &);
    private:
        char subject[80];
        char week_day[80];
     	int num_para;
    public:
        Cel();
        Cel(char *, char *, int);
        Cel(Cel &);
        Cel(char *);
        void setsubject(char *);
        void setweek_day(char *);
        void setnum_para(int );
        char *getsubject();
        char *getweek_day();
        int getnum_para();
        virtual char *getkey();
        virtual char *sortkey(char*);
        virtual void print(ostream &s = cout);
        virtual void scan(istream &s = cin);
        virtual void savef(ofstream &f);
        virtual void readf(ifstream &f);
};

#endif
