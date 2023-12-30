#include<stdio.h>
#include<math.h>
#define MAXNUM 5000
int d[MAXNUM],a[35][35];
int prime(int p)
{
	int i;
	if(p==2||p==3)
	return 1;
	if(p%6!=1&&p%6!=5)
	return 0;
	for(i=5;i<=sqrt(p);i+=6)
	{
		if(p%i==0||p%(i+2)==0)
		return 0;
	}
	return 1;
}
void sushu(void)
{
	int j=2,i;
	d[0]=2;d[1]=3;
	for(i=6;j<=MAXNUM+1;i+=6)
	{
		if(prime(i-1)) d[j++]=i-1;
		if(prime(i+1)) d[j++]=i+1;
	}
}
int main()
{
	int i,j,k,n;
	sushu();
	while(scanf("%d",&n)!=EOF)
	{
		k=0;
		for(i=0;i<n;i++){
			for(j=0;j<=i;j++){
				if(j==0){
					a[i][0]=1;printf("1 ");
				}
				else if(j==i){
					a[i][i]=1;printf("1 ");
				}
				else{
					a[i][j]=a[i-1][j]+a[i-1][j-1];
					printf("%d ",a[i][j]);
				}
			}
			for(j=i+1;j<n;j++){
				printf("%d ",d[k++]);
			}
			printf("\n");
		}
		printf("\n");
	}
} 
