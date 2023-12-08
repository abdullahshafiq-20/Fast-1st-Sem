#include <stdio.h>
int main()
{
	int x,y;
	printf("Input digit one: ");
	scanf("%d",&x);
	printf("Input digit Two: ");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("%d %d are now swapped",x,y);	
	
}












