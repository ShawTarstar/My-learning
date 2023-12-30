#include<stdio.h>
#include<math.h>
int a[105],b[105];
void quicksort(int arr[],int low,int high);
int split(int arr[],int low,int high);
int main()
{
	int n,d,r,i,m1,m2;
	while(scanf("%d%d%d",&n,&d,&r)!=EOF)
	{
		m1=0;m2=0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		quicksort(a,0,n-1);quicksort(b,0,n-1);
		/*for(i=0;i<n;i++) printf("%d ",a[i]);
		printf("\n");
		for(i=0;i<n;i++) printf("%d ",b[i]);
		printf("\n");*/
		for(i=0;i<n;i++){
			if(a[i]+b[n-i-1]>d) m1+=(a[i]+b[n-i-1]-d)*r;
		}
		int min=m1;
		printf("%d\n",min);
	}
}
void quicksort(int arr[],int low,int high)
{
	int middle;
	if(low>=high) return;
	middle=split(arr,low,high);
	quicksort(arr,low,middle-1);
	quicksort(arr,middle+1,high);
}
int split(int arr[],int low,int high)
{
	int part=arr[low];
	for(;;){
		while(low<high&&part<=arr[high]) high--;
		if(low>=high) break;
		arr[low++]=arr[high];
		while(low<high&&part>=arr[low]) low++;
		if(low>=high) break;
		arr[high--]=arr[low];
	}
	arr[high]=part;
	return high;
}
