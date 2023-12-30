#include<stdio.h>
int main()
{
	int num,i,j,s,w;
	printf("Enter number of days in month:");
	scanf("%d",&num);
	printf("Enter starting day of the week (1=Sun, 7=Sat):");
	scanf("%d",&s);
	for(j=1;j<s;j++)
	printf("   ");
	w=s;
	for(i=1;i<=num;i++)
	{
		printf("%2d ",i);w++;
		if(w>7)
		{printf("\n");w=1;}
	}
}
