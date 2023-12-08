#include <stdio.h>
int main()
{
	float t,s,TS,t1,TT;
	printf("Tax Rate: ");
	scanf("%f",&t);
	printf("Salary: ");
	scanf("%f",&s);
	
	t1=t/100;
	TT=s*t1;
	TS=s-TT;
	printf("\n%f Tax Deducted",TT);
	printf("\n%f Salary after deduction",TS);
	
}
	
	
	
	
	
	