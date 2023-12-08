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

    a=a+1;
    b=b+1;
    c=c+1;
    d=d+1;
    e=e+1;
   
   printf("%d%d%d%d%d",e,d,c,b,a);
}