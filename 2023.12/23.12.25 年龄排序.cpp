#include<stdio.h>
#include<string.h>
int a[101];
int main()
{
	int n,i,j,cur;
	while(scanf("%d",&n)!=EOF)
	{
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++){
			scanf("%d",&cur);
			a[cur]++;
		}
		for(i=1;i<=100;i++){
			if(a[i]==0) continue;
			else{
				 for(j=0;j<a[i];j++){
				 	printf("%d ",i);
				 }
			}
		}
		printf("\n");
	}
}
