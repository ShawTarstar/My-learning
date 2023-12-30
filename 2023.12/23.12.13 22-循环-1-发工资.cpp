#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,wage,sum=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&wage);
			int m100=wage/100;
			int m50=(wage-100*m100)/50;
			int m10=(wage-100*m100-50*m50)/10;
			int m5=(wage-100*m100-50*m50-10*m10)/5;
			int m2=(wage-100*m100-50*m50-10*m10-5*m5)/2;
			int m1=wage-100*m100-50*m50-10*m10-5*m5-2*m2;
			sum+=m100+m50+m10+m5+m2+m1;
		}
		printf("%d\n",sum);
	}
}
