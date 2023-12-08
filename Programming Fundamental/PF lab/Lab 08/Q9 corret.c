#include<stdio.h>
int main()
{
    char ch;
	printf("What operation the user wants to perform(-/+):");
	scanf("%c",&ch);
	int i,j,k,m,n;
	int matrixA[3][3];
	int matrixB[3][3];
	int matrixC[3][3];
	switch(ch)
	{
		case '+':
		{
			printf("Enter First matrix:\n");
				for ( i=0;i<3;i++)
				{
					for( j=0;j<3;j++)
					{
						scanf("%d",&matrixA[i][j]);	
					}
				}
				{
				printf("Enter second matrix:\n");	
		    	}
				for ( m=0;m<3;m++)
				{
					for( n=0;n<3;n++)
					{
						scanf("%d",&matrixB[m][n]);
					}
				}
				for (i=0;i<3;i++)
				{
					for( j=0;j<3;j++)
					{
						printf(" %d",matrixA[i][j]);
					}
					if (i==0)
					{
					    printf(" +");
					    int m=0;
				        for( n=0;n<3;n++)
				        {
				            printf(" %d",matrixB[m][n]);
				        }
						printf(" =");
						for( j=0;j<3;j++)
                        {
                            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
                            printf(" %d",matrixC[i][j]);
                        }																		
					}
					if (i==1)
					{
					    printf("  ");
					    int m=1;
				        for( n=0;n<3;n++)
				        {
				            printf(" %d",matrixB[m][n]);
				        }
				        printf("  ");
						for( j=0;j<3;j++)
                        {
                            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
                            printf(" %d",matrixC[i][j]);
                        }																								
					}
					if (i==2)
					{
					    printf("  ");
					    int m=2;
				        for( n=0;n<3;n++)
				        {
				            printf(" %d",matrixB[m][n]);
				        }
				        printf("  ");
					    for( j=0;j<3;j++)
                        {
                            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
                            printf(" %d",matrixC[i][j]);
                        }																								
					}															
					printf("\n");
			    }
								 	
	    }

   }
}
















	
