
#include <stdlib.h>
 int main()
 
 {
 	
 	float x;
 	float meter;
 	float feet;
 	float inches;	
 	float centimeters;
 	
 	printf("Input Distane in KM\n");
 	scanf("%f",&x);
 	
 	meter=x*1000;
 	feet=x*3281;
 	inches=x*39370;
 	centimeters=x*100000;
 	
 	printf("In Meter %.f\n",meter);
 	printf("In feet %.f\n",feet);
 	printf("In Inches %.f\n",inches);
 	printf("In Centimeter %.	f\n",centimeters);
 	
 	
 	
 	
 	
 }

