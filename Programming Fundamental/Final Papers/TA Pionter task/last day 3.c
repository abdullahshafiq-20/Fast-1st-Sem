#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char game[10]={"yyybbbbyyy"};
	int yellow[3],blue[4],y=0,b=0;
	int i=0;
	int index=0,index1=0;
	printf("[");
	for (i=0;i<10;i++)
	{
		if(game[i]=='y')
		{
			yellow[y];
			y++;
		}
		else if(game[i]=='b')
		{
			blue[b];
			b++;
		}
		
		printf("%c",game[i]);
		
	}
	printf("]");
	for (int j=0;j<10;j++)
	{
		printf("\nEnter Index for yasir:");
	    scanf("%d",&index);
	    for (i=index-1;i<10;i++)
	    {
		    game[i]=game[i+1];
	    }
	    for (i=0;i<10;i++)
	    {
		    printf("%c",game[i]);
	    }
	    printf("\nEnter Index for Banish:");
	    scanf("%d",&index1);              
	    for (i=index1-1;i<10;i++)         
	    {                                
	        game[i]=game[i+1];           
	    }                                
	    for (i=0;i<10;i++)               
	    {                                
	        printf("%c",game[i]);        
	    }
	    
	
	}


	
	
	
	
	
	
	
	
	
}