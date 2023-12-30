#include<stdio.h>
#include<string.h>
char str[10005];
int main()
{
	while(scanf("%s",str)!=EOF)
	{
		int len=strlen(str);int i,flag=1;
		//printf("len=%d,str=%s\n",len,str);
		for(i=0;i<len/2;i++){
			if(str[i]!=str[len-i-1]){
				flag=0;break;
			}
		}
		if(flag==1) printf("Yes!\n");
		else printf("No!\n");
		memset(str,0,sizeof(str));
	}
}
