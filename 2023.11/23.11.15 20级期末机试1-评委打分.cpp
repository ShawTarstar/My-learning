#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		char a[n][3];int arr[n][5];int i,k,*max,*min;
		double result[n][2];
		for(i=0;i<n;i++)
		{
			scanf("%s",a[i]);
			for(k=0;k<5;k++)
			scanf("%d",&arr[i][k]);
		}
		for(i=0;i<n;i++)
		result[i][0]=(double)((int)(a[i][0]-'0')*100+(int)(a[i][1]-'0')*10+(int)(a[i][2]-'0'));
		for(i=0;i<n;i++)
		{
			max=min=&arr[i][0];
			for(k=0;k<5;k++)
			{
				if(arr[i][k]>*max)
				max=&arr[i][k];
			}
			for(k=0;k<5;k++)
			{
				if(arr[i][k]<*min)
				min=&arr[i][k];
			}
			//printf("max=%d ",*max);printf("min=%d",*min);
			//printf("\n");
			*max=*min=0;
			int sum=0;
			for(k=0;k<5;k++)
			{
				sum+=arr[i][k];
			}
			//printf("%d\n",sum);
			result[i][1]=(double)sum/3;
		}
		//现在，结果全部存在result中。
		//现在，进行冒泡排序。
		for(i=0;i<n-1;i++)
		{
			for(k=0;k<n-1;k++)
			{
				double temp0,temp1;
				if(result[k][1]<result[k+1][1])
				{
					temp0=result[k][0];
					result[k][0]=result[k+1][0];
					result[k+1][0]=temp0;
					
					temp1=result[k][1];
					result[k][1]=result[k+1][1];
					result[k+1][1]=temp1;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(result[i][0]<10)
			printf("00%.lf ",result[i][0]);
			else if(result[i][0]>=10&&result[i][0]<100)
			printf("0%.lf ",result[i][0]);
			else if(result[i][0]>=100)
			printf("%.lf ",result[i][0]);
			printf("%.2lf\n",result[i][1]);
		}
	}
}
