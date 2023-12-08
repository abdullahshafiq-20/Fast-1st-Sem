#include<stdlib.h>
int main()
{
	int x,y;
	printf("enter 1st Numer: ");
	scanf("%d",&x);
	printf("enter 2nd Numer: ");
	scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
	
	printf("x= %d y=%d\n(SWAPPED)",x,y);
	
}




