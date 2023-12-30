#include<stdio.h>
int main()
{
	int i;long int t;long int u;
	while(scanf("%ld%ld",&t,&u)!=EOF)
	{
		int jw=0;
		int sum=t+u;int sum2=sum;int count=0;
		int mmlen=1;
		while(sum2/10)
		{mmlen++;sum2/=10;}
		for(i=0;i<mmlen;i++)
		{
			if((t%10+u%10>sum%10&&jw==0)||(t%10+u%10>sum%10+1&&jw==1))
			{t/=10;u/=10;jw=1;sum/=10;count++;}
			else
			{
				t/=10;u/=10;sum/=10;jw=0;
			}	
		}
		printf("%d\n",count);
	}
}
