#include<stdio.h>
int main()
{
	float l,ra,rate,pay,pay1,pay2,pay3;
	printf("Enter amount of loan:");
	scanf("%f",&l);
	printf("Enter interest rate:");
	scanf("%f",&ra);
	printf("Enter monthly payment:");
	scanf("%f",&pay);
	printf("\n");
	rate=(ra/100.0f)/12.0f;
	pay1=l*(1.0f+rate)-pay;
	pay2=pay1*(1.0f+rate)-pay;
	pay3=pay2*(1.0f+rate)-pay;
	printf("Balance remaining after first payment: $%.2f\n",pay1);
	printf("Balance remaining after second payment: $%.2f\n",pay2);
	printf("Balance remaining after third payment: $%.2f",pay3);
}
