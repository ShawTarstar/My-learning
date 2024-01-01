#include<stdio.h>
#include<ctype.h>
char str[1000];
int main()
{
	int i=0,flag=1;char ch;
	printf("Enter a message: ");
	for(;;){
		ch=getchar();
		if(ch=='\n'||ch==EOF) break;
		if((ch<='Z'&&ch>='A')||(ch<='z'&&ch>='a')){
			str[i++]=tolower(ch);
		}
	}
	int len=i;
	for(i=0;i<len/2;i++){
		if(str[len-i-1]!=str[i]){
			flag=0;break;
		}
	}
	if(flag==0) printf("Not a palindrome");
	else printf("Palindrome");
}
