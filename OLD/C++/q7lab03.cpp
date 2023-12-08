#include <stdio.h>

int main()
{
	
	float i,p,r,t,R;
	printf("Principle value: b/w 100 to 1,000,000: ");
	scanf("%f",&p);
	printf("Rate of interest:b/w 5 to 10 : ");
	scanf("%f",&r);
	printf("Time Period:b/w 1 to 10 years: ");
	scanf("%f",&t);
	
	R=r/100;
	i=p*R*t;
	printf("\n%.2f is Simple iterest",i);
	
}






