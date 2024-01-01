#include<stdio.h>
int main(void)
{
	int y;
	while(1)
	{scanf("%d",&y);
	if(y%4==0&&y%100!=0||y%400==0)
	printf("YES");
	else
	printf("NO"); }
	return 0; 
}
