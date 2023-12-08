#include<stdio.h>

int main()
{
	char ch;
	printf("Enter A Alphabet: ");
	scanf("%c",&ch);
	
	if (ch>=65 && ch<=90)
	printf("%c is CAPITAL",ch);
	
	
	else
	{
	
	if (ch>=97 && ch<=122)
		
    {printf("%c is SMALL",ch);}
		
		
    if(ch>=48 && ch<=57)
	{printf("%c is DIGIT",ch);}
        
		
	else 
	{printf("%c is SPECIAL",ch);}		
	
	}
			
}




