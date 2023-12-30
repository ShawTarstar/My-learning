#include<stdio.h>
int f(int x,int n)
{
	if(n==0)return 1;
	if(n%2==0) return f(x,n/2)*f(x,n/2);
	if(n%2==1) return f(x,n-1)*x;
}
int main()
{
	int x,n,res;
	scanf("%d",&x);scanf("%d",&n);
	res=f(x,n);
	printf("%d",res);
} 
