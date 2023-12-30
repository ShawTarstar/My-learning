#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i;int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		if(a[0]%2!=0&&a[n-1]%2!=0&&n%2!=0)
		printf("Yes\n");
		else printf("No\n");
	}
}
