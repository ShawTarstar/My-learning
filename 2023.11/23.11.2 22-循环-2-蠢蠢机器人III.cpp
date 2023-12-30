#include<stdio.h>
int main()
{
	int m,i,u;
	char c;
	while(scanf("%d",&m)!=EOF)
	{
		double x=0;double y=0;
		int t=0;int del;
		char cmd[5]={0};
		for(i=0;i<m;i++)
		{
			scanf("%s",&cmd);
			if(cmd[0]=='T')
			{
				t++;
			}
			if(cmd[0]=='G')
			{
				double q;
				scanf("%lf",&q);
				switch(t%4)
				{case 0:y=y+q;break;
				case 1:x=x+q;break;
				case 2:y=y-q;break;
				case 3:x=x-q;break;}
			}
		}
		printf("%.3f %.3f\n",x,y);
	}
}
