#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int arr[100][100];
//5|44332211
//d|ruldruld
//6|5544332211
//d|ruldruldru
int main()
{
	memset(arr, 0, sizeof(arr));
	int n, i, j, heng, zong, num = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++) arr[i][0] = num++;
	num--;
	heng = n - 1; zong = 0;
	int ru = (n - 1) % 2;
	for (i = n - 1; i > 0; i--) {
		if (i % 2 == ru) {
			for (j = 0; j < i; j++) {
				arr[heng][zong++] = num++;
			}
			for (j = 0; j < i; j++) {
				arr[heng--][zong] = num++;
			}
		}
		else {
			for (j = 0; j < i; j++) {
				arr[heng][zong--] = num++;
			}
			for (j = 0; j < i; j++) {
				arr[heng++][zong] = num++;
			}
		}
	}
	if (n % 2 == 1) arr[n / 2][n / 2] = n * n;
	else arr[n / 2 - 1][n / 2] = n * n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}