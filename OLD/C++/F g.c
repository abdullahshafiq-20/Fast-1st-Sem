#include <stdio.h>
#include <math.h>
int main()
{
	float x,y,z;
	
	printf("enter the three sides ");
	scanf("\n%f %f %f",&x,&y,&z);

	if (x==y && x==z)
	printf("it is Equiletrial");
	      else
		  { if ( x==y || y==z || z==x)
		  	printf("It is isosceles");
		  	    else
		  	    {
		  	      if ((x*x)+(y*y)==(z*z) || (x*x)+(z*z)==(y*y) || (y*y)+(z*z)==(x*x) )
					printf("It is Right Angeled");	
		  	    	    else
		  	    	    {
		  	    	    	printf("it is scalene");
						}
		  	    	
				}
		  	
		  }	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}