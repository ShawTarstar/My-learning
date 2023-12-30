#include<stdio.h>
int main()
{
	int n,i,k;
	k=0;
	while(scanf("%d",&n)!=EOF)
	{
		int a[n];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
			k++;
		}
		if(n==1&&k==1)
		printf("YES");
		else
		printf("NO");
	}
}
