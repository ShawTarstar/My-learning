#include<stdio.h>
#include<math.h>
char big[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char small[27]="abcdefghijklmnopqrstuvwxyz";
char num[10]="123456789";
char str[205];
int gcd(int a,int b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main()
{
	int len,word,i,j,p,q,m,n,point,flag;
	while(scanf("%c",&str[0])!=EOF){
		len=1;flag=0;point=0;word=0;p=0;q=0;m=0;
		for(;;){
			scanf("%c",&str[len]);
			if(str[len]=='\n') break;
			if(str[len]==' ') word++;
			len++;
		}
		word++;
		//printf("word=%d,len=%d\n",word,len);
		for(i=len-1;i>=0;i--){
			if(flag>=1&&(str[i]==' '||i==0)){
				if(i==0) printf("%c",str[0]);
				for(j=i+1;j<=point;j++) printf("%c",str[j]);
			}
			if(str[i]==' '){
				point=i;flag++;
			}
			if(flag==1&&str[i]==' '){
				for(j=point+1;j<=len-1;j++) printf("%c",str[j]);
				printf(" ");
			}
		}
		if(flag==0){
			for(i=0;i<len;i++)
			printf("%c",str[i]);
		}
		printf("\n");
		if(len==1) n=1;
		else n=gcd(len,word);
		if(n==1) printf("*\n");
		else{
			for(i=1;i<n;i++) printf(" ");
			for(i=0;i<n;i++) printf("*");
			printf("\n");
			for(i=0;i<n-2;i++){
				for(j=n-1;j>=i+2;j--) printf(" ");
				printf("*");
				for(j=0;j<n-2;j++){
					printf("%c",big[p++]);
					if(p==26) p=0;
				}
				printf("*");
				for(j=0;j<i;j++){
					printf("%c",num[q++]);
					if(q==9) q=0;
				}
				printf("*");
				printf("\n");
			}
				for(i=0;i<n;i++) printf("*");
				for(i=0;i<n-2;i++){
				printf("%c",num[q++]);
				if(q==9) q=0;
			}
		printf("*\n");
		for(i=0;i<n-2;i++){
			printf("*");
			for(j=0;j<n-2;j++){
				printf("%c",small[m++]);
				if(m==26) m=0;
			}
			printf("*");
			for(j=n;j>i+3;j--){
				printf("%c",num[q++]);
				if(q==9) q=0;
			}
			printf("*");
			printf("\n");
		}
		for(i=0;i<n;i++) printf("*");
		printf("\n");
		}
		printf("\n");
	}
}
