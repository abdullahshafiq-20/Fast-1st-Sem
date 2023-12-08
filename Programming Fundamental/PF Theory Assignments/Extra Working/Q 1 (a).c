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
    int g=0,h=0;
    int a=0,b=0,score=0;
    char string[20];
    char last[20];
    printf("\nEnter String to Find:");
    scanf("%s",string);
    int d=strlen(string);
    printf("%d",d);
    for (g=0;g<d;g++)
    {
    	for (h=0;h<d;h++)
    	{
    		if (array[g][h]=string[g])
    		{
    			printf("%c",array[g][h]);
			}
		}
	}
	if(strcmp(array,string)==0)
	{
		printf("Yes");
	}

	//printf("%d",score);
    for (i=0;i<d;i++)
    {
    	for (j=0;j<d;j++)
    	{
        	if (array[i][j]==string[0])
    	    {
    	    	last[i]=array[i][h];
    		    a=g;
    		    b=h;
    		    //printf("%c",last[i]);
		    }			
	    }  
	}	
    for (g=1;g<d;g++)
	{
	    if (array[g][b]=string[g])
	    {
	    	//printf("Y");
	    	last[g]=array[g][b];
	    	//printf("%c",array[i][b]);
		}
	}    
	for (g=0;g<d;g++)
	{
		if (last[g]=string[g])
		{
			printf("%c",last[g]);
			score++;
		}
	}
	if(score=d)
	{
		score=1;
		printf("Score%d",score);
	}    
    
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    