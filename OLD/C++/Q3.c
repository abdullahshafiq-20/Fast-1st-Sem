#include <stdio.h>
int main()
{
	char ch;
	printf("\nFor \"ENCRYPTION\" type \'E/e\' :\n\nFor \"DECRYPTION\" type \'D/d\' :\n\n");
	scanf("%c",&ch);
	if ((ch=='E')||(ch=='e'))
	{	
		int x,i,num,k,num1,alph;
		printf("How many numbers you want to encrypt: \n");
		scanf("%d",&num1);
	    printf("\nEnter a NUMBER you want to \"ENCRYPT\" :\n ");
	    scanf("%d",&num);
	    for (i=0;i<num1;i++)
	    {
		    x=num%10;	
		    int alph1;
			alph=65;
		    for (k=0;k<1;k++)
	        {
	        	alph1=alph+x;
			    printf(" %c",alph1);	 
	        }
		    num=num/10; 
	    }
    }
    
    else if ((ch=='D')||(ch=='d'))
    {
    	int num;
	    printf("Enter Number Of Alphabets you want to decrypt: ");
	    scanf("%d",&num);
	    char x[num];
	    int i,f,alph;
	    char u[num];
	    printf("\nEnter Alphabets In \'UPPER\' case: ");
	    scanf("%s",x);
	    for (i=0;i<num;i++)
	    {
		    alph=65;
		    alph=x[i]-alph;
		    printf("%d",alph);

	    }
	    
	    

	    

	    


	    
	}
    
    
     
	

		
	
	
	
}
	
