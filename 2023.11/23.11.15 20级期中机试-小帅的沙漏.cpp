#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int a[n],i,j,k;
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			for(j=0;j<a[i]-1;j++)
			printf("-");
			printf("\n");
			printf("\\"); 
			for(j=0;j<a[i]-3;j++)
			printf(" ");
			printf("/");
			printf("\n");
			for(j=1;j<=a[i]/2-2;j++)
			{
				for(k=1;k<=j;k++)
				printf(" ");
				printf("\\");
				for(k=(a[i]/2-2-j)*2;k>=0;k--)
				printf("*");
				printf("/");
				printf("\n");
			}
			for(j=0;j<=a[i]/2-2;j++)
			{
				for(k=a[i]/2-2-j;k>0;k--)
				printf(" ");
				printf("/");
				for(k=0;k<j;k++)
				printf(" ");
				printf("*");
				for(k=0;k<j;k++)
				printf(" ");
				printf("\\");
				printf("\n");
			}
			for(j=0;j<a[i]-1;j++)
			printf("-");
			printf("\n");
			if(i!=n-1)
			printf("\n");
		}
	}
} 
