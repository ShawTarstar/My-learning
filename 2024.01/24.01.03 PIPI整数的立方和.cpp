#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	long long int k, i, ans;
	while (scanf("%lld", &k) != EOF)
	{
		ans = 0;
		for (i = 1; i <= k; i++) {
			ans += i * i * i;
		}
		printf("%lld\n", ans);
	}
}