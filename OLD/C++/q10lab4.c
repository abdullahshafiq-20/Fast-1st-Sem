#include<stdlib.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Values of \"a\",\"b\",\"c\": \n");
	scanf("%d %d %d",&a,&b,&c);
	
    b=-1*b;
	float d=(b*b)-4*a*c;
	d=sqrt(d);
	float x=(b-d)/2;
	float y=(b+d)/2;
	
	printf(" x=%.1f\n x=%.1f",x,y);
		
}






