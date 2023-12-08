#include<stdio.h>
int main()
{
    int i;
    int x=1;
    int n;
    printf("Enter a number to find factorial: ");
    scanf("%d",&n);
	if (n>0)
	{
		for(i=1;i<=n;i++)
		{
			x=x*i; 
		}
		printf("Factorial of %d is: %d",n,x);   
	} 
    else if (n<=0)
	{
        printf("enter non negative number");
	}
}







