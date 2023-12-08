#include<stdio.h>
int main()
{
	float h,d,d1,d2,d3,d4,d5,s;
	printf("Time must in b/w 1 to 5");
	printf("\nTime in Hours: ");
	scanf("%f",&h);
	printf("distance covered in 1st Hour: ");
	scanf("%f",&d1);
	printf("distance covered in 2nd Hour: ");
	scanf("%f",&d2);
	printf("distance covered in 3rd Hour: ");
	scanf("%f",&d3);
	printf("distance covered in 4th Hour: ");
	scanf("%f",&d4);
	printf("distance covered in 5th Hour: ");
	scanf("%f",&d5);
	
	
	d=d1+d2+d3+d4+d5;
    s=d/h;
	printf("\n%.1f is the Average Speed",s);
	 	
	
}



