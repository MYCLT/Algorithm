#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "sortUtils.h"
#include <math.h>

void bubbleSort(int *arr, int n) 
{
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

void insertSort(int *arr, int n){
	if (arr == NULL || n < 2)
		return;
	for (int i = 1; i < n; i++){
		int tem = arr[i];
		int j = i;
		while (j > 0 && tem < arr[j-1]) {
			swap(arr + j - 1, arr + j);
			j--;
		}
		arr[j] = tem;
	}
}

void choiceSort(int *arr, int n)
{
}

void mergeSort(int *arr, int n)
{
}

void quickSort(int *arr, int n)
{
}

void randomQuickSort(int *arr, int n)
{
}

void heapSort(int *arr, int n)
{
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int** generateDeafaultRandom(int * arr)
{
	generateRandom(arr, DEFAULT_MAX_SIZE, DEFAULT_MAX_VAL);
	return arr;
}

int** generateRandom(int *arr,int size, int val)
{
	for (int i = 0; i < size; i++) {
		*(arr + i) = rand();
	}
	return arr;
}

void printfArr(int *arr, int size) {
	if (arr == NULL)
		printf("Êý×éÎª¿Õ");
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
}

