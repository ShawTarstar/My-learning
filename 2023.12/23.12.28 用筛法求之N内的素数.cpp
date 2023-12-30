#include<stdio.h>
#include<math.h>
int e[1000];
int isprime(int p)
{
	int i;
	if(p==2||p==3)
	return 1;
	if(p%6!=5&&p%6!=1)
	return 0;
	for(i=5;i<=sqrt(p);i+=6){
		if(p%i==0||p%(i+2)==0)
		return 0;
	}
	return 1;
}
void prime(void)
{
	int i;
	int count;
	e[0]=2;e[1]=3;count=2;
	for(i=5;i<=10000;i+=2){
		if(i%6!=5&&i%6!=1)
		continue;
		if(isprime(i)){
			e[count]=i;
			count++;
		}
	}
}
int main()
{
	int i,n;
	scanf("%d",&n);
	prime();
	for(i=0;e[i]<=n;i++){
		printf("%d\n",e[i]);
	}
}
