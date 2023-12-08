#include<stdlib.h>
int main()
{
	int x,f,l,sum;
	
	printf("input 4 digit number:");
	scanf("%d",&x);
	
	l=x%10;
	f=x/1000;
	sum=l+f;
	printf("%d\n %d\n Sum Is %d\n",f,l,sum);
	
	
	
	
	
	
	
	
	
	
}