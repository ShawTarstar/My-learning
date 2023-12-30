#include<stdio.h>
char str[85];
//Go ahead, make my day.
//Jr dkhdg, pdnh pb gdb.
int main()
{
	int i,n;
	printf("Enter a message to be encrepted: ");
	for(i=0;;i++){
		scanf("%c",&str[i]);
		if(str[i]=='\n')break;
	}
	printf("Enter shift amount (1-25): ");
	scanf("%d",&n);
	printf("Encrypted message: ");
	int len=i;
	for(i=0;i<len;i++){
		if(str[i]>='a'&&str[i]<='z'){
			printf("%c",'a'+((str[i]-'a')+n)%26);
		}
		else if(str[i]>='A'&&str[i]<='Z'){
			printf("%c",'A'+((str[i]-'A')+n)%26);
		}
		else printf("%c",str[i]);
	}
	
	
}
