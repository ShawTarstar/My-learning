#include<stdio.h>
#include<math.h>
#include<string.h>
#define NUM 1000
int a[NUM];
int sushu(void)
{
	int i,j,count=0;int num=1;
	a[0]=2;
	for(i=3;num<NUM;i+=2)
	{
		count=0;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{count=1;break;}
		}
		if(count==0){a[num]=i;num++;}
	}
}
int main()
{
	int i,j,n;
	sushu();
	for(i=0;i<NUM;i++)printf("%d ",a[i]);
	printf("\n");
	while(scanf("%d",&n)!=EOF)
	{
		int row,col;
		if(n==1)
		{row=1;col=2;}
		else if(n==2)
		{row=4;col=2;}
		else if(n%2==1)
		{col=a[n-1]+1;row=a[n-2]+1;}
		else
		{col=a[n-2]+1;row=a[n-1]+1;}
		int b[250][250];
		memset(b,0,sizeof(b));
		int r;int c;
		if(n%4==1){r=row-1;c=col-1;}
		else if(n%4==2){r=0;c=col-1;}
		else if(n%4==3){r=0;c=0;}
		else if(n%4==0){r=row-1;c=0;}
		for(i=n;i>0;i--)
		{
			if(i%4==1)
			{
				for(j=0;j<a[i-1];j++)
				b[r][c-j]=1;
				c-=a[i-1];
				//printf("LEFT\n");
			}
			else if(i%4==2)
			{
				for(j=0;j<a[i-1];j++)
				b[r+j][c]=2;
				r+=a[i-1];
				//printf("DOWN:from b[%d][%d] to b[%d][%d]\n",r-a[i-1],c,r,c);
			}
			else if(i%4==3)
			{
				for(j=0;j<a[i-1];j++)
				b[r][c+j]=1;
				c+=a[i-1];
				//printf("RIGHT:from b[%d][%d] to b[%d][%d]\n",r,c-a[i-1],r,c);
			}
			else if(i%4==0)
			{
				for(j=0;j<a[i-1];j++)
				b[r-j][c]=2;
				r-=a[i-1];
				//printf("UP\n");
			}
		}
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			printf("%d",b[i][j]);
			printf("\n");
		}
		printf("\n");
	}
}
