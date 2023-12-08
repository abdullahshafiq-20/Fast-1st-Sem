#include<stdio.h>
int main()
{
	int num,j,i;
	int count=0,count1=0,count2=0;
	printf("input Quantity of number for Array A & B: ");
	scanf("%d",&num);
	
	// part ARRAY *A*
	int arraya[num];
	printf("Enter  Numbers for Array A: \n");	
    for (i=0;i<num;i++)  // loop for taking Array *A* as input
    {
    	scanf("\n%d",&arraya[i]);
	}
	for (i=0;i<num;i++)  // this loop is for sortinf Array *A*
	{
		for (j=i+1;j<num;j++)
		{
			if(arraya[i]>arraya[j])
			{	
				count=arraya[i];
				arraya[i]=arraya[j];
				arraya[j]=count;			
		    }
		}
	}
	printf("Array A after sorted in ASC:");
	for (i=0;i<num;i++)  // This loop is printing for Array *A*
	{
		printf("\n\t*%d*",arraya[i]);
	}
	
    // part ARRAY *B*
	int arrayb[num];
	printf("\nEnter  Numbers for Array B: \n");	
    for (i=0;i<num;i++)  //loop for taking Array *B* as input
    {
    	scanf("\n%d",&arrayb[i]);
	}
	for (i=0;i<num;i++)  // loop for sorting Array *B*
	{
		for (j=i+1;j<num;j++)
		{
			if(arrayb[i]>arrayb[j])
			{	
				count1=arrayb[i];
				arrayb[i]=arrayb[j];
				arrayb[j]=count1;			
		    }
		}
    }
	printf("Array B after sorted in ASC:"); 
	for (i=0;i<num;i++)  // loop for printing Array *B* after sorted in ASC
	{
		printf("\n\t*%d*",arrayb[i]);
	}
	
	// part ARRAY *C*
	int arrayc[num];
	for (i=0;i<num;i++)   //loop for taking Array *C* after *A* *B* merged as input
	{
		arrayc[i]=arraya[i]+arrayb[i];
	}
	printf("\nArray C after sorted:\n");
	for (i=0;i<num;i++) // loop for printing ARRAY *C*  sorted
	{
		printf("\n*%d*",arrayc[i]);
	}
	
}