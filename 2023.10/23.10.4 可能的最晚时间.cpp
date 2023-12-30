#include<stdio.h>
int main()
{
	char x,y,a,b,c,d,e,f;
	while(scanf(" %c%c:%c%c",&x,&y,&a,&b)!=EOF){
		if(x=='?')
		{if(y=='0'||y=='1'||y=='2'||y=='3'||y=='?')
		{printf("2");x='2';}
		else
		{printf("1");x='1';}}
		else printf("%c",x);
		if(y=='?'){
			if(x=='2')
			{printf("3");y='3';}
			else if(x=='1')
			{printf("9");y='9';}
			else if(x=='0')
			{printf("9");y='9';}
		}
		else printf("%c",y);
		printf(":");
		if(a=='?')
		{printf("5");a='5';}
		else printf("%c",a);
		if(b=='?')
		{printf("9\n");b='9';}
		else printf("%c\n",b);
		char a,b,x,y= '\0';
	}
	return 0;
	}
