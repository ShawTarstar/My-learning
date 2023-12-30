#include<stdio.h>
int main()
{
	int n,i;
	char str[101];
	while(scanf("%s",str)!=EOF&&str[0]!='0')
	{
		n=0;
		for(i=0;str[i]!='\0';i++)
		{
			n=n*10+str[i]-48;
			n=n%17;
		}
		if(n==0)
		printf("1\n");
		else printf("0\n");
	}	
} 
