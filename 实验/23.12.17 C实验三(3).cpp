#include<stdio.h>
//you can't swallow a cage can't you?
char str[1000];
int main()
{
	int i,temp,j;
	printf("Enter a sentence: ");
	for(i=0;;i++){
		scanf("%c",&str[i]);
		if(str[i]=='?'||str[i]=='.'||str[i]=='!')
		break;
	}
	printf("Reversal of sentence:");
	int len=i+1;
	for(i=len-2;i>=0;i--){
		temp=i;
		for(;;){
			--i;
			if(str[i]==' '||i==0){
				if(i==0)printf(" ");
				for(j=i;j<=temp;j++){
					printf("%c",str[j]);
				}
				break;
			}
		}
	}
	printf("%c",str[len-1]);
}
