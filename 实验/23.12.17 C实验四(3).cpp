#include<stdio.h>
#include<stdbool.h> 
#include<stdlib.h>
#include<string.h>
#define STACK_SIZE 100
int contents[STACK_SIZE];
int top=0;
void make_empty(void)
{
	top=0;
}
bool is_empty(void)
{
	return top==0;
}
bool is_full(void)
{
	return top==STACK_SIZE; 
}
void push(int i)
{
	if(is_full()){
		printf("Expression is too complex");
		exit(0);
	}
	else
		contents[top++]=i;
}
int pop(void)
{
	if(is_empty()){
		printf("Not enough oprands in expression");
		exit(0);
	}
	else
		return contents[--top];
}
int main()
{
	bool end,endline=false;int sum,i1,i2;char ch;
	while(1)
	{
		end=false;
		printf("Enter an RPN expression: ");
		for(;;){
			scanf(" %c",&ch);
			if((ch<'1'||ch>'9')&&ch!='='&&ch!='+'&&ch!='-'&&ch!='*'&&ch!='/'){
				endline=true;break;
			}
			else if(ch>='1'&&ch<='9'){
				push(ch-'0');
			}
			else if(ch=='+'){
				i2=pop();i1=pop();
				push(i1+i2);
			}
			else if(ch=='-'){
				i2=pop();i1=pop();
				push(i1-i2);
			}
			else if(ch=='*'){
				i2=pop();i1=pop();
				push(i1*i2);
			}
			else if(ch=='/'){
				i2=pop();i1=pop();
				push(i1/i2);
			}
			else if(ch=='='){
				printf("Value of expression: %d\n",contents[0]);
				end=true;break;
			}
		}
		if(end==true){
			make_empty();
		}
		if(endline==true){
			exit(0);
		}
	}
	return 0;
}
