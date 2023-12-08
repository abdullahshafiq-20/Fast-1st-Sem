#include <stdio.h>
int main()
{
	int num;
	printf("Enter Number Of Alphabets you want to decrypt: ");
	scanf("%d",&num);
	char x[num];
	int i;
	printf("\nEnter Alphabets In \'UPPER\' case: ");
	scanf("%s",x);
	for (i=0;i<num;i++)
	{
		
		int alph=65;
		alph=x[i]-alph;
		printf("\n%d",alph);
		
	}
	
	
	
	
	
	
	
	
	
}