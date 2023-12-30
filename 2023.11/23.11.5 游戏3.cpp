#include<stdio.h>
int n,min1,min2;
void findtwomin(int arr[],int n); 
int main()
{
	int i;
	while(scanf("%d",&n)!=EOF)
	{
		int arr[n];
		long long int sum=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		min1=min2=arr[0];
		for(i=0;i<n-1;i++)
		{
		findtwomin(arr,n);
		sum+=min1+min2;
		}
		printf("%lld\n",sum);
	} 
}
void findtwomin(int arr[],int n)
{ 
	int i,*minn1,*minn2;
	if(arr[0]>arr[1])
	{
		minn1=&arr[1];minn2=&arr[0];
	}
	else
	{
		minn1=&arr[0];minn2=&arr[1];
	}
	for(i=2;i<n;i++)
	{
		if(arr[i]<*minn1)
		{
			minn2=minn1;minn1=&arr[i];
		}
		else if(arr[i]<*minn2)
		{
			minn2=&arr[i];
		}
	}
	min1=*minn1;min2=*minn2;
	*minn1=*minn1+*minn2;*minn2=1000;
}

