#include<stdio.h>
#include<math.h>
int deresult(int x,int y);
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		char str[n];
		scanf("%s",str);
		int pos=0;int finalpos=0;int i;
		for(i=0;i<n;i++)
		{
			if(str[i]=='L')
			pos--;
			if(str[i]=='R')
			pos++;
		}
		finalpos=deresult(pos,4);
		if(finalpos==0)
		printf("N\n");
		if(finalpos==1)
		printf("E\n");
		if(finalpos==2)
		printf("S\n");
		if(finalpos==3)
		printf("W\n");
	}
}
int deresult(int x,int y)
{
	if(x>=0)
	return x%y;
	if(x<0)
	{
		if(abs(x)<y)
		return y-abs(x);
		else if(abs(x)%y!=0)
		return y-(abs(x)%y);
		else return 0;
	}
}
