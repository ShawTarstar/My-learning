#include<stdio.h>
#include<string.h> 
char s[35];
int main()
{
	int len,i,con2,con3,con4,con5;
	while(scanf("%s",s)!=EOF)
	{
		len=strlen(s);
		con2=0;con3=0;con4=0;con5=0; 
		if(len<8){
			printf("no\n");continue;
		}
		for(i=0;i<len;i++){
			if(con2==0&&s[i]<='9'&&s[i]>='0'){
				con2=1;
			}
			else if(con3==0&&s[i]<='Z'&&s[i]>='A'){
				con3=1;
			}
			else if(con4==0&&s[i]<='z'&&s[i]>='a'){
				con4=1; 
			}
			else if(con5==0&&(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='*'||s[i]=='~')){
				con5=1;
			}
		}
		if(con2+con3+con4+con5>=3){
			printf("yes\n");
		}
		else printf("no\n");
	}
}
