#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF)
	{
		int money=0;int baozi=0;int eat=0;
		money=a*100+b*10+c;baozi=d*100+e*10+f;
		eat=money/baozi;
		printf("%d\n",eat);
	}
}
