#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int arr[n][4];int sum[n];int best[n][4];int worst[n][4];
		int *max,*maxnum,*min,*minnum;int i,j,temp,bs=0,ws=0;int kb=1;int kw=1;
		for(i=0;i<n;i++)
		{
			scanf("%d %d %d %d",&arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3]);
			sum[i]=arr[i][1]+arr[i][2]+arr[i][3];
		}
		//这里是BEST 
		maxnum=&sum[0];max=&arr[0][0];
		for(i=0;i<n;i++)
		{
			if(sum[i]>*maxnum)
			{
				max=&arr[i][0];
				maxnum=&sum[i];
			}
		}
		for(i=0;i<4;i++)
		best[0][i]=*(max+i);
		bs=best[0][1]+best[0][2]+best[0][3];
		for(i=0;i<n;i++)
		{
			if(sum[i]==bs)
			{
				for(j=0;j<4;j++)
				{
					best[kb][j]=arr[i][j];
				}
				kb++;
			}
		}
		for(i=1;i<kb;i++)
		{
			if(best[i][0]<best[i-1][0])
			{
				for(j=0;j<4;j++)
				{
					temp=best[i][j];
					best[i][j]=best[i-1][j];
					best[i-1][j]=temp;
				}
			}
			
		}
		printf("BEST\n");
		for(i=1;i<kb;i++)
		{
			printf("%d ",best[i][0]);
			printf("%d ",bs);
			for(j=1;j<4;j++)
			{
				printf("%d",best[i][j]);
				if(j!=3)
				printf(" ");
			}
			printf("\n");
		}
		//这里是WORST
		minnum=&sum[0];min=&arr[0][0];
		for(i=0;i<n;i++)
		{
			if(sum[i]<*minnum)
			{
				min=&arr[i][0];
				minnum=&sum[i];
			}
		}
		for(i=0;i<4;i++)
		worst[0][i]=*(min+i);
		ws=worst[0][1]+worst[0][2]+worst[0][3];
		for(i=0;i<n;i++)
		{
			if(sum[i]==ws)
			{
				for(j=0;j<4;j++)
				{
					worst[kw][j]=arr[i][j];
				}
				kw++;
			}
		}
		for(i=1;i<kw;i++)
		{
			if(best[i][0]<best[i-1][0])
			{
				for(j=0;j<4;j++)
				{
					temp=worst[i][j];
					best[i][j]=worst[i-1][j];
					best[i-1][j]=temp;
				}
			}
		}
		printf("WORST\n");
		for(i=1;i<kw;i++)
		{
			printf("%d ",worst[i][0]);
			printf("%d ",ws);
			for(j=1;j<4;j++)
			{
				printf("%d",worst[i][j]);
				if(j!=3)
				printf(" ");
			}
			printf("\n");
		}
		 printf("\n");
	}
}
