#include <stdlib.h>
int main()
{
	int x,st,t,cs,it;
	printf("Enter Amount:");
	scanf("%d",&x);
	if (x>0&&x<=30000)
	{
		cs=x*0.1;
		printf("%d Custom Sales: ",cs);
		st=x*0.2;
		printf("%d Sales tax: ",st);
		printf("No income tax");
	    t=cs+st;
	    printf("%d total tax",t);
	    
	}
	else
	{
		if(x>=30001&&x<=50000)
		{
		cs=x*0.4;
		printf("%d Custom Sales: ",cs);
		st=x*0.4;
		printf("%d Sales tax: ",st);
		printf("No income tax");
	    t=cs+st;
	    printf("%d total tax",t);
		}
		else
		{
			if(x>=50001&&x<=75000)
			{
			    cs=x*0.8;
		        printf("%d Custom Sales: ",cs);
		        st=x*0.5;
		        printf("%d Sales tax: ",st);
		        it=x*0.3;
	 	        printf("%d income tax",it);
	            t=cs+st+it;
	            printf("%d total tax",t);	
			}
	            else
	            {
	            cs=x*0.15;
		        printf("%d Custom Sales: ",cs);
		        st=x*0.12;
		        printf("%d Sales tax: ",st);
		        it=x*0.6;
	 	        printf("%d income tax",it);
	            t=cs+st+it;
	            printf("%d total tax",t);
				}
					
		}
		
		
	}
	
	
	
	
}