#include<stdio.h>
#include<string.h> 
int main()
{	
	double b,sum;char c;char str[1000];int i,j;
	printf("Enter an expression:");
	scanf("%lf",&sum);
	while(1)
	{
		scanf("%c",&c);
		if(c=='+'){
			scanf("%lf",&b);sum+=b;
		}
		else if(c=='-'){
			scanf("%lf",&b);sum-=b;
		}
		else if(c=='*'){
			scanf("%lf",&b);sum*=b;
		}
		else if(c=='/'){
			scanf("%lf",&b);sum/=b;
		}
		else break;
	}
	sprintf(str,"%lf",sum);
	int len=strlen(str);
	printf("Value of expression:");
	for(i=len-1;i>=0;i--){
		if(str[i]!='0'){
			for(j=0;j<=i;j++)
			printf("%c",str[j]);
			break;
		}
	}
}
