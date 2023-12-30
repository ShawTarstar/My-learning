#include<stdio.h>
int main()
{
	int a,b,c,big;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		if(a>b)
		{
			if(c>a)
			big=c;
			else
			big=a;
		}
		else if(c>a)
		{
			if(b>c)
			big=b;
			else
			big=c;
		}
		else big=b;
		printf("%d\n",big);
	}
}
