#include<stdio.h>
#include<string.h> 
struct st{
	char name[25];
	int ave;
	int judge;
	char leader;
	char west;
	int paper;
};
int findbonus(struct st p)
{
	int bon=0;
	if(p.paper>=1&&p.ave>80){
		bon+=8000;
	}
	if(p.ave>85&&p.judge>80){
		bon+=4000;
	}
	if(p.ave>90){
		bon+=2000;
	}
	if(p.west=='Y'&&p.ave>85){
		bon+=1000;
	}
	if(p.leader=='Y'&&p.judge>80){
		bon+=850;
	}
	return bon;
}
int main()
{
	int n,i,sum,bonus,maxbonus;
	char maxstu[25];
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;maxbonus=0;
		struct st stu;
		for(i=0;i<n;i++){
			scanf("%s%d%d %c %c%d",stu.name,&stu.ave,&stu.judge,&stu.leader,&stu.west,&stu.paper);
			//printf("name=%s,ave=%d,judge=%d,leader=%c,west=%c,paper=%d.\n",stu.name,stu.ave,stu.judge,stu.leader,stu.west,stu.paper);
			bonus=findbonus(stu);
			sum+=bonus;
			if(bonus>maxbonus){
				maxbonus=bonus;
				memset(maxstu,0,sizeof(maxstu));
				strcpy(maxstu,stu.name);
			}
		}
		printf("%s\n%d\n%d\n",maxstu,maxbonus,sum);
	}
}
