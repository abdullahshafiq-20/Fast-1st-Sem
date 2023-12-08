#include <stdio.h>
int main()
{
	int i,x,num=1234;
 for (i=0; i<=num+(num+1); i++)
    {
         x=num%10;
         printf("%d",x);
         num=num/10;
         
    }
	
	
	
	
	
}