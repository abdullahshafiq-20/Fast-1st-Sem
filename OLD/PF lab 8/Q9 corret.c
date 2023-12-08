#include<stdio.h>
int main()
{
    char ch;
	printf("What operation the user wants to perform(-/+):");
	scanf("%c",&ch);
	int matrixA[3][3];
	int matrixB[3][3];
	int matrixC[3][3];
	switch(ch)
	{
		case '+':
		{
			printf("Enter First matrix:\n");
				for (int i=0;i<3;i++)
				{
					for(int j=0;j<3;j++)
					{
						scanf("%d",&matrixA[i][j]);	
					}
				}
				{
				printf("Enter second matrix:\n");	
		    	}
				for (int m=0;m<3;m++)
				{
					for(int n=0;n<3;n++)
					{
						scanf("%d",&matrixB[m][n]);
					}
				}
				for (int i=0;i<3;i++)
				{
					for(int j=0;j<3;j++)
					{
						printf(" %d",matrixA[i][j]);
					}
					if (i==0)
					{
					    printf(" +");
					    int m=0;
				        for(int n=0;n<3;n++)
				        {
				            printf(" %d",matrixB[m][n]);
				        }
						printf(" =");
						for(int j=0;j<3;j++)
                        {
                            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
                            printf(" %d",matrixC[i][j]);
                        }																		
					}
					if (i==1)
					{
					    printf("  ");
					    int m=1;
				        for(int n=0;n<3;n++)
				        {
				            printf(" %d",matrixB[m][n]);
				        }
				        printf("  ");
						for(int j=0;j<3;j++)
                        {
                            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
                            printf(" %d",matrixC[i][j]);
                        }																								
					}
					if (i==2)
					{
					    printf("  ");
					    int m=2;
				        for(int n=0;n<3;n++)
				        {
				            printf(" %d",matrixB[m][n]);
				        }
				        printf("  ");
					    for(int j=0;j<3;j++)
                        {
                            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
                            printf(" %d",matrixC[i][j]);
                        }																								
					}															
					printf("\n");
			    }
								 	
	    }
	    break;
	    case'-':
	    	{
			printf("Enter First matrix:\n");
				for (int i=0;i<3;i++)
				{
					for(int j=0;j<3;j++)
					{
						scanf("%d",&matrixA[i][j]);	
					}
				}
				{
				printf("Enter second matrix:\n");	
		    	}
				for (int m=0;m<3;m++)
				{
					for(int n=0;n<3;n++)
					{
						scanf("%d",&matrixB[m][n]);
					}
				}
				for (int i=0;i<3;i++)
				{
					for(int j=0;j<3;j++)
					{
						printf(" %d",matrixA[i][j]);
					}
					if (i==0)
					{
					    printf(" -");
					    int m=0;
				        for(int n=0;n<3;n++)
				        {
				            printf(" %d",matrixB[m][n]);
				        }
						printf(" =");
						for(int j=0;j<3;j++)
                        {
                            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
                            printf(" %d",matrixC[i][j]);
                        }																		
					}
					if (i==1)
					{
					    printf("  ");
					    int m=1;
				        for(int n=0;n<3;n++)
				        {
				            printf(" %d",matrixB[m][n]);
				        }
				        printf("  ");
						for(int j=0;j<3;j++)
                        {
                            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
                            printf(" %d",matrixC[i][j]);
                        }																								
					}
					if (i==2)
					{
					    printf("  ");
					    int m=2;
				        for(int n=0;n<3;n++)
				        {
				            printf(" %d",matrixB[m][n]);
				        }
				        printf("  ");
					    for(int j=0;j<3;j++)
                        {
                            matrixC[i][j]=matrixA[i][j]-matrixB[i][j];
                            printf(" %d",matrixC[i][j]);
                        }																								
					}															
					printf("\n");
			    }	    			
			}
   }
}

	
