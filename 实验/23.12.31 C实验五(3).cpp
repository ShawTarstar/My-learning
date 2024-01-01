#include<stdio.h>
#include<math.h>
struct time{
	int start;
	int arrive;
};
struct time fli[8];
int main()
{
	int mi,h,m,i,temp,num,minminu,hour,minu;
	fli[0].start=480;fli[0].arrive=616;
	fli[1].start=583;fli[1].arrive=712;
	fli[2].start=679;fli[2].arrive=811;
	fli[3].start=767;fli[3].arrive=900;
	fli[4].start=840;fli[4].arrive=968;
	fli[5].start=945;fli[5].arrive=1075;
	fli[6].start=1140;fli[6].arrive=1280;
	fli[7].start=1305;fli[7].arrive=1438;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&h,&m);
	mi=h*60+m;
	minminu=abs(mi-fli[0].start);num=0;
	for(i=0;i<8;i++){
		temp=abs(mi-fli[i].start);
		if(temp<minminu){
			minminu=temp;num=i;
		}
	}
	printf("Closest departure time is ");
	if(fli[num].start>=780){
		hour=(fli[num].start-700)/60;minu=fli[num].start-700-hour*60;
		printf("%d:%02d p.m., arriving at ",hour,minu);
	}
	else{
		hour=fli[num].start/60;minu=fli[num].start-hour*60;
		if(hour==12){
			printf("12:%02d p.m., arriving at ",minu);
		}
		else{
			printf("%d:%02d a.m., arriving at ",hour,minu);
		}
	}
	if(fli[num].arrive>=780){
		hour=(fli[num].arrive-700)/60;minu=fli[num].arrive-700-hour*60;
		printf("%d:%02d p.m.",hour,minu);
	}
	else{
		hour=fli[num].arrive/60;minu=fli[num].arrive-hour*60;
		printf("%d:%02d a.m.",hour,minu);
	}
}
