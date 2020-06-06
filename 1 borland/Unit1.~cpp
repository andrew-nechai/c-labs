//Нечай Андрей
//24. Дан массив слов. Во всех словах вставить между одинаковыми символами символ ‘=’.
//Подсчитать количество слов, которые в результате изменились.

#include <vcl.h>
#pragma hdrstop
#pragma argsused
#include <conio.h>
#include <string.h>
#include <stdio.h>

int task(char **str, int &n) {
    int i = 0, r = 0, j=0, len, k = 0, count = 0;
    char buf[100], *l;

    for (i=0; i<n; i++) {
        *buf = **(str+i);
        l = *(str+i)+1;

    	while (*(l) != '\0') {
    	    if (*(buf+r) == (*l)) {
                *(buf+r+1) = '=';
                *(buf+r+2) = *(l);
                r += 2;
                k = 1;
            }
            else        {
                *(buf+r+1) = *(l);
                r++;
            }
            l++;
        }

        buf[r+1] = '\0';

        count += k;
        k = 0;
        r = 0;

        strcpy(*(str+i), buf);
        strcpy(buf, "");
    }

    return count;
}

main() {
   char **str, i;

   int n, count;

   printf("Vvedite n: ");
   scanf("%d", &n);

   str = new char* [n];


   for (i=0; i<n; i++) {
        *(str+i) = new char[100];
   }


   for (i=0; i<n; i++) {
       printf("str[%d] = ", i+1);
       scanf("%s", *(str+i));
   }

   count = task(str, n);

   printf("\nOtvet: ");
   for (i=0 ;i<n; i++) {
       printf("%s ", *(str+i));
   }
   printf("\n\nCount of changed words: %d", count);

   getch();

   for (i=0; i<n; i++) {
       delete [] *(str+i);
   }

   delete [] str;

   return 0;
}
