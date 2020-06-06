#ifndef CelH
#define CelH

class Cel {
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
        void setnum_para(char );
        char *getsubject();
        char *getweek_day();
        int getnum_para();
        void print();
        void scan();
};

#endif
 