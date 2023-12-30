#include<stdio.h>
int main()
{
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		int sum=0;int t=0;
		for(i=1;i<=n;i++)
		{
			t=i;
			while(t%5==0)
			{
				t/=5;
				sum++;
			}
		}
		printf("%d\n",sum);
	}
}
