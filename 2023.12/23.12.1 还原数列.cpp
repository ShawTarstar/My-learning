#include<stdio.h>
int main()
{
	long long int n,count;long long int t1,t2,t;
	while(scanf("%lld",&n)!=EOF)
	{
		t1=1;t2=2;count=3;
		t=t1+t2;
		for(;;)
		{
			if(t>=n||n==1||n==2)
			break;
			t1=t2;t2=t;t=t1+t2;
			count++;
		}
		if(n==1)printf("1\n");
		else if(n==2)printf("2\n");
		else if(t>n)printf("0\n");
		else if(t==n)printf("%lld\n",count);
	}
}
