#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,y;
	while(scanf("%d %d %d",&n,&x,&y)!=EOF)
	{
		int x1,y1,xmin,ymin;
		int i=0;int minnum;double mindis=20000000000000000000.0f;
		for(i=0;i<n;i++){
			scanf("%d %d",&x1,&y1);
			double dis=abs((x1-x)*(x1-x))+abs((y1-y)*(y1-y));
			if(dis<mindis)
			{minnum=i+1;mindis=dis;xmin=x1;ymin=y1;}
			}
		printf("%d %d %d %.2f\n",minnum,xmin,ymin,sqrt(mindis));
	}
}
