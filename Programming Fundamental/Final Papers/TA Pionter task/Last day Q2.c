#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sum=0;
	int input[5][5]={ {1,2,3,4,5},
	                {1,2,3,4,5},
	                {1,2,3,4,5},
	                {1,2,3,4,5},
	                {1,2,3,4,5} };
	int result[3][3]={ {18,27,36},
	                   {18,27,36},
	                   {18,27,36} };
	int filter[3][3];
	int a=0;
	int b=3;
	int j;
	for(int i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{
			filter[i][j]=input[i][j];
			sum=sum+filter[i][j];
			printf(" %d",filter[i][j]);
		}
		printf("\n");	 
    }
    printf("%d",sum);
                 
	
	
	
	
	
	              
	
	
	
	
	
	
	
	
	
	
	
}