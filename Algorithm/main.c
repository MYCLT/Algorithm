#define _CRT_SENURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "bubbleSort.h"

int main() {
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	for (int i = 0; i < n; i++) {
		printf("%d  ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
