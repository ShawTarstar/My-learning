#include<stdio.h>
#include<string.h> 
#include<math.h>
char str[65];int dp[65][65];
int main() 
{
	int i,j;
	while(scanf("%s",str)!=EOF)
	{
		memset(dp,-1,sizeof(dp));
		int len=strlen(str);
		int max=1;
		for(i=0;i<len;i++){
			for(j=0;j<len;j++){
				if(i>j) dp[i][j]=0;
				else if(i==j) dp[i][j]=1;
				else if(str[i]==str[j]&&j-i==1){
					dp[i][j]=1;max=2;
				}
				else if(j-i==1) dp[i][j]=0;
			}
		}
		for(i=len;i>=0;i--){
			for(j=0;j<len;j++){
				if(dp[i][j]==-1&&i+1<len&&j-1>=0&&dp[i+1][j-1]==1&&str[i]==str[j]){
					dp[i][j]=1;if(j-i+1>max) max=j-i+1;
				}
				else if(dp[i][j]==-1) dp[i][j]=0;
			}
		}
		printf("%d\n",max);
	}
} 
