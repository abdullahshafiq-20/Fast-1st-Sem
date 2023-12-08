#include <stdio.h>
int main()
{
	int r1,r2,r,p1,p2,i,x,p;
	float f;
	printf("\nEnter number you want to run the calculator:");
	scanf(" %d",&x);
    do{
    int i=1;
    printf("\nEnter amount1(R/P): \n");
    scanf("%d",&r1);
    scanf("%d",&p1);
    printf("Enter amount2(R/P): \n");
    scanf("%d",&r2);
    scanf("%d",&p2);
    r=r1+r2;
    p=p1+p2;
    if (p>=100)
    {
        r=r+1;
        p=p-100;   
	}
    printf("\nTotal AMOUNT:%d-%d",r,p);	
	}while (i<x);
}














