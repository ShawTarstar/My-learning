#include<stdio.h>
int main()
{
	int day;double h,d,f,u,cur,rate,tire;
	while(scanf("%lf%lf%lf%lf",&h,&u,&d,&f),h||u||d||f)
	{
		cur=0.0f;day=1;rate=f/100.0f;tire=u*rate;
		while(1)
		{
			//day
			if(u<0)u=0;
			cur+=u;u-=tire;
			if(cur>h){
				printf("success on day %d\n",day);
				break;
			}
			//night
			cur-=d;
			if(cur<0){
				printf("failure on day %d\n",day);
				break;
			}
			day++;
		}
	}
}
