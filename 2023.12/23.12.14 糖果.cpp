#include<stdio.h>
long long int sum,sum1,sum2,sum3,sum4;
int main()
{
	int BIG=1000000007;
	int n,n0,n1,n2;
	while(scanf("%d",&n)!=EOF)
	{
		
		n0=n/3;
		if(n%3==0){
			n1=n/3;n2=n/3;
		}
		else if(n%3==1){
			n1=n/3+1;n2=n/3;
		}
		else if(n%3==2){
			n1=n/3+1;n2=n/3+1;
		}
		sum=((n1-2)*(n1-1)*n1/6)%BIG+((n2-2)*(n2-1)*n2/6)%BIG+((n0-2)*(n0-1)*n0/6)%BIG+(n1*n2*n0)%BIG;
		printf("%d\n",sum);
	}
}
