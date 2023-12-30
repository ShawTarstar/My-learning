#include<stdio.h>
int main() 
{
	int a,i;
	while(scanf("%d",&a)!=EOF)
	{
		char b=65;
		int q=0;
		for(i=0;i<a;i++)
		{
			for(q=0;q<=i;q++)
			{
				printf("%c",b);
			}
			b=b+1;
			printf("\n");
		}
	}
}
