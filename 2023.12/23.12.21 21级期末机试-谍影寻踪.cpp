#include<stdio.h>
#include<stdlib.h>
#include<malloc.h> 
struct node{
	int num;
	int name[2];
	struct node *next;
	};
struct node *search_and_add(int x1,int y1,int x2,int y2,struct node *first)
{
	struct node *p;
	for(p=first;p!=NULL;p=p->next){
		struct node *p1,*newnode;p1=p->next;
		if(p1!=NULL&&p->num==x1&&p1->num==x2){
			if(p->name[1]==-1&&p->name[0]!=y1){
				p->name[1]=y1;
			}
			if(p1->name[1]==-1&&p1->name[0]!=y2){
				p1->name[1]=y2;
			}
			return first;
		}
		if(first->num==x2){
			if(first->name[1]==-1&&first->name[0]!=y2){
				first->name[1]=y2; 
			}
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->num=x1;newnode->name[0]=y1;newnode->name[1]=-1;
			newnode->next=first;first=newnode;
			return first;
		}
		if(p->num==x1){
			if(p->name[1]==-1&&p->name[0]!=y1){
				p->name[1]=y1; 
			}
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->num=x2;newnode->name[0]=y2;newnode->name[1]=-1;newnode->next=NULL;
			p->next=newnode;
			return first;
		}
	}
}
int main()
{
	int n,x1,y1,x2,y2,i;
	while(scanf("%d",&n)!=EOF)
	{
		int stop=0;
		scanf("%d,%d->%d,%d",&x1,&y1,&x2,&y2);
		struct node *first,*newnode;
		first=NULL; 
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->num=x2;newnode->name[0]=y2;newnode->name[1]=-1;
		newnode->next=first;first=newnode;
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->num=x1;newnode->name[0]=y1;newnode->name[1]=-1;
		newnode->next=first;first=newnode;
		for(i=1;i<n;i++){
			scanf("%d,%d->%d,%d",&x1,&y1,&x2,&y2);
			first=search_and_add(x1,y1,x2,y2,first);
		}
		for(;first!=NULL;first=first->next){
			printf("%d,",first->num);
			if(first->name[1]!=-1){
				printf("%d#%d",first->name[0],first->name[1]);
			}
			else printf("%d",first->name[0]);
			if(first->next!=NULL) printf("->");
		}
		printf("\n");
	}	
}
