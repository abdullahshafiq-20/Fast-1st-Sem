	#include <stdlib.h>
#include <stdio.h>

int main()
{   
    float h,c,t;
	
	printf(" Hardness: ",h);
	scanf("%f",&h);
	printf(" CarbonContent: ",c);
	scanf("%f",&c);
	printf(" TensileStrenght: ",t);
	scanf("%f",&t);
	
	
    if (h>50 && c<0.7 && t>5600)
	printf("GRADE:10");
    
	else
	{
		
       	if (h>50 && c<0.7)
	    printf("Grade:09");	
     	    else
     	    {if (c<0.7 &&t>5600 )	
             printf("GRADE:8");
         	    else	
     	        {if(h>50 &&	t>5600)
     	        printf("GRADE:7");	
     	            else
				     {if (h>50 ||c<0.7 || t>5600)
	 	            printf("GRADE:6");
		
	 	                else
		                printf("GRADE:5");
	                 }	    
                }
            }	
	}	
	
	
}