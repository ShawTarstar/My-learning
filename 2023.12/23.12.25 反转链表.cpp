#include<stdio.h>
int arr[10000]={0};
int main()
{
	char ch;int cur,i=0,j;
	while(scanf("%d",&arr[i++])!=EOF){
		if(scanf("%c",&ch)==EOF||ch=='\n'){
			for(j=i-1;j>=0;j--){
				printf("%d ",arr[j]);
			}
			i=0;printf("\n");
		}
	}
	return 0;
}
