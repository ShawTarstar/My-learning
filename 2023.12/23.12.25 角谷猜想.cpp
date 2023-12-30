#include<stdio.h>
int main()
{
	long long int n;int flag;
	scanf("%d",&n);flag=0;
	while(n!=1){
		if(n%2==0){
			n/=2;
		}
		else{
			if(flag==0){
				printf("%d",n);n=n*3+1;flag=1;
			}
			else{
				printf(" %d",n);n=n*3+1;
			}
		}
	}
	if(flag==0)printf("No number can be output !");
	printf("\n");
}
