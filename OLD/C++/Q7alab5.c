#include<stdlib.h>
int main()
{
	float i,s,d,p,y,c;
	printf("Cost of Items: ");
	scanf("%f",&i);
	printf("shipping Price: ");
	scanf("%f",&s);
	
	if (i>=1999)
	{
	y=0.5;
	d=i*y;
	c=i-d;
	printf("\nYOU GOT 50 off on Items");
	printf("\n%.1f is discount price",d);
	printf("\n%.1f is cost price",c); 
    }else printf("\nNo Discount on Items");
	if(s>=2000&&s<=4000)
    {
	y=0.2;
	d=s*y;
	c=s-d;
	printf("\n\nYOU GOT 20 off on shopping");
	printf("\n%.1f is discount price",d);
	printf("\n\n%.1f is cost price",c); 
    }
	else 
	{
	if (s>=4001&&s<=6000)
	    {
		y=0.3;
	    d=s*y;
	    c=s-d;
	    printf("\n\nYOU GOT 30 off on shopping");
	    printf("\n%.1f is discount price",d);
	    printf("\n\n%.1f is cost price",c);	
	    }
	    else 
	    {
	    if(s>6000)
		y=0.5;
	    d=s*y;
	    c=s-d;
	    printf("\n\nYOU GOT 50 off on Shopping");
	    printf("\n\n%.1f is discount price",d);
	    printf("\n\n%.1f is cost price",c);
	    }
         
	}
    
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
}