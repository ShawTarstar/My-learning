#include<stdio.h>
int main()
{
	int a,b;char c[3];
	while(scanf("%d:%d%s",&a,&b,&c)!=EOF)
	{
		//printf("%c",c[0]);
		if(a==12&&(c[0]=='a'||c[0]=='A'))
		{
			printf("00:");
			if(b<10)
			printf("0%d\n",b);
			else printf("%d\n",b);
		}
		else if(a==12&&(c[0]=='p'||c[0]=='P'))
		{
			printf("12:");
			if(b<10)
			printf("0%d\n",b);
			else printf("%d\n",b);
		}
		else if(c[0]=='a'||c[0]=='A')
		{
			if(a<10)
			printf("0%d:",a);
			else printf("%d:",a);
			if(b<10)
			printf("0%d\n",b);
			else printf("%d\n",b);
		}
		else if(c[0]=='p'||c[0]=='P')
		{
			a+=12;
			if(a<10)
			printf("0%d:",a);
			else printf("%d:",a);
			if(b<10)
			printf("0%d\n",b);
			else printf("%d\n",b);
		}
	}
} 
