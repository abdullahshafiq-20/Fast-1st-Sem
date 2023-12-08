#include <stdio.h>

int main()
{
	int n;
	printf("Number Of days: ");
	scanf("%d",&n);
	
	if (n<=5)
	   printf("Fine charged of 50 paise");
	     else
	     {if (n<10)
	     printf("Fine charged of 1 rupee");
	          else
			  {if (n<=30)
			  printf("Fine charged of 5 rupees");
			      else
			      printf("Oops! your member ship has been cancelled");
			  
			  }
	     
	     
	     
		 }
	
	
	
	
	
	
	
}