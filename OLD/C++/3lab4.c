#include<stdlib.h>
int main()
{
	float aoc,aos,aor,r,l,l1,h;
	printf("For Cirle : ");
	printf("\n Radius : ");
	scanf("%f",&r);
	aoc=3.14*r*r;
	printf("Area of Circle = %.1f",aoc);
	
	printf("\n\nFor Square : ");
	printf("\n Lenght : ");
	scanf("%f",&l);
	aos=l*l;
	printf("Area of Square = %.1f",aos);
	
	printf("\n\nFor Rectangle : ");
	printf("\n Lenght : ");
	scanf("%f",&l1);
	printf(" Hieght : ");
	scanf("%f",&h);
	aor=l1*h;
	printf("Area of Rectangle = %.1f",aor);
		
}




