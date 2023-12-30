#include<stdio.h>
#include<string.h>
int a[35][35],b[35][35],sum[35][35];
int main()
{
	int n,m,i,j,k;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
	}
	if(m==0){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i==j) printf("1 ");
				else printf("0 ");
			}
			printf("\n");
		}
	}
	else if(m==1){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
	else{
		for(;m-1>0;m--){
			memset(sum,0,sizeof(sum));
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					for(k=0;k<n;k++){
						sum[i][j]+=a[i][k]*b[k][j];
					}
				}
			}
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					b[i][j]=sum[i][j];
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
			printf("%d ",sum[i][j]);
			}
		printf("\n");
		}
	}
}
