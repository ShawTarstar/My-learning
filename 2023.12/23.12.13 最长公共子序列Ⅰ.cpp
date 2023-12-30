#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
char ch1[1005],ch2[1005];
int dp[1005][1005];
int main()
{
	while(scanf("%s %s",ch1,ch2)!=EOF)
	{
		memset(dp,0,sizeof(dp));
		int m=strlen(ch1);int n=strlen(ch2);
		int i,j;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(ch1[i]==ch2[j])
				dp[i+1][j+1]=1+dp[i][j];
				else
				{
					dp[i+1][j+1]=fmax(dp[i][j+1],dp[i+1][j]);
				}
			}
		}
		printf("%d\n",dp[m][n]);
	}
}
