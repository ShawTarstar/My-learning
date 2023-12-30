#include<stdio.h>
long long int a[35][35];
int main()
{
	int n,j,i;
	while(scanf("%d",&n)!=EOF)
	{
		a[n][n]=0;
		for(i=0;i<=n;i++){
			for(j=0;j<=n-i-1;j++){
				a[i][j]=0;
			}
			a[i][n]=1;
			for(j=n-1;j>n-i-1;j--){
				a[i][j]=a[i-1][j]+a[i][j+1];
			}
		}
		printf("%lld\n",a[n][0]);
	}
}
