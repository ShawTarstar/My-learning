#include<stdio.h>
#include<math.h>
int a[10005];
int main()
{
	int n,max,i;
	while(scanf("%d",&n)!=EOF)
	{
		max=0;scanf("%d",&a[0]);
		for(i=1;i<n;i++){
			scanf("%d",&a[i]);
			if(abs(a[i]-a[i-1])>max){
				max=abs(a[i]-a[i-1]);
			}
		}
		printf("%d\n",max);
	}
 } 
