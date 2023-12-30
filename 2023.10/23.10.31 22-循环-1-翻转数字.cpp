#include<stdio.h>
int a,b,i,n,c,d;
void re (void){
	c=a;
	while(c/10!=0){
		n++;
		c=c/10;
	}
	if(a%10==0)
	d=0;
	else d=1;
	for(i=0;i<=n;i++)
		{
			b=a%10;
			if(d==0)
			{if(b!=0)
			d=1;}
			if(d==1){
			printf("%d",b);}
			a=a/10;
		}printf("\n");
		n=0;}
int main(){
while(scanf("%d",&a)!=EOF){
	if(a>=0)
		re();
	else{
		a=-a;
		printf("-");
		re();
	}
}}
