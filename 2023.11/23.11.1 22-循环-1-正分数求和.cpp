#include<stdio.h>
int gcdsearch(int m,int n,int gcd);
int main()
{
	int a,b,c,d,m,n,gcd,temp;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
	{
		n=b*d;m=a*d+b*c;
		gcd=gcdsearch(m,n,1);
		printf("%d %d\n",m/gcd,n/gcd);
	}
}
int gcdsearch(int m,int n,int gcd)
{
	int temp;
	for(;;)
		{
			if(n==0)
			{
				gcd=m;break;
			}
			temp=m%n;m=n;n=temp;
		}
		return gcd;
}
