#include<stdio.h>
#include<math.h>
int a[1000000];
int isprime(int p)
{
	int j;
	if(p==2||p==3)
	return 1;
	if(p%6!=5&&p%6!=1)
	return 0;
	for(j=5;j<=sqrt(p);j+=6){
		if(p%j==0||p%(j+2)==0)
		return 0;
	}
	return 1;
}
void findpeeo(int n,int cur,int i)
{
	if(i==5842)return;
	if(n==2||n==3||n==5||n==7){
		a[i]=cur;printf("cur=%d,i=%d ",cur,i);
		findpeeo(cur+1,cur+1,i+1);return;
	}
	if(isprime(n)||(n%2!=0&&n%3!=0&&n%5!=0&&n%7!=0)){
		findpeeo(cur+1,cur+1,i);return;
	}
	if(n%2==0){
		findpeeo(n/2,cur,i);return;
	}
	if(n%3==0){
		findpeeo(n/3,cur,i);return;
	}
	if(n%5==0){
		findpeeo(n/5,cur,i);return;
	}
	if(n%7==0){
		findpeeo(n/7,cur,i);return;
	}
	findpeeo(cur+1,cur+1,i);return;
}
int main()
{
	int k=2,num,temp=2,i=1;
	a[0]=1;
	for(;;){
			if(i==5843)break;
			if(temp==2||temp==3||temp==5||temp==7){
				a[i]=k;printf("k=%d,i=%d ",k,i);k++;temp=k;i++;continue;
			}
			if(isprime(temp)||(temp%2!=0&&temp%3!=0&&temp%5!=0&&temp%7!=0)){
				k++;temp=k;continue;
			}
			if(temp%2==0){
				temp/=2;continue;
			}
			if(temp%3==0){
				temp/=3;continue;
			}
			if(temp%5==0){
				temp/=5;continue;
			}
			if(temp%7==0){
				temp/=7;continue;
			}
		}
	while(scanf("%d",&num)!=EOF)
	{
		//findpeeo(2,2,1);
		for(k=0;k<5842;k++)
		printf("%d ",a[k]);
	}
}
