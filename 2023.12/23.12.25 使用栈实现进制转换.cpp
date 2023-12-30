#include<stdio.h>
#include<string.h>
#define STACK_SIZE 10000
int contents[STACK_SIZE];
int arr[STACK_SIZE];
char str[STACK_SIZE];

int main()
{
	int i,j,topmax,temp;
	while(scanf("%s",str)!=EOF)
	{
		int top=0;int num=0;
		memset(arr,0,sizeof(arr));
		int len=strlen(str);j=0;
		for(i=0;i<len;i++){
			contents[i]=str[i]-'0';
		}
		topmax=i-1;temp=0;
		while(contents[0]){
			top=0;temp=0;
			if(contents[topmax]%2==0) arr[num++]=0;
			else arr[num++]=1;
			//printf("arr[%d]=%d\n",num-1,arr[num-1]);
			for(i=0;i<=topmax;i++){
				if(contents[i]==1&&temp<2){
					if(i==topmax){
					contents[top++]=0;
					//printf("%d",contents[top-1]);
					break;
					}
					temp+=10;
					if(i!=0){
					contents[top++]=0;
					//printf("%d",contents[top-1]);
					}
					continue;
				}
				else{
					temp+=contents[i];
					//printf("top=%d\n",top);
					contents[top++]=temp/2;
					//printf("%d",contents[top-1]);
					temp=(temp%2)*10;
				}
			}
			topmax=top-1;//printf("\ntopmax=%d\n",topmax);
		}
		for(i=num-1;i>=0;i--){
			printf("%d",arr[i]);
		}
		printf("\n");
		memset(str,0,sizeof(str));
	}
}
