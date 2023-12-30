#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#define BIG 5000
bool is_prime(int n)
{
	int j;
	if(n==2||n==3) return true;
	if(n%6!=1&&n%6!=5) return false;
	for(j=5;j<=sqrt(n);j+=6){
		if(n%j==0||n%(j+2)==0) return false;
	}
	return true;
}
int main()
{
	int i,temp,cur,sum;bool newprime;
	for(i=2;i<=BIG;i++){
		if(!is_prime(i)) continue;
		newprime=true;
		temp=i;cur=i%10;sum=0;
		while(temp){
			temp/=10;
			if(!is_prime(cur)){
				newprime=false;break;
			}
			sum+=cur;cur=temp%10;
		}
		if(!is_prime(sum)){
			newprime=false;
		}
		if(newprime==false) continue;
		printf("%d ",i);
	}
}
