#include<stdio.h>
int main()
{
	int x;
	while(scanf("%d",&x)!=EOF)
	{
		int y=0;
		if(x<1)
		y=x*x;
		else if(x>=1&&x<10)
		y=2*x-1;
		else if(x>=10)
		y=3*x-12;
		printf("%d\n",y);
	}
}
