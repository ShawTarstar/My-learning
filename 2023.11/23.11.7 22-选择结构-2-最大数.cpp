#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		if(a>=b&&a>=c)
		printf("%d\n",a);
		else if(b>=a&&b>=c)
		printf("%d\n",b);
		else if(c>=a&&c>=b)
		printf("%d\n",c);
	}
}
