#include<stdio.h>
#include<math.h>
#define MAXNUM 4999964
int a[5000005],b[5000005],c[1000000],d[33000][2],e[1000];
int i,j,dob=0,count=1,frs;
int prime(int p)
{
	int i;
	if(p==2||p==3)
	return 1;
	if(p%6!=1&&p%6!=5)
	return 0;
	for(i=5;i<=sqrt(p);i+=6)
	{
		if(p%i==0||p%(i+2)==0)
		return 0;
	}
	return 1;
}
void sushu(void)
{
	d[0][0]=3;d[0][1]=5;
	for(i=6;i<MAXNUM;i+=6)
	{
		if(prime(i-1)&&prime(i+1))
		{
			d[count][0]=i-1;
			d[count][1]=i+1;
			count++;
		}
	}
}
int main()
{
	int n;
	sushu();
	//printf("count=%d\n",count);
	//for(i=0;i<count;i++)
	//printf("%d %d,",d[i][0],d[i][1]);
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&a[i],&b[i]);
		}
		for(i=0;i<n;i++)
		{
			frs=0;
			for(j=0;j<count;j++)
			{
				if(d[j][0]>=a[i])
				{frs=j;break;}
			}
			for(j=frs;j<count;j++)
			{
				if(d[j][1]>b[i])
				{e[i]=j-frs;break;}
				e[i]=j-frs+1;
			}
		}
		for(i=0;i<n;i++)
		printf("%d\n",e[i]);
	}
}  
