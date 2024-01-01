#include<stdio.h>
char str[1000];char cur[1000];
int main()
{
	int m,n,i;char *p;
	printf("m=");scanf("%d",&m);
	printf("n=");scanf("%d",&n);
	scanf("%s",str);
	p=&str[m-1];
	for(i=0;i<n;i++){
		cur[i]=*p;
		p++;
	}
	printf("%s",cur);
}
