#pragma once

#define DEFAULT_MAX_SIZE 50
#define DEFAULT_MAX_VAL 50

//Ã°ÅÆÅÅĞò
extern void bubbleSort(int *arr, int n);

//²åÈëÅÅĞò
extern void insertSort(int *arr, int n);

//Ñ¡ÔñÅÅĞò
extern void choiceSort(int *arr, int n);

//¹é²¢ÅÅĞò
extern void mergeSort(int *arr, int n);

//¿ìËÙÅÅĞò
extern void quickSort(int *arr, int n);

//Ëæ»ú¿ìÅÅ
extern void randomQuickSort(int *arr, int n);

//¶ÑÅÅĞò
extern void heapSort(int *arr, int n);

//Êı¾İ½»»»
extern void swap(int *a, int *b);

int** generateDeafaultRandom(int *arr);

int** generateRandom(int *arr, int size, int val);

void printfArr(int *arr, int size);
