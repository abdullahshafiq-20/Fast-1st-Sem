#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a patterns you want to create ");
	printf("\nN/n for number, S/s for start, A/a for alphabet:");
	scanf("%c",&ch);
	int i,k,num;
	printf("Enter Number of Rows: ");
	scanf("%d",&num);
	switch(ch)
	{
		case 'N':
		case 'n':
		{
	        for (i=0;i<=num;i++)
	        {  
		        for (k=1;k<=i;k++)
		            {
			            printf("%d",k);
		            }
		        printf("\n");
	        }				
	    }
	    break;
	    case's':
	    case'S':
		{
	        for (i=0;i<=num;i++)
	        {  
		        for (k=1;k<=i;k++)
		            {
			            printf("*");
		            }
		        printf("\n");
	        }				
	    }
	
	    break;
	    case'a':
	    case'A':
		{
	        for (i=0;i<=num;i++)
	        {  
		        for (k=0;k<i;k++)
		            {
		            	int alph=65+k;
			            printf("%c",alph);
		            }
		        printf("\n");
	        }				
	    }	
   }

}