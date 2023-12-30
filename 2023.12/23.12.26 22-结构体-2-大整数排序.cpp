#include<stdio.h>
#include<string.h>
struct num{
	char cur[1005];
	int len; 
};
struct num a[205];
int main()
{
	int i,j,k,n;
	while(scanf("%d",&n)!=EOF)
	{
		struct num temp;
		for(i=0;i<n;i++)
		{
			scanf("%s",a[i].cur);
			a[i].len=strlen(a[i].cur);
		}
		for(i=0;i<n-1;i++){
			for(j=0;j<n-1-i;j++){
				if(a[j].len>a[j+1].len){
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
				else if(a[j].len==a[j+1].len){
					for(k=0;k<a[j].len;k++){
						if(a[j].cur[k]>a[j+1].cur[k]){
							temp=a[j];
							a[j]=a[j+1];
							a[j+1]=temp;
							break;
						}
						else if(a[j].cur[k]<a[j+1].cur[k])
						break;
					}
				}
			}
		}
		for(i=0;i<n;i++){
			printf("%s\n",a[i].cur);
		}
	}
}
