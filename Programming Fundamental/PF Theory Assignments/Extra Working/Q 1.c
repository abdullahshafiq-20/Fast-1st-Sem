#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int array[5][6];
    int i,j;
    int random;
    int id[4]={4,4,8,9};
    for (i=0;i<5;i++)
	{
		if(i==4)
		{
			for (j=0;j<4;j++)
			{
				printf(" %d ",id[j]);
			}
			for (j=0;j<2;j++)
			{
				array[i][j]=(rand()%(90-65))+65;
				printf(" %c ",array[i][j]);	
			}
		}
		else
		{
	        for (j=0;j<6;j++)                   
		    {                                     
		        array[i][j]=(rand()%(90-65))+65;
                
                printf(" %c ",array[i][j]);		
		    }                                     
            printf("\n");			
		}                 
    }
    int a=0,b=0,count=0,score=0;
    char string[20];
    char last[20];

    printf("\nEnter String to Find:");
    scanf("%s",string);
    int d=strlen(string);
    for (i=0;i<5;i++)
    {
    	for (j=0;j<6;j++)
    	{
        	if (array[i][j]==string[0])
    	    {
    	    	last[i]=array[i][j];
    		    a=i;
    		    b=j;
				 
		    }			
	    }

	    /*for (i=1;i<5;i++)
	    {
	    	if (array[b][i]==string[i])
	    	{
	    		last[i]=array[b][i];
			}
		}*/			
	}
	for (i=1;i<5;i++)
	{
	    if (array[i][b]==string[i])
	    	{
	    		last[i]=array[i][b];
			}
		}	
	for (i=0;i<d;i++)
	{
		if (last[i]==string[i])
		{
			count++;
		}
	}	
	if(count==d)
	{
		printf("\nMatched in %d ROW & %d Column",a+1,b+1);
		score++;
		printf("\nScore: %d",score);
	}
	else 
	printf("no");	
	

}