#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n<4)
		printf("NO\n");
		else if(n%2==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
