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
		for(i=0;i<n;i++)//��i������ 
		{
			for(j=0;j<=i;j++)//��j�� 
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
