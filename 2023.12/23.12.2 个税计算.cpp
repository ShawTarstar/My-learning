#include<stdio.h>
int main()
{
	long long int n,m;
	while(scanf("%lld",&n)!=EOF)
	{
		if(n<=36000)
		{
			m=n*0.03;
			
		}
		else if(n>36000&&n<=144000)
		{
			m=1080+(n-36000)*0.1;
		}
		else if(n>144000&&n<=300000)
		{
			m=11880+(n-144000)*0.2;
		}
		else if(n>300000&&n<=420000)
		{
			m=43080+(n-300000)*0.25;
		}
		else if(n>420000&&n<=660000)
		{
			m=73080+(n-420000)*0.3;
		}
		else if(n>660000&&n<=960000)
		{
			m=145080+(n-660000)*0.35;
		}
		else if(n>960000)
		{
			m=250080+(n-960000)*0.45;
		}
		printf("%lld\n",m);
	}
}
