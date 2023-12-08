#include<stdio.h>
#include<string.h>
void calmat()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	int *ptr1[2][2],*ptr2[2][2],*ptr3[2][2];
	printf("Enter a first matrix\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("Enter a 1st Matrix in Pocket [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			ptr1[i][j]=&a[i][j];
		}
	}
	printf("Eenter a second matrix\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("Enter a 2nd Matrix in Pocket [%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			ptr2[i][j]=&b[i][j];
		}
	}
	printf("\nSum of Two matrices are:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			c[i][j]=*ptr1[i][j]+*ptr2[i][j];
			ptr3[i][j]=&c[i][j];
		}
	}
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			 printf("%4d",*ptr3[i][j]);

		}
		printf("\n");
	}		
}
int main()
{
	calmat();
}






