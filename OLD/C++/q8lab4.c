#include<stdlib.h>
int main()
{
	int x,y,z;
	printf("Enter Binary Numbers :\n" );
	scanf("%d %d",&x,&y);
	
	printf("\nAND GATE: ");
	z=x&&y;
	printf("\n%d && %d = %d ",x,y,z);
	
	printf("\nOR GATE: ");
	z=x||y;
	printf("\n%d || %d = %d ",x,y,z);
	
	printf("\nNOT GATE: ");
	z=!(x==y);
	printf("\n%d ! %d = %d ",x,y,z);
	
}





