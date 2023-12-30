#include<stdio.h>
int main()
{
	int i,j,n;double e=1.0f,t=1.0f;
	printf("n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		t*=j;
		e+=(1/t);
		t=1.0f;
	}
	printf("e=%lf",e);
}
