#include<stdio.h>
int main(){
	int n,i,a;
	int sum=0;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a%2==0)
			sum+=a;
		}
		printf("%d",sum);
	}
}
