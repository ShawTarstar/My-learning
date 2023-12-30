#include<stdio.h>
int main()
{
	int n,i,t;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=n;i>0;i--)
		{
			for(t=i;t>0;t--)
			{
			printf(" ");
			}
			printf("*\n");
		}
		for(i=n;i>=0;i--)
		printf("*");
		printf("\n");
		for(i=n;i>0;i--)
		{
			for(t=i-1;t>0;t--)
			{
			printf(" ");
			}
			printf("*\n");
		}
		printf("\n");
	}
}
