#include<stdio.h>
int main()
{
	int y,m,run;
	while(scanf("%d/%d",&y,&m)!=EOF)
	{
		run=0;if(y<=0)
		printf("-1\n");
		if(y%4==0&&y%100!=0)
		run=1;
		else if(y%400==0)
		run=1;
		if(run==0)
		{
			switch(m){
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:printf("31\n");break;
			case 4:case 6:case 9:case 11:printf("30\n");break;
			case 2:printf("28\n");break;
			default:printf("-1\n");break;}
		}
		if(run==1)
		{
			switch(m){
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:printf("31\n");break;
			case 4:case 6:case 9:case 11:printf("30\n");break;
			case 2:printf("29\n");break;
			default:printf("-1\n");break;}
		}
	}
}
