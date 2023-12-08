#include <stdio.h>
int main()
{
	char x;
	printf("select\n c for CHICKEN\n b for BEEF\n v for VEGTERAIN\n");
	scanf("\n%c",&x);
	if(x=='v')
	{
	   char y;
	   printf("select\n T for Tomato and mozzarella\n E for Eggplant and parmesan\n C for Cucumber and Swiss cheese\n");
	   scanf("\n%c",&y);
	   if(y=='T')
	   {
	   printf("\nTomato and mozzarella");}
	   if(y=='E')
	   {
	   printf("\nEggplant and parmesan");}
	   if(y=='C')
	   {
	   printf("\nCucumber and Swiss cheese");}
    }
    else 
    {
    	printf("THANKYOU");
	}	
}





