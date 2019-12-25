#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main012(int argc, char* argv[]) {

	char buf[] = "asdrfrgtg";
	char *p = strchr(buf, 'p');
	if (p == NULL) {
		printf("未能找到\n");
	}
	else
	{
		printf("%s\n", p);
	}

	char str[] = "asdrfrgtg";
	int flag = strcmp(buf, str);
	if (flag == 0) {
		printf("相等\n");
	}
	else {
		printf("%d\n", flag);
	}

	char str2[] = "aaa,bbb,ccc,ddd";
	char temp[100];
	strcpy(temp, str2);
	char *p1 = strtok(temp, ",");
	while (p1 != NULL)
	{
		printf("%s\n", p1);
		p1 = strtok(NULL, ",");
	}
	system("pause");
	return EXIT_SUCCESS;
}