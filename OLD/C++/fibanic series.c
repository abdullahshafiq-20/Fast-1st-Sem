#include<stdio.h>
int main()
{

    int x,y,z,i,n;
    x=0; y=1;
    printf("Number of fibonacci series: ");
    scanf("%d",&n);
    printf("%d %d",x,y);
    for (i=2; i<=n; i++)
    {
    	z=x+y;
    	x=y;
    	y=z;
    	printf(" %d",z);
    		
	}

}