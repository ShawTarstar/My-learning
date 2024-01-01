#include<stdio.h>
#include<ctype.h>
char str[1000];
int main()
{
	int i=0,flag=1;char ch,*r1,*r2;
	printf("Enter a message: ");
	for(;;){
		ch=getchar();
		if(ch=='\n'||ch==EOF) break;
		if((ch<='Z'&&ch>='A')||(ch<='z'&&ch>='a')){
			str[i++]=tolower(ch);
		}
	}
	int len=i;
	r1=&str[len-1];
	r2=&str[0];
	for(i=0;i<len/2;i++){
		if(*r1!=*r2){
			flag=0;break;
		}
		r1--;r2++;
	}
	if(flag==0) printf("Not a palindrome");
	else printf("Palindrome");
}
