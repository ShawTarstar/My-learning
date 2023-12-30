#include<stdio.h>
//long long fact(long long n);
#include<stdio.h>
int main()
{
	long long i,n,p,q,sum;
	while(scanf("%lld",&n)!=EOF)
	{
		if(n>=41)printf("0\n");
		else{
			p=1;
			for(i=1;i<=n;i++)
			{
				p*=i;
				p%=2009;
			}
			printf("%lld\n",p);
			}
	}
	return 0;
	}
/*long long fact(long long n)
{
	if(n==0)
	return 1;
	else
	return ((fact(n-1))%2009*(n%2009))%2009; 
}*/
