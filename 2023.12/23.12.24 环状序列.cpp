#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,k,minnum,len,num,temp;char *min,*tempmin;
	char str[1000][1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++){
		min=&str[i][0];minnum=0;len=strlen(str[i]);
		for(j=1;j<len;j++){
			if(str[i][j]<*min){
				min=&str[i][j];minnum=j;
			}
			else if(str[i][j]==*min){
				temp=minnum;tempmin=min;tempmin++;num=0;
				for(k=j+1;;k++){
					num++;
					if(num>len) break;
					if(k>len-1) k=0;
					if(temp>len-1){
						temp=0;tempmin=&str[i][0];
					}
					if(str[i][k]<*tempmin){
						min=&str[i][j];minnum=j;break;
					}
					else if(str[i][k]==*tempmin){
						temp++;tempmin++;continue;
					}
					else{
						break;
					}
				}
			}
		}
		num=0;
		for(j=0;j<len;j++){
			if(minnum+j<len) printf("%c",str[i][minnum+j]);
			else printf("%c",str[i][minnum+j-len]);
		}
		printf("\n");
	}
}
