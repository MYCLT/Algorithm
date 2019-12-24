#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main01() {

	char arr1[] = "hello";
	char arr2[] = "world";
	char arrBuf[100];

	fgets(arrBuf, sizeof(arrBuf), stdin);
	printf("%s", arrBuf);

	char str1[] = "12 15 16";
	int a = 0;
	int b = 0;
	int c = 0;
	sscanf(str1, "%d %d %d", &a, &b, &c);
	printf("a = %d, b = %d, c = %d", a, b, c);

	printf("«Î ‰»Î ˝◊÷£∫");
	scanf("%d %d %d", &a, &b, &c);
	printf("a = %d, b = %d, c = %d", a, b, c);

	system("pause");
	return EXIT_SUCCESS;
}