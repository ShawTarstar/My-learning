#include<stdio.h>
int main()
{
	int a,b,t1,t2,t3,t4,t5;
	printf("Enter a number between 0 and 32767:");
	scanf("%d",&a);
	t5=a%8;a/=8;
	t4=a%8;a/=8;
	t3=a%8;a/=8;
	t2=a%8;a/=8;
	t1=a%8;a/=8;
	printf("In octal, your number is: %d%d%d%d%d",t1,t2,t3,t4,t5);
}
