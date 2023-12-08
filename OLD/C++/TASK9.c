#include <stdio.h>
#include <math.h>
int main()
{
	int an;
	float MA,IR,TI,TA,MT,MP;
	printf("Account Number");
	scanf("%d",&an);
	printf("Moratge Am");
	scanf("%f",&MA);
	printf("Mortage Teram");
	scanf("%f",&MT);
	printf("intrrst Rtae");
	scanf("%f",&IR);
	
	TI=MA*IR*MT;
	TA=TI+MA;
	MP=TA/(MT*12);
	printf("intrest payable %.f",round(MP));
		
	
}





