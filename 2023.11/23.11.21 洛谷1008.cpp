#include<stdio.h>
int main()
{
	int i,j,k,a,b;int num1,num2,num3;int re=0; 
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			for(k=1;k<=9;k++)
			{
				int arr[8]={0};re=0;
				num1=i*100+j*10+k;
				num2=num1*2;num3=num1*3;
				if(num3>999||num2>999)
				{
					continue;
				}
				if(i==j||i==k||k==j)
				continue;
				arr[0]=i;arr[1]=j;arr[2]=k;
				//printf("arr=%d%d%d\n",arr[0],arr[1],arr[2]);
				for(a=3;a>0;a--)
				{
					arr[2+a]=num2%10;
					num2/=10;
				}
				for(a=3;a>0;a--)
				{
					arr[5+a]=num3%10;
					num3/=10;
				}
				for(a=0;a<8;a++)
				{
					for(b=0;b<8;b++)
					{
						if(arr[a]==arr[b]&&a!=b)
						{re=1;break;}
					}
					if(arr[a]==0)re=1;
					if(re==1)
					break;
				}
				if(re!=1)
				{
					printf("%d%d%d %d%d%d %d%d%d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8]);
				}
			}
			
		}
	}
	return 0;
}
