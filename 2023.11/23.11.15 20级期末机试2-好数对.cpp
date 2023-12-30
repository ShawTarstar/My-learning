#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,j,t;
		t=0; 
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i!=j)
				{
					if((i*j)%(i+j)==0)
					t++;
				}
			}
		}
		t/=2;
		printf("%d\n",t);
	}
	return 0; 
}
