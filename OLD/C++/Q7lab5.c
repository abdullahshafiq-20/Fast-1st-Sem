#include<stdio.h>
int main()
{ 
    float i,s,y,d,c;
    printf("Enter Amount: ");
    scanf("%.1f",&i);
    if (i>1999)
	y=0.5;
	d=i*y;
	c=i-d;
	printf("YOU GOT 50%");
	printf("\n%.1f is discount price",d);
	printf("\n%.1f is cost price",c); 
	else 
	{
	if(s>=2000&&s<=4000)	
	y=0.2;
	d=s*y;
	c=s-d;
	printf("YOU GOT 20%");
	printf("\n%.1f is discount price",d);
	printf("\n%.1f is cost price",c);
	else 
	{
	if (s>=4001&&s<=6000)
	y=0.3;
	d=s*y;
	c=s-d;
	printf("YOU GOT 30%");
	printf("\n%.1f is discount price",&d);
	printf("\n%.1f is cost price",&c);
	}
		   
	}
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
    
	         
	         
	        
			 
    	   	
	

