#include <stdlib.h>
int main()
{
	int x,y;
    printf("Enter a Number: ");
	scanf("%d",&x);
	
	y=x>50&&x>50;
	printf("%d greater ",y);
	y=x<50&&x<50;
	printf("\n%d lesser ",y);
	y=x==50&&x==50;
	printf("\n%d equal ",y);
		
}




