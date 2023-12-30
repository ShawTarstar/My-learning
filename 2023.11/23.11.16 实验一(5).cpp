#include<stdio.h>
int main()
{
	int n,sum;
	scanf("%d",&n);
	sum=n%10+(n/10)%10+n/100;
	printf("%d",sum);
}
