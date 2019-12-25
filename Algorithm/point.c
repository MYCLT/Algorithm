#define _CRT_SENURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main00() {
	int a = 100;
	const int *p = &a;

	int b = 90;
	p = &b;
	printf("%d\n", *p);

	int * const q = &a;
	*q = 80;
	printf("%d\n", *q);

	int arr[3] = { 1,2,3 };
	int* p1[3];

	for (int i = 0; i < sizeof(p1) / sizeof(p1[0]); i++) {
		p1[i] = &arr[i];
	}


	system("pause");
	return 0;

}