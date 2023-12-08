#include <stdio.h>

int main()
{
	int count=0; 
	char string[]={"prrrogram is prrrogramming"};
	char substring[]={"rr"};

	
	for(int i=0;i<strlen(string);i++)
	{
		if(substring[i]==string[i])
		{
			count =count+1;
		}
	}
	printf("\nNo of matches of substring in main string is: %d" , count);
}