#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int f[1000010];
int quickpower(unsigned long long a, unsigned long long b, int mod)
{
	a %= mod;
	unsigned long long ans = 1, base = a;
	while (b > 0) {
		if (b & 1) {
			ans *= base; ans %= mod;
		}
		base *= base; base %= mod;
		b >>= 1;
	}
	return ans % mod;
}
int main()
{
	unsigned long long a, b; int i, mo, n;
	scanf("%llu%llu%d", &a, &b, &n);
	if (n == 1 || a == 0) printf("0\n");
	f[0] = 0; f[1] = 1; f[2] = 1;
	for (i = 3; i <= n * n + 4; i++) {
		f[i] = (f[i - 1] + f[i - 2]) % n;
		if (f[i - 1] == 1 && f[i] == 1) {
			mo = i - 2; break;
		}
	}
	printf("%d\n", f[quickpower(a, b, mo)]);
}