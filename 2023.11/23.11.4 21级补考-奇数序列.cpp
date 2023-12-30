#include<stdio.h>
int main()
{
	long long int n,sum,i,y;
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;
		for(i=0;i<n;i++)
		{scanf("%d",&y);
			sum+=y;}
		if(sum==0)
		printf("NO\n");
		if(n%2!=0&&sum%2!=0)
			printf("YES\n");
			else printf("NO\n");
		sum=0;
	}
	return 0;
}
