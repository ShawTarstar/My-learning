#include<stdio.h>
#include<string.h>
int main()
{
	char arr[214748]={0};int i;
	while(scanf("%s",&arr)!=EOF)
	{
		int c=0;int s=0;int u=0;int min=0;
		int len=strlen(arr);
		for(i=0;i<len;i++)
		{
			if(arr[i]=='C')
			c++;
			if(arr[i]=='S')
			s++;
			if(arr[i]=='U')
			u++;
		}
		if(c<=s&&c<=u)
		min=c;
		else if(s<=c&&s<=u)
		min=s;
		else if(u<=s&&u<=c)
		min=u;
		printf("%d\n",min);
	}
}
