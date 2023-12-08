#include<stdio.h>
#include<string.h>
int main()
{
	char *p;
	char arr[][100] = { { "Abdullah" },
                     { "Ali" },
                     { "Shayan" },
                     { "Usama" } };
    int i,j,k,temp=0;
    p=&arr;
	for (i=0;i<strlen(arr);i++)
	{
		for (j=0;j<strlen(arr);j++)
		{
			printf("%c",**arr[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<strlen(arr);i++)
	{
		for (j=0;j<strlen(arr);j++)
		{
			for (k=0;k<strlen(arr)-j-1;k++)
			{
				if (*(*arr+i)+k+1>*(*arr+i)+k+1+1)
				{
					temp=*(*arr+i)+k+1;


				}
			}
			
		}
	}
	printf("\nSOrted 2D Array:\n"); 
	for (i=0;i<strlen(arr)-1;i++)
	{
		for (j=0;j<strlen(arr)-1;j++)
		{
			printf("%c",*(*arr+i)+j);
		}
		printf("\n");
	}
	                
  
	
	
	
	
	
	
	
	
	
	
	
	
}