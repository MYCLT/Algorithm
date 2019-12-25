#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "sortUtils.h"

void bubbleSort(int *arr, int n) {
	if (arr == NULL || n < 2)
		return;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}