#include<stdio.h>
int main()
{
    char ch;
	printf("What operation the user wants to perform(-/+):");
	scanf("%c",&ch);
	int matrixA[3][3];
	int matrixB[3][3];
	switch(ch)
	{
		case '+':
		{
			printf("Enter First matrix:\n");
				for (int i=0;i<3;i++)
				{
					for(int j=0;j<3;j++)
					{
						scanf("\n%d",&matrixA[i][j]);	
					}
				}
				{
				for (int i=0;i<3;i++)
				{
					for(int j=0;j<3;j++)
					{
						printf("%d",matrixA[i][j]);
					}
					printf("\n");
				}
				printf("Enter second matrix:\n");	
		    	}
				for (int m=0;m<3;m++)
				{
					for(int n=0;n<3;n++)
					{
						scanf("\n%d",&matrixB[m][n]);
					}
				}
				for (int m=0;m<3;m++)
				{
					for(int n=0;n<3;n++)
					{
						printf("%d",matrixB[m][n]);
					}
					printf("\n");
				}				
		    	
	    }
		
	}	
}
	
