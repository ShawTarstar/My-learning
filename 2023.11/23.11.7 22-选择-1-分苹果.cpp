#include<stdio.h>
int main()
{
	long long int n,m,k;
	while(scanf("%lld %lld %lld",&n,&m,&k)!=EOF)
	{
		if((n-m)%k!=0)
		printf("UnHappy!");
		else printf("Happy!");
	}
}
