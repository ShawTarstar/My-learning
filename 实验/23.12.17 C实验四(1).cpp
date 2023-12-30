#include<stdio.h>
int a[1000];
void selection_sort(int len)
{
	if(len==0) return;
	int i,*max,temp;
	max=&a[0];
	for(i=0;i<len;i++){
		if(a[i]>*max){
			max=&a[i];
		}
	}
	temp=a[len-1];a[len-1]=*max;*max=temp;
	selection_sort(len-1);
	return;
}
int main()
{
	char ch;int i;
	for(i=0;;i++){
		scanf("%d",&a[i]);
		scanf("%c",&ch);
		if(ch=='\n')break;
	}
	int len=i+1;
	selection_sort(len);
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
}
