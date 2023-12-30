#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int a[500][500],b[500][500];
int go(int n,int m,int row,int col)
{
	if(col==0&&row==0)return a[0][0];
	if(col==0)return go(n,m,row-1,0)+a[row][0];
	if(row==0)return go(n,m,0,col-1)+a[0][col];
	int lf=go(n,m,row,col-1)+a[row][col];
	int up=go(n,m,row-1,col)+a[row][col];
	return fmax(lf,up);
}
int main()
{
	int n,m,i,j; 
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		b[0][0]=a[0][0];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{b[i][j]=go(n,m,i,j);printf("%d ",b[i][j]);if(j==m-1)printf("\n");}
		}
	
		memset(a,0,sizeof(a));
	}
}
