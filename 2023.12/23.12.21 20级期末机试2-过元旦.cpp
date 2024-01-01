#include<stdio.h>
int a[10000];
int main()
{
	int n,i,j,ans,y,m,d;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		ans=0;
		scanf("%d-%d-%d",&y,&m,&d);
		for(i=y+1;i<2021;i++){
			if((i%4==0&&i%100!=0)||i%400==0){
				ans+=366;
			}
			else ans+=365;
		}
		for(i=m+1;i<=12&&y!=2021;i++){
			if(i==3||i==5||i==7||i==8||i==10||i==12){
				ans+=31; 
			}
			else if(i==4||i==6||i==9||i==11){
				ans+=30;
			}
			else if(i==2){
				if((y%4==0&&y%100!=0)||y%400==0){
					ans+=29;
				}
				else ans+=28;
			}
		}
		if(y!=2021){
			if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
			ans+=32-d;
			}
			if(m==4||m==6||m==9||m==11){
				ans+=31-d;
			}
			if(m==2){
				if((y%4==0&&y%100!=0)||y%400==0)
				ans+=30-d;
				else ans+=29-d;
			}
		}
		ans++;
		a[j]=ans;
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
