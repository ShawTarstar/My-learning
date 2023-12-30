#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
long long int a[505][505],b[505][505];
int main()
{
	int n,m,i,j;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%lld",&a[i][j]);
			}
		}
		b[0][0]=a[0][0];
		for(i=1;i<fmax(n,m);i++)
		{
			b[0][i]=a[0][i]+b[0][i-1];
			b[i][0]=a[i][0]+b[i-1][0];
		}
		for(i=1;i<n;i++)
		{
			for(j=1;j<m;j++)
			{
				b[i][j]=a[i][j]+fmax(b[i-1][j],b[i][j-1]);
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%lld",b[i][j]);
				if(j!=m-1)printf(" ");
			}
			printf("\n");
		}
		memset(a,0,sizeof(a));memset(b,0,sizeof(b));
	}
}
