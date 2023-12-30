#include<stdio.h>
char a[1000];
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,j,k;
		for(i=0;i<n;i++)
		{
			scanf(" %c",&a[i]);
		}
		for(i=0;i<n;i++)//第i个样例 
		{
			for(j=0;j<=i;j++)//第j层 
			{
				for(k=0;k<=i;k++)
				printf(" ");
				printf("%c\n",a[j]);
				for(k=j;k<i;k++)
				printf(" ");
				for(k=0;k<1+2*(j+1);k++)
				printf("%c",a[j]);
				printf("\n");
			}
		}
	}
}
