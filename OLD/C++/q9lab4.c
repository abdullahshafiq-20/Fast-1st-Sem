#include<stdlib.h>
#include<math.h>
int main()
{
	float x,y,x1,x2,y1,y2,sx,sy,s,d;
	
	printf("Values of (x1,y1): \n");
	scanf("%f %f",&x1,&y1);
	printf("Values of (x2,y2): \n");
	scanf("%f %f",&x2,&y2);
	
	x=x2-x1;
	y=y2-y1;
	sx=x*x;
	sy=y*y;
	s=sx+sy;
	d=sqrt(s);
	printf("Distance is %.1fm",d);
	
	
	x=x1+x2;
	y=y1+y2;
	int d1,d2;d1=x/2;d2=y/2;
	printf("\nMid piont= (%d,%d)",d1,d2);
		
}

