#include "Cel.h"
#ifndef ChangeH
#define ChangeH

class ChangeCel : public Cel {
    private:
        char change_sub[80];
        int change_kab;
    public:
        void setchange_sub (char*);
        void setchange_kab (int);
        char* getchange_sub();
        int getchange_kab();
        void print();
        void scan();
        ChangeCel();
        ChangeCel(ChangeCel &obj);
        ChangeCel(char*, char*, int, char*, int);
};

#endif

