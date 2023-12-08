

#include <stdlib.h>
int main()
{
	float aggregatepercentage;
	float p1;
	float total;
	float x1;
	float x2;
	float x3;
	float x4;
	float x5;
	
	printf("Marks In Subject#1 ");
	scanf("%f",&x1);
	
	printf("Marks In Subject#2 ");
	scanf("%f",&x2);
	
	printf("Marks In Subject#3 ");
	scanf("%f",&x3);
	
	printf("Marks In Subject#4 ");
	scanf("%f",&x4);
	
	printf("Marks In Subject#5 ");
	scanf("%f",&x5);
	
	total=x1+x2+x3+x4+x5;
	
	aggregatepercentage=total/500;
	p1=aggregatepercentage*100;
	
	printf(" PERCENTAGE %f\n", p1);	
	
}
