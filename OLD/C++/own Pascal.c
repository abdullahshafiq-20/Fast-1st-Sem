#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,k,x;
	for (i=0;i<=10;i++)
	{
		for (k=5;k>=i;k--)
		{
			printf("  ");
		}
		for(j=0;j<=i;j++)
	   {
         if(j==0||i==0)
            x=1;
         else
            x=x*(i-j+1)/j;
         printf("   %d",x);
       }
       printf("\n");	
	}
}