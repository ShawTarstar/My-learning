#include<stdio.h>
int n1,n2;
int gcd(int m,int n)
{
	if(n==0) return m;
	return gcd(n,m%n);
}
void reduce(int numerator,int denominator,int *reduced_numberator,int *reduced_denominator)
{
	int num=gcd(numerator,denominator);
	*reduced_numberator=numerator/num;
	*reduced_denominator=denominator/num;
	return;
}
int main()
{
	printf("Enter a fraction: ");
	scanf("%d/%d",&n1,&n2);
	int *r1,*r2;r1=&n1;r2=&n2;
	reduce(n1,n2,r1,r2);
	printf("In lowest terms: %d/%d",n1,n2);
} 
