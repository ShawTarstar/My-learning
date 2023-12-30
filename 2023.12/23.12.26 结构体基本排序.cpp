#include<stdio.h>
#include<ctype.h>
struct stu{
	char name[25];
	int cnum;
	int mnum;
	int elnum;
	int sum;
};
struct stu s[100];
int main()
{
	int i,j,n;char former,later;
	struct stu temp;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++){
			scanf("%s%d%d%d",s[i].name,&s[i].cnum,&s[i].mnum,&s[i].elnum);
			s[i].sum=s[i].cnum+s[i].mnum+s[i].elnum;
		}
		for(i=0;i<n;i++){
			for(j=0;j<n-1-i;j++){
				if(s[j].sum>s[j+1].sum){
					temp=s[j];
					s[j]=s[j+1];
					s[j+1]=temp;
				}
				else if(s[j].sum==s[j+1].sum){
					former=toupper(s[j].name[0]);
					later=toupper(s[j+1].name[0]);
					if(former<later){
						temp=s[j];
						s[j]=s[j+1];
						s[j+1]=temp;
					}
					else if(former==later){
						if(s[j].cnum>s[j+1].cnum){
							temp=s[j];
							s[j]=s[j+1];
							s[j+1]=temp;
						} 
					}
				}	
			}
		}
		for(i=n-1;i>=0;i--){
			printf("%3d %20s %3d %3d %3d %3d\n",n-i,s[i].name,s[i].sum,s[i].cnum,s[i].mnum,s[i].elnum);
		}
	}
	
}
