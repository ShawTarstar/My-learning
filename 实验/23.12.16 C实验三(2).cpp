#include<stdio.h>
#include<math.h>
int main()
{
	double x,y1,y2,ave;
	printf("Enter a positive number: ");
	scanf("%lf",&x);y2=1;
	for(;;)
	{
		ave=(x/y2+y2)/2;
		y1=y2;y2=ave;
		if(fabs(y1-y2)<0.00001*y2){
			break;
		}
	}
	printf("Square root: %.5lf",ave);
}
