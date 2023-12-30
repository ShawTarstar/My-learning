#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int l,r,i,j;
	while(scanf("%d%d",&l,&r)!=EOF)
	{
		char str[5];int len;int count=0;
		for(i=l;i<=r;i++)
		{
			int flag=0;
			if(flag==1||i==1)
			continue;
			sprintf(str,"%d",i);
			len=strlen(str);
			for(j=0;j<len/2;j++)
			{
				if(str[j]!=str[len-j-1])
				{flag=1;break;}
			}
			if(flag==1)
			continue;
			for(j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
				{flag=1;break;}
			}
			if(flag==1)
			continue;
			count++;
		}
		printf("%d\n",count);
	}
}
