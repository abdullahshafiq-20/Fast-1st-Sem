#include <stdio.h>
int main()
{
	
	int i,y=1,x,sum=0,x1;
	
	scanf("%d",&x);
	x1=x;
	for (i=0;i<=x;i++)
	{	
		if (x%y==0)
		{
		printf("%d\n",y);
		x=x/y;
		sum=sum+y;
	    }
		y=y+1;
	}
	
	printf("\n%d sum",sum);
    if(sum==x1)
    printf("\n%d is perfect Number",x1);
    else
    printf("\n%d is not perfect Number",x1);
	
	
	
	
	
	
}