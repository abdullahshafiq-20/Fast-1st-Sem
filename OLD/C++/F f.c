#include <stdlib.h>
int main ()
{
	float x,y,z;
	printf("enter the three sides ");
	scanf("\n%f %f %f",&x,&y,&z);

	if ( x+y>z && y+z>x && z+x>y)
	printf("It is Triangle");
	else
	printf("ERROR");

}