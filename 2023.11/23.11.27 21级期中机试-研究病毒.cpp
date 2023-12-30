#include<stdio.h>
#include<string.h>
int main()
{
	char len[1000];int n,i;
	while(scanf("%s",len)!=EOF)
	{
		n=strlen(len);
		for(i=0;i<n;i++)
		{
			if(len[i]=='T')
			len[i]='U';
		}
		printf("%s\n",len);
	}
}
