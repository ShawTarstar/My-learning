#include<stdio.h>
#include<math.h>
int a[5900];
void findpeeo(void)
{
    a[0]=1;int p2=0;int p3=0;int p5=0;int p7=0;
    int n2,n3,n5,n7,i;
    for(i=1;i<=5841;i++){
        n2=a[p2]*2;n3=a[p3]*3;n5=a[p5]*5;n7=a[p7]*7;
        a[i]=fmin(fmin(n2,n3),fmin(n5,n7));
        if(a[i]==n2)p2++;
        if(a[i]==n3)p3++;
        if(a[i]==n5)p5++;
        if(a[i]==n7)p7++;
    }
}
void printsent(int num)
{
    printf("The %d",num);
    if(num%100==11||num%100==12||num%100==13)printf("th");
    else{
        switch(num%10){
            case 1:printf("st");break;
            case 2:printf("nd");break;
            case 3:printf("rd");break;
            default:printf("th");
        }
    }
    printf(" humble number is %d.\n",a[num-1]);
}
int main()
{
    int n;findpeeo();
    while(scanf("%d",&n)!=EOF)
    {
        printsent(n);
    }
}
