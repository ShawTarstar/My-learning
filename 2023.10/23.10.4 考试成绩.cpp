#include<stdio.h>
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF){
	if(a>=91)
	printf("A\n"); 
	else if(a>=81&&a<=90)
	printf("B\n");
	else if(a>=71&&a<=80)
	printf("C\n");
	else if(a>=60&&a<=70)
	printf("D\n");
	else
	printf("F\n");}
 } 
