#include<stdio.h>
int main()
{
	int min,max,n,i,j,k,pluspos,cur,overwhelm=0;char str[30];
	char albet[27]="abcdefghijklmnopqrstuvwxyz";
	scanf("%d%d%d",&min,&max,&n);
	scanf("%s",str);
	for(k=0;k<5;k++){
		pluspos=0;
		if(overwhelm==1) break;
		for(i=0;i<n;i++){
		//printf("%c %c\n",str[n-1-i],albet[max-1-i]);
			if(str[n-1-i]==albet[max-1-i]){
				pluspos=1;
			}
			else if(pluspos==1){
				break;
			}
			else{
				str[n-1-i]++;break;
			}
		}
		if(pluspos==1){
			cur=n-1-i;str[cur]++;
			for(j=0;j<=i;j++){
				str[cur+j]=str[cur]+j;
				if(str[cur+j]>albet[max-1]) overwhelm=1;
			}
		}
		if(overwhelm!=1) printf("%s\n",str);
	}
}
