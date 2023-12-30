#include <stdio.h>
int main()
{
	int a,b,p,q,u,i,n;
while(scanf("%d %d",&a,&b)!=EOF){
n=b-a+1;u=0;
	for(i=0;i<n;i++){
		p=a+i;
		while(p>0){
			q=p%10;
			if(q==7)
			u++;
			p=p/10;}
	}

		printf("%d\n",u);} 
		return 0;
	}
