#include<stdio.h>
#include<math.h>
int deresult(int x,int y);
char trans(int t);
int main()
{
	int n,a,result,w,initial;
	int arr[100000];
	while(scanf("%d %d",&n,&a)!=EOF)
	{
		printf("%d=",n);
		int i=0;
		initial=result=n;
		while(initial!=0)
		{
			result=deresult(initial,a);
			w=initial-a*result;
			initial=result;
			if(w==abs(a))w=0;
			arr[i]=w;
			i++;
		}
		//printf("%d\n",i);
		for(;i>0;i--)
		{
			if(arr[i-1]>=10)
			printf("%c",trans(arr[i-1]));
			else
			printf("%d",arr[i-1]);
		}
		printf("(base%d)\n",a);
	}
}
int deresult(int x,int y)
{
	if(x>0)
	{
		return (abs(x)/abs(y))*(-1);
	}
	if(x<0)
	{
		if(abs(x)%abs(y)==0)
		return abs(x)/abs(y);
		else
		return abs(x)/abs(y)+1;
	}
	
}
char trans(int t)
{
	switch(t)
	{case 10:return 'A';
	case 11:return 'B';
	case 12:return 'C';
	case 13:return 'D';
	case 14:return 'E';
	case 15:return 'F';
	case 16:return 'G';
	case 17:return 'H';
	case 18:return 'I';
	case 19:return 'J';}
}
