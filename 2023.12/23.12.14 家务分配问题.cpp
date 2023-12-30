#include<stdio.h>
int a[1000][3],b[1000][3];
int compare(int n,int a1,int a2,int a3,int b1,int b2,int b3)
{
	int baozi1=0,baozi2=0,duizi1=0,duizi2=0,duizi11=0,duizi22=0,i,j;
	if(a1==a2&&a2==a3)
	baozi1=1;
	else if(a1==a2||a2==a3||a1==a3)
	duizi1=1;
	if(b1==b2&&b2==b3)
	baozi2=1;
	else if(b1==b2||b2==b3||b1==b3)
	duizi2=1;
	if(baozi1==1&&baozi2==1){
		if(a1==b1)return 0;
		if(a1>b1)return 1;
		return 2;
	}
	if(baozi1==1)return 1;
	if(baozi2==1)return 2;
	if(duizi1==1&&duizi2==1){
		if(a1==a2||a1==a3)duizi11=a1;
		else duizi11=a2;
		if(b1==b2||b1==b3)duizi22=b1;
		else duizi22=b2;
		if(duizi11==duizi22){
			if(a1+a2+a3==b1+b2+b3)
			return 0;
			if(a1+a2+a3>b1+b2+b3)
			return 1;
			return 2;
		}
		else if(duizi11>duizi22) return 1;
		return 2;
	}
	if(duizi1==1)return 1;
	if(duizi2==1)return 2;
	if(a1==7)a1=1;if(a2==7)a2=1;if(a3==7)a3=1;
	if(b1==7)b1=1;if(b2==7)b2=1;if(b3==7)b3=1;
	if(a1+a2+a3==b1+b2+b3) return 0;
	if(a1+a2+a3>b1+b2+b3) return 1;
	return 2;
}
int main()
{
	int n,i,j,judge;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++){
		scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
		scanf("%d%d%d",&b[i][0],&b[i][1],&b[i][2]);
		for(j=0;j<3;j++){
			if(a[i][j]==1)a[i][j]=7;
			if(b[i][j]==1)b[i][j]=7;
		}
		}
		for(i=0;i<n;i++)
		{
			judge=compare(n,a[i][0],a[i][1],a[i][2],b[i][0],b[i][1],b[i][2]);
			if(judge==0) printf("Draw\n");
			else if(judge==1) printf("lcy\n");
			else if(judge==2) printf("Ypop\n"); 
		}
		
	}
} 
