#include <stdio.h>
int main()
{
	int x,i,y=10,num,k;
	scanf("%d",&num);
	for (i=0;i<num+1;i++)
	{
	    		
	    x=num%y;
	    if(x==0)
	    {
	    	x=x+1;
		}
		else
		{
		printf("\n%d",x);
        num=num/y;
		}


    }
}





