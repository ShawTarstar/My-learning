#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char str[1006];
int arr[1005];
int main()
{
	int i, j, len, newnum=2, temp;
	while (scanf("%s", str) != EOF)
	{
		memset(arr, 0, sizeof(arr));
		len = (int)strlen(str); j = 0;
		strcat(str, "5");
		//printf("%s,len=%d\n", str, len);
		for (i = 0; i <= len; i++) {
			if (str[i] == '5') {
				if (newnum == 0) {
					j++;
				}
				newnum = 1;
			}
			else {
				arr[j] = arr[j] * 10 + (int)str[i] - '0';
				newnum = 0;
			}
		}
		int num = j; //printf("num=%d\n", num);
		for (i = 0; i < num - 1; i++) {
			for (j = 0; j < num - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					temp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = temp;
				}
			}
		}
		for (j = 0; j <= i; j++) {
			if (j == i) printf("%d", arr[j]);
			else printf("%d ", arr[j]);
		}
		printf("\n");
		memset(str, 0, sizeof(str));
	}
}