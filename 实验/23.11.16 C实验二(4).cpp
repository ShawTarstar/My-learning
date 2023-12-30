#include<stdio.h>
int main()
{
	int i,j;
	for(i=2;i<=5000;i++)
	{
		int sum=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0&&i!=j)
			{
				sum+=j;
			}
		}
		if(sum==i)
		printf("%d ",sum);
	}
}
