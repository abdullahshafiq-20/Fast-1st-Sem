#include<stdlib.h>
int main()	
	{
    int num,i,sum=0,y=1;
    printf("enter a possitive integer");
    scanf("%d",&num);
    
    for (i=1; i<num; ++i)
    {
    	if(num%y==0)
    	{
    		printf("%d\n",y);
    		sum=sum+y;
    		
		}
    	y=y+1;
    	
    	
    	
    	
	}
		printf("%d",sum);
		if(sum==num)
		{
			printf("number is perfect");
		}
		else{
			printf("not a cuboid");
		}
		
		
		
		
		
		
		
	}
	
	
	
	
	
