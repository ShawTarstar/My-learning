#include<stdio.h>
int main()
{
	int inum,m,d,y;
	float upri;
	printf("Enter item number:");
	scanf("%d",&inum);
	printf("Enter unit price:");
	scanf("%f",&upri);
	printf("Enter purchase date (mm/dd/yyyy):");
	scanf("%d/%d/%d",&m,&d,&y);
	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
	printf("%-d\t\t",inum);
	printf("$%7.2f\t",upri);
	printf("%-2d/%-2d/%-4d",m,d,y);
}
