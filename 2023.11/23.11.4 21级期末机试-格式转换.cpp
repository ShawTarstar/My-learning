#include<stdio.h>
void supplement(int n);
int main()
{
	int h,p,m,d,y,pm;
	while(scanf("%d:%d,%d/%d/%d",&h,&p,&m,&d,&y)!=EOF)
	{
		pm=0;
		printf("%d",y);
		supplement(m);
		supplement(d);
		printf(",");
		if(h>=12)
		{
			h-=12;
			supplement(h);
			pm=1;
		}
		else supplement(h);
		printf(":");
		supplement(p);
		if(pm==1) printf("PM");
		else printf("AM");
		printf("\n");
	}
}
void supplement(int n)
{
	if(n<10) printf("0%d",n);
	else printf("%d",n);
}
