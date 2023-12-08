#include<stdio.h>
struct phone
{
	int a_code,ex,num;	
};
int main()
{
	struct phone a;
	printf("Enter Area Code:");
	scanf(" %d",&a.a_code);
	printf("Enter Exchange:");
	scanf(" %d",&a.ex);
	printf("Enter Numbner:");
	scanf(" %d",&a.num);
	printf("My Number is: (212) 767-8900");
	printf("\nYour Number is: (%d) %d-%d",a.a_code,a.ex,a.num);
}




