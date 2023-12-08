#include<stdio.h>
#include<string.h>
void AscSorting(int *a, int d)
{
	int i=0,j=0,temp=0;
	int *b[5]; 
	for (i=0;i<5;i++)
	{
		b[i]=&a[i];
	}
	for (i=0;i<5;i++)
	{
		for (j=i+1;j<5;j++)
		{
			if(*b[i]>*b[j])
			{
				temp=*b[i];
				*b[i]=*b[j];
				*b[j]=temp;
			}
		}
	}
	for (i=0;i<5;i++)
	{
		printf("%d",*b[i]);
    }
}
void DscSorting(int *a, int d)
{
	int i=0,j=0,temp=0;
	int *b[5]; 
	for (i=0;i<5;i++)
	{
		b[i]=&a[i];
	}
	for (i=0;i<5;i++)
	{
		for (j=i+1;j<5;j++)
		{
			if(*b[i]<*b[j])
			{
				temp=*b[i];
				*b[i]=*b[j];
				*b[j]=temp;
			}
		}
	}
	for (i=0;i<5;i++)
	{
		printf("%d",*b[i]);
    }
}
int main()
{
	int a[]={3,6,1,5,2};
	int option;
	int d=strlen(a);
	printf("Select:\n1.Ascending Sorting\n2.decsending Sorting\n");
	scanf("%d",&option);
	switch(option)
	{
	case 1:
		{
			AscSorting(a,d);
		}
		break;
	case 2:
	    {
	    	DscSorting(a,d);
		}		
	}	
}












