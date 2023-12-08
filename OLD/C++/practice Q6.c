#include <stdlib.h>

 int main()
 
 {
 	
   int x;
   
   printf("input:");
   scanf("%d",&x);
   
   int a=x%10;
   x=x/10;
   int b=x%10;
   x=x/10;
   int c=x%10;
   x=x/10;
   int d=x%10;
   x=x/10;
   int e=x%10;
   
   int sum;
   sum=a+b+c+d+e;
   printf("%d\n %d\n %d\n %d\n %d\n",a,b,c,d,e);
   printf("Sum is: %d\n",sum);
   printf(" Reverse %d %d %d %d %d",a,b,c,d,e);
 	
 	
 	
 	
 
 	 
	  

 
 

 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }