#include<stdio.h>
#include<stdlib.h> 
#define DEBUG 1
int main()
{
	int n,i,k,j;
	while(scanf("%d",&n)!=EOF)
	{
		/*����ṹ������*/ 
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
		/*�������*/ 
		/*��ȡ���������*/
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
		/*��ȡ���*/
		/*����sum��orinum*/
		for(i=0;i<n;i++)
		{
			arr[i].sum=arr[i].g1+arr[i].g2+arr[i].g3;
			arr[i].orinum=atoi(arr[i].num);
		}
		max=&arr[0];min=&arr[0];
		/*�������*/
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
		/*DEBUG���*/
		/*Ѱ�������������д�ˡ��ÿ��Բ����е�����+����*/
	}
}
