#pragma once

#define DEFAULT_MAX_SIZE 50
#define DEFAULT_MAX_VAL 50

//ð������
extern void bubbleSort(int *arr, int n);

//��������
extern void insertSort(int *arr, int n);

//ѡ������
extern void choiceSort(int *arr, int n);

//�鲢����
extern void mergeSort(int *arr, int n);

//��������
extern void quickSort(int *arr, int n);

//�������
extern void randomQuickSort(int *arr, int n);

//������
extern void heapSort(int *arr, int n);

//���ݽ���
extern void swap(int *a, int *b);

int** generateDeafaultRandom(int *arr);

int** generateRandom(int *arr, int size, int val);

void printfArr(int *arr, int size);
