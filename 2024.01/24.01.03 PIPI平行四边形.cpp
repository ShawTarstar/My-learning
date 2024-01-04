#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, h, i, j; char c;
	while (scanf("%d%d %c",&x,&h,&c) != EOF)
	{
		for (i = 0; i < h; i++) printf("%c", c);
		if (x != 1) printf("\n");
		for (i = 0; i < x - 2; i++) {
			for (j = 0; j <= i; j++) {
				printf(" ");
			}
			printf("%c", c);
			for (j = 0; j < h - 2; j++) printf(" ");
			printf("%c\n", c);
		}
		for (i = 0; i < x - 1; i++) printf(" ");
		if (x != 1) for (i = 0; i < h; i++) printf("%c", c);
		printf("\n");
	}
}