#include<stdio.h>
#include <stdlib.h>
int a,b,k,rt;
char s;
char arr[3];
int judge(char s,char arr[3],int rt)
{
	if(s=='+')
		{
			if(k==a+b)
			rt++;
		}
		else if(s=='-')
		{
			if(k==a-b)
			rt++;
		}
	return rt;
}
int main()
{
	rt=0; 
	while(scanf("%d%c%d=%s",&a,&s,&b,&arr)!=EOF)
	{
		if(arr[0]=='?')
		;
		else
		{
			k=atoi(arr);
			rt=judge(s,arr,rt);
		}
		
	}
	printf("%d",rt);
}
