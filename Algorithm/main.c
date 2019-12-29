#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "sortUtils.h"
#include <string.h>

void testInsertSort();

struct Student
{
	int id;
	char name[25];
	int age;
};

struct teacher
{
	int no;
	char name[25];
} t1, t2;

struct
{
	int id;
	char name[25];
} s1, s2;

typedef struct Student stu;

int main() {

	FILE *fp = NULL;
	fp = fopen("1.txt", "w");
	if (fp ==NULL ){
		printf("文件打开失败");
		return;
	}

	stu *p = NULL;
	p = (stu*)malloc(sizeof(stu));

	p->id = 16;
	strcpy(p->name, "mike");
	p->age = 25;

	int res = fwrite(p, sizeof(stu), 1, fp);
	if (res == 1)
	{
		printf("写入成功");
	}
	free(p);
	fclose(fp);

	FILE *fp2 = fopen("1.txt", "r");
	if (fp2 == NULL) {
		printf("打开文件失败");
	}

	stu *s = NULL;
	s = (stu *)malloc(sizeof(stu));
	int re = fread(s, sizeof(stu), 1, fp2);
	if (re != 0) {
		if (s != NULL) {
			printf("%d , %s , %d\n", s->id, s->name, s->age);
		}
	}
	free(s);
	fclose(fp2);

	fseek(fp2, 3 * sizeof(stu), SEEK_SET);

	system("pause");
	return 0;
}

void testInsertSort() {
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	insertSort(arr, n);
	for (int i = 0; i < n; i++) {
		printf("%d  ", arr[i]);
	}
	printf("\n");
}
