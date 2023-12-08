#include <stdio.h>

int main() {
 
    int num, i, sum=0, y=1;
 
    printf("Enter a positive integer: ");
 
    scanf("%d", &num);
 
    
 
    for (i = 0; i <num; ++i) 
	{
        if (num % y == 0)
		 {
         
		   
		printf("%d ", y);
		  
            sum=sum+y;
        }
        y=y+1; 
    }
    
   printf("Factors of %d are: ", num); 
    printf("%d ",sum);
    

	    return 0;}
