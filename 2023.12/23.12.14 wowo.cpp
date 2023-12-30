#include<stdio.h>
int main()
{
	double h,u,d,f,cur,tire;int day;
	while(scanf("%lf%lf%lf%lf",&h,&u,&d,&f),h||u||d||f)
	{
		day=0;cur=h;tire=u*f/100;
		while(1)
		{
			day++;
			cur=cur-u;
			if(cur<0)
			{
				printf("success on day %d\n",day);
				break;
			}
			cur=cur+d;
			if(cur>h)
			{
				printf("failure on day %d\n",day);
				break;
			}
			u=u-tire;
			if(u<0)
			u=0;
		}
	}
 } 
