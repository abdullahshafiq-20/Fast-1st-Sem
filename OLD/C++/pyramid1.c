#include<stdio.h>
int main()
{
	int k,i=0,count=1;
	while (i<=4)
	{
		int j=5;
		while ( j>=i)
		{
			
			printf("  ");
			j--;
		}
		
		for (k=0;k<=i;k++)
		{
			int alph=65;
			
			alph=alph+k;
			printf("%c ",alph);
				
		}
		printf("\n");
		i++;
	}
		int p=4;
		while (p>=0)
	    {
		int j=5;
		while ( j>=p)
		{
			
			printf("  ");
			j--;
		}
		
		for (k=0;k<=p;k++)
		{
			int alph=65;
			
			alph=alph+k;
			printf("%c ",alph);
				
		}
		p--;
		
		printf("\n");
	}
		


	
	
	
	
}