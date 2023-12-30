#include<stdio.h>
#include<string.h>
char stu[105][25];
char ask[1000][25];
int main()
{
	while(scanf("%s",stu[0])!=EOF){
		int i=1,j=0,k=0,flag=0,m,n;char ch;
		for(;;){
			ch=getchar();
			if(ch=='\n') break;
			scanf("%s",stu[i++]);
		}
		for(;;){
			for(;;){
				ch=getchar();
				if(ch=='\n')break;
				ask[j][k++]=ch;
			}j++;
			ch=getchar();
			if(ch=='\n')break;
			else{
				ask[j][0]=ch;k=1;
			}
		}
		for(m=0;m<j;m++){
			for(n=0;n<i;n++){
				if(strcmp(ask[m],stu[n])==0){
					printf("yes\n");flag=1;break;
				}
			}
			if(flag!=1) printf("no\n");
			flag=0;
		}
		memset(stu,0,sizeof(stu));memset(ask,0,sizeof(ask));
	}
}
