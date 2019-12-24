#define _CRT_SECURT_NO_WARNINGS
#include <stdio.h>
#include <string>
#include <stdlib.h>

int main() {

	int arr[] = { 1,2 };

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("arr[%d] = %d", i, arr[i]);
	}
	return EXIT_SUCCESS;
}