#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char str[105][105];
int main()
{
	int num, i;
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		scanf("%s", str[i]);
	}
	for (i = 0; i < num; i++) {
		int len = strlen(str[i]);
		if (len > 10) printf("%c%d%c\n", str[i][0], len - 2, str[i][len - 1]);
		else printf("%s\n", str[i]);
	}
}