#include<stdio.h>
#include<string.h>
#include<math.h>
char ch1[1005],ch2[1005];
int dp[1005][1005];
int process(int m,int n,int i,int j,int frj)
{
	if(i==m&&j==n) return 0;
	if(j==n) return process(m,n,i+1,frj,frj);
	if(ch1[i]!=ch2[j]){
		return process(m,n,i,j+1,frj);
	}
	if(ch1[i]==ch2[j]){
		return 1+process(m,n,i+1,j+1,j+1);
	}
	return 1;
	
}
int longpublic(int m,int n,int cur,int ans)
{
	if(m==1&&n==1)
	{
		if(ch1[0]==ch2[0])
		return 1;
		return 0;
	}
	if(m==1)
	{
		for(int j=0;j<n;j++)
		{
			if(ch1[0]==ch2[j])
				return 1;
		}
		return 0;
	}
	if(n==1)
	{
		for(int j=0;j<m;j++)
		{
			if(ch1[j]==ch2[0])
				return 1;
		}
		return 0;
	}
	if(cur==m)return ans;
	int temp=process(m,n,cur,0,0);
	if(temp>ans)
		ans=temp;
	return longpublic(m,n,cur+1,ans);
}

int main()
{
	while(scanf("%s %s",ch1,ch2)!=EOF)
	{
		int m=strlen(ch1);
		int n=strlen(ch2);
		int res=longpublic(m,n,0,0);
		printf("%d\n",res);
	}
}
