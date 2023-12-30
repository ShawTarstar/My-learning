#include<stdio.h>
int main()
{
	int x,a,b,c,i,n;
	while(scanf("%d",&x)!=EOF)
	{
		i=0;
		a=x/38;
		b=(x-a*38)/18;
		c=(x-a*38-b*18)/8;
		if(a*38+b*18+c*8>68)
		i=1;
		n=a+b+c+i;
		printf("%d\n",n);
	}
}
