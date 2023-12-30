#include<stdio.h>
int main()
{
	int n;int m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		int a[11][11]={0};int r=1;int i,j;char ch;
		int x=0;int y=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i][j]=r;r++;
			}
		}
		for(i=0;i<m;i++)
		{
			int temp[11]={0};
			scanf(" %c%d%d",&ch,&x,&y);
			if(ch=='R')
			{
				for(j=0;j<n;j++)
				{
					if(j+y<n)
					temp[j+y]=a[x-1][j];
					else temp[j+y-n]=a[x-1][j];
				}
				for(j=0;j<n;j++)
				{
					a[x-1][j]=temp[j];
				}
			}
			else if(ch=='D')
			{
				for(j=0;j<n;j++)
				{
					if(j+y<n)
					temp[j+y]=a[j][x-1];
					else temp[j+y-n]=a[j][x-1];
				}
				for(j=0;j<n;j++)
				{
					a[j][x-1]=temp[j];
				}
			}
			else if(ch=='U')
			{
				for(j=0;j<n;j++)
				{
					if(j-y<0)
					temp[n+j-y]=a[j][x-1];
					else temp[j-y]=a[j][x-1];
				}
				for(j=0;j<n;j++)
				{
					a[j][x-1]=temp[j];
				}
			}
			else if(ch=='L')
			{
				for(j=0;j<n;j++)
				{
					if(j-y<0)
					temp[n+j-y]=a[x-1][j];
					else temp[j-y]=a[x-1][j];
				}
				for(j=0;j<n;j++)
				{
					a[x-1][j]=temp[j];
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{if(j==n-1&&i==n-1)printf("%d\n",a[i][j]);
			else printf("%d ",a[i][j]);}
		}
	}
	return 0;
}
