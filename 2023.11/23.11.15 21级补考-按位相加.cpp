#include<stdio.h>
int main()
{
	int p,q,i,r,zero=1;
	int c[9];
	while(scanf("%d %d",&p,&q)!=EOF)
	{
		int t=0;
		for(;;)
		{
			if(p==0&&q==0)
			break;
			c[t]=(p%10+q%10)%10;
			p/=10;q/=10;
			t++;
		}
		t-=1;
		//for(;t>=0;t--)
		//printf("c[%d]=%d\n",t,c[t]);
		while(c[t]==0)
		{
			t--;
		}
		for(;t>=0;t--)
		{printf("%d",c[t]);zero=0;}
		if(zero==1)printf("0");
		printf("\n");
	}
}
