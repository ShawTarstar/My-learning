#include<stdio.h>
int main(){
	int p,i,a,b,m,t;
	while(scanf("%d",&p)!=EOF)
	{
		m=2147483647;
		for(i=0;i<3;i++)
		{
			scanf("%d %d",&a,&b);
			if(p%a!=0)
				t=p/a+1;
			else
				t=p/a;
			if(b*t<m)
			m=b*t;
		}
		printf("%d",m);
	}
}
