#include<stdio.h>
void printspace(int x);
int main()
{
	int n,abc,t,i,p;
	while(scanf("%d",&n)!=EOF)
	{
		p=n;
		for(t=1;t<=n;t++)
		{
		printspace(p);
		for(i=t;i>0;i--)
		{
			abc=96+i;
			printf("%c",abc);
		}
		for(i=1;i<t;i++)
		{
			abc=97+i;
			printf("%c",abc);
		}
		printf("\n");
		p--;
		}
	}	
}
void printspace(int x)
{
	int i;
	for(i=0;i<x-1;i++)
	printf(" ");
}
