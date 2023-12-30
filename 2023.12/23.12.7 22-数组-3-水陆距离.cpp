#include<stdio.h>
#include<string.h>
char a[820][820];int b[820][820];
int main()
{
	int i,j,n,m,k,max;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		memset(a,0,sizeof(a));
		memset(b,-1,sizeof(b));
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf(" %c",&a[i][j]);
				if(a[i][j]=='0')
				b[i][j]=0;
				//printf("%c",a[i][j]);
			}
			//printf("\n");
		}
		if(n>=m)max=n;
		else max=m;
		for(k=0;k<max;k++)
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{	
				if(b[i][j]==-1)
				{
					
					{
						if(i-1>=0&&b[i-1][j]==k)
						{b[i][j]=k+1;continue;}
						if(j-1>=0&&b[i][j-1]==k)
						{b[i][j]=k+1;continue;}
						if(j+1<m&&b[i][j+1]==k)
						{b[i][j]=k+1;continue;}
						if(i+1<n&&b[i+1][j]==k)
						{b[i][j]=k+1;continue;}
					}
				}
				}
			}
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{printf("%d",b[i][j]);if(j!=m-1)printf(" ");}
			printf("\n");
		}
		
	}
}
