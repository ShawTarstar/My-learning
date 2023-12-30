#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	while(scanf("%d",&x)!=EOF)
	{
		int t1=1,t2=2;int t,i,j,k,n=2,ly=0,count=0;
		if(x==1)n=1;
		else if(x==2)n=2;
		else while(x>t2)
		{
			t=t1;t1=t2;t2+=t;
			n++;
		}
		//printf("n=%d\n",n);
		if(((int)sqrt(n))*((int)sqrt(n))==n)ly=sqrt(n);
		else ly=sqrt(n)+1;
		for(i=0;i<ly-1;i++)
		{
			for(j=0;j<2*(ly-i);j++)
			printf(" ");
			printf("*");
			for(j=0;j<i;j++)
			printf("---*");
			printf("\n");
			for(j=0;j<2*(ly-i)-1;j++)
			printf(" ");
			printf("/ \\");
			for(j=0;j<i;j++)
			printf(" / \\");
			printf("\n");
		}
		if(n!=1)
		{printf("  *");for(i=0;i<ly-1;i++)printf("---*");printf("\n");}
		else
		{printf("  *\n");printf(" / \\");printf("\n");printf("*---*");}
		ly--;
		if((n-ly*ly)%2==1&&n!=1)
		{
			count=(n-ly*ly+1)/2;
			for(i=0;i<count;i++)
			printf(" / \\");
			printf("\n*");
			for(i=0;i<count;i++)
			printf("---*");
		}
		else if((n-ly*ly)%2==0&&(n-ly*ly)!=0)
		{
			count=(n-ly*ly)/2;
			printf(" /");
			for(i=0;i<count;i++)
			printf(" \\ /");
			printf("\n*");
			for(i=0;i<count;i++)
			printf("---*");
		}
		printf("\n");
	}
} 
