#include <stdio.h>
int main()
{
	int numtoguess;
	int guess;
	int i=0;
	numtoguess= rand() %10+1;
	printf("enter a guessed NUMBER:");
	scanf("%d",&guess);
	while(i<=guess)
	{
		if (guess==numtoguess)
		{
        printf("YOUR GUESS IS CORRECT");
        break;
        }	
	    else if(guess!=numtoguess)
	    {
          printf("enter a guessed NUMBER:\n");
	     scanf("%d",&guess);  
	    }
	 i++;
}







	
		
		
		
		
		
	
	
	

	

	

}

