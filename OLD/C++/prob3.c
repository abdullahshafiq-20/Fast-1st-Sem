#include <stdlib.h>
int main()
{

int a,c,sum=0;
printf("insert");
scanf("%d",&a);


for(int i=1;i<4;i++)
{
	int b=a%10;
	printf("the numbers are: %d\n",b);
	
	sum=sum+b*b*b;
	a=a/10;
}
   printf("\nthe sum of thier cube is %d",sum);
   if (sum==a)
   {
   printf( "\n the number is cubiod");
   }
   else {
   	printf("the number is not a cubiod");
   }

   
   
   
 return 0;  
}