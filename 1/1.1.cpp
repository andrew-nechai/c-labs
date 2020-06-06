//Нечай Андрей
//24.Дан массив из N вещественных чисел. Переписать все его элементы в обратном порядке.

#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <iostream>

void task(float *mas, int n){
	int i,n2;
	float buf;
	
	n2 = n - 1;
	n = n/2;
	
	for (i=0; i<n; i++) {
		buf = *(mas+i);
		*(mas+i) = *(mas+n2-i);
		*(mas+n2-i) = buf;
	}
}

main() {
	setlocale(0, "");
	int i, n;
	float *mass;
	
	printf("Введите n: ");
	scanf("%d", &n);
	
	mass = new float [n];
	
	for (i=0; i<n; i++) {
		printf("mass[%d] = ", i+1);
		scanf("%f", (mass+i));
	}
	
	task(mass, n);
	
	printf("\nOtvet: ");
	for (i=0; i<n; i++) {
		printf("%-6.2f ", *(mass+i));
	}
	
	delete [] mass;
}
