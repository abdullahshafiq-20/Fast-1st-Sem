#include<stdio.h>
int main()
{
	int arr[][4] = { { 8, 5, 7, 2 },
                     { 7, 3, 0, 1 },
                     { 8, 5, 3, 2 },
                     { 9, 4, 2, 1 } };
    int i,j,k,temp=0;
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			for (k=0;k<4-j-1;k++)
			{
				if (arr[i][k]>arr[i][k+1])
				{
					temp=arr[i][k];
					arr[i][k]=arr[i][k+1];
					arr[i][k+1]=temp;
				}
			}
			
		}
	}
	printf("\nSOrted 2D Array:\n"); 
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	                
  
	
	
	
	
	
	
	
	
	
	
	
	
}