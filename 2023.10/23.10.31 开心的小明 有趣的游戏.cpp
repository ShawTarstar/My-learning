#include<stdio.h>
int main(){
	int i,n,big,e,k,sum,q,p,sum0,min1,min2,r,t,u;
	while(scanf("%d",&e)!=EOF)
	{
		int a[100000];
		sum=0;min1=min2=1000;
		for(i=0;i<e;i++)
		{
			scanf("%d",&a[i]);
		}
			//for(q=0;q<e;q++)
			//{
				for(p=0;p<e-1;p++){
				for(i=0;i<e;i++)
				{
					if(a[i]<min1)
					{
						min1=a[i];
						r=i;
					}
				}
				a[r]=1000;
				//for(i=0;i<e;i++)printf("%d,",a[i]);
				//printf("\n");
				for(i=0;i<e;i++)
				{
					if(a[i]<min2)
					{
						min2=a[i];
						u=i;
					}
				}
				//printf("%d,%d\n",min1,min2);
				a[u]=min1+min2;sum+=min1+min2;
				min1=min2=1000;
				//printf("%d\n",a[u]);
				}
			//}
		printf("%d\n",sum);
	}
	}
