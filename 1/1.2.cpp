//����� ������
//24. ��� ������ ����. �� ���� ������ �������� ����� ����������� ��������� ������ �=�.
//���������� ���������� ����, ������� � ���������� ����������.

#include <vcl.h>
#pragma hdrstop
#pragma argsused
#include <conio.h>
#include <string.h>
#include <stdio.h>

int task(char **str, int &n) {
    int i = 0, r = 0, j=0, len, k = 0, count = 0;
    char buf[100], *l;

    //char tt[]="abcd";
    //l = tt;

    //while (l != '\0'){
    //    *l = 'x';
    //    l++;
    //}

    for (i=0; i<n; i++) {
    	len = strlen(*(str+i));
        *buf = **(str+i);

    	for (j=1; j<len; j++) {
    	    if (*(buf+r) == *(*(str+i)+j)) {
                *(buf+r+1) = '=';
                *(buf+r+2) = *(*(str+i)+j);
                r += 2;
                k = 1;
            }
            else {
                *(buf+r+1) = *(*(str+i)+j);
                r++;
            }
        }

        buf[r+1] = '\0';

        count += k;
        k = 0;

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
