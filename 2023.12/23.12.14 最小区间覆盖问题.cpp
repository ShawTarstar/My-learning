#include<stdio.h>
int main()
{
	int n,l,L,R,r,i,cover;
	while(scanf("%d%d%d",&n,&L,&R)!=EOF)
	{
		cover=-1;
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&l,&r);
			if(l<=L&&r>=R)
			cover=1;
		}
		printf("%d\n",cover);
	}
} 
