#include<stdio.h>
#include<math.h> 
int gcd(int a,int b)
{
	if(b==0)return a;
	return gcd(b,a%b);
}
int main()
{
	int l1,l2,pos,min;
	while(scanf("%d%d%d",&l1,&l2,&pos)!=EOF)
	{
		if(l1==0&&l2==0){
			if(pos!=0)
			printf("No\n");
			else printf("Yes\n");
			continue;
		}
		min=gcd(l1,l2);
		if(pos%min==0)
		printf("Yes\n");
		else printf("No\n");
	}
}
