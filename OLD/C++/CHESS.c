#include <stdio.h>
int main()
{
	int i,x,y,x_1,y_1,t;
	// chest of 8x8.
	//x,y is original co-ordinate where your bishop is located.
	//x_1,y_1 will be the input cordinates where you want to move bishop diognally.
	printf("\nEnter the location co-ordinates: \n");
	scanf("%d%d",&x,&y);
    for (t=0;t>=0;t++)
    {
 	printf("\nEnter the co-ordinates for Turn: \n");
	scanf("%d%d",&x_1,&y_1);	    
	for (i=1;i<=8;i++)
	{
		if((x_1==x+i)&&(y_1==y+i))
		{
			if((x_1<=8)&&(y_1<=8))
			{
				printf("Valid move");
				printf("\nright and Upward");

			}
			else 
			{
				printf("move out of the chess");
			}
		}
		//for left and upward
		else if ((x_1==x-i)&&(y_1==y+i))
		{
			if((x_1<=8)&&(y_1<=8))
			{
				printf("Valid move");
				printf("\nleft and Upward");
				
			}
			else 
			{
				printf("move out of the chess");
			}			
		}
		//for right and downward
		else if ((x_1==x+i)&&(y_1==y-i))
		{
			if((x_1<=8)&&(y_1<=8))
			{
				printf("Valid move");
				printf("\right and downward");
				
			}
			else 
			{
				printf("move out of the chess");
			}			
					
		}
		//for left and downward
		else if ((x_1==x-i)&&(y_1==y-i))
		{
			if((x_1<=8)&&(y_1<=8))
			{
				printf("Valid move");
				printf("\nleft and downward");
				
			}
			else 
			{
				printf("\nmove out of the chess");
			}						
		}
		else if ((x_1>8)||(y_1>8))
		{
			printf("\nBishop will only move diognally, Invalid MOVE.");
		}

	} 
	i=1;
	x=x_1+0;
	y=y_1+0;  	
	}
}