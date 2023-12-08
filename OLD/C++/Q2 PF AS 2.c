#include <stdio.h>
int main()
{
	int n,i;
	printf("\nEnter a number of patients: ");// for loop
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("\n\t\t***********\n");
		int age;
	    printf("\nEnter Your AGE: ");
	    scanf("%d",&age);
	    char area;
	    printf("Enter Your AREA:\n\n \"R/r\" for RURAL Area\n \"U/u\" for URBAN Area\n ");
	    scanf("\n%c",&area);
        if (age>=18&&(area=='R'||area=='r'))
	    {
		printf("Eligible for the vaccine. Kindly proceed for the vaccination\n");
	    }
	    else if (age<18&&(area=='U'||area=='u'))
	    {
		printf("Not Eligible for the vaccine. Kindly wait for the vaccination\n");
	    }
	    else 
	    {
		printf("Not Eligible for the vaccine. Kindly wait for the vaccination\n");
	    }
	}
}





		
		
	
	
	
	
