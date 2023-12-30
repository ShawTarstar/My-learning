#include<stdio.h>
#include<stdlib.h> 
#define DEBUG 1
int main()
{
	int n,i,k,j;
	while(scanf("%d",&n)!=EOF)
	{
		/*定义结构体类型*/ 
		typedef struct
		{
			char num[4];
			int g1;
			int g2;
			int g3;
			int sum;
			int orinum;
		}stu;
		stu arr[1000];stu *max,*min,*orimax,*orimin;
		/*定义完毕*/ 
		/*读取输入的数据*/
		for(i=0;i<n;i++)
		{
			for(k=0;k<4;k++)
			{
				scanf(" %c ",&arr[i].num[k]);
			}
			scanf("%d",&arr[i].g1);
			scanf("%d",&arr[i].g2);
			scanf("%d",&arr[i].g3);
		}
		/*读取完毕*/
		/*计算sum和orinum*/
		for(i=0;i<n;i++)
		{
			arr[i].sum=arr[i].g1+arr[i].g2+arr[i].g3;
			arr[i].orinum=atoi(arr[i].num);
		}
		max=&arr[0];min=&arr[0];
		/*计算完毕*/
		/*DEBUG*/ 
		#if DEBUG
		printf("you entered:\n");
		for(i=0;i<n;i++)
		{
			printf("num=%c%c%c%c ",arr[i].num[0],arr[i].num[1],arr[i].num[2],arr[i].num[3]);
			printf("g1=%d ",arr[i].g1);
			printf("g2=%d ",arr[i].g2);
			printf("g3=%d ",arr[i].g3);
			printf("orinum=%d\n",arr[i].orinum);
		}
		#endif
		/*DEBUG完毕*/
		/*寻找最大数，懒得写了。用考试测评中的数组+排序。*/
	}
}
