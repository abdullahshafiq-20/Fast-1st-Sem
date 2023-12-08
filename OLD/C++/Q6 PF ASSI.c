#include<stdio.h>
int main()
{
	int i;
	char ch;
	printf("Communicating with SD or MOBILE(s/m)");
	scanf("%c",&ch);
	if(ch=='s')
	{
		for(i=1;i<19;i++)
		{	
			if ((i==4)||(i==9)||(i==14))
			{
				printf("\n***\n");
				printf("***move straight");
			}
	        printf("\nmove straight");
			if(i==18)
			{
				printf("\n***");
			}
     	}
	}
	else if (ch=='m')
	{
		for(i=1;i<19;i++)
		{	
			if ((i==4)||(i==9)||(i==14))
			{
				printf("\n***\n");
				printf("***Mobile is in the city zone");
			}
	        printf("\nMobile is in the city zone");
			if(i==18)
			{
				printf("\n***");
			}
     	}		
	}	
}






