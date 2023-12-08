c#include <stdio.h>

int main() 
{ 
    int num, i, sum=0, y=1 ;
 
    printf("Enter a positive integer: ");
 
    scanf("%d", &num);
 
    printf("Factors of %d are: ", num);
 
    for (i = 1; i <num; ++i) 
	{
        if (num % y == 0)
		{
		printf("%d ", y);  
        sum=sum+y;
        }
        
        y=y+1;
		
		if(num=sum) 
        	{	
  	printf("is perfect number");
	
	}
        
        
    }
    
   
    printf("%d \n",sum);
    
    


    

	    return 0;}
