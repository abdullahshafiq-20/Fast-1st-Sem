#include<stdio.h>
struct amount
{
	int ni;  
	char in[20];
    int price,qauntity,nf,total;
	float div;
};
int main()
{
	struct amount a,b;
	int i=0;
	printf("Enter Number Of Items:");
	scanf(" %d",&a.ni);
	printf("Enter Number Of Friends:");
	scanf(" %d",&a.nf);
	for ( i=0;i<a.ni;i++)
	{
	printf("Enter Item Name:");
	scanf(" %s",a.in);
	printf("Enter Price:");
	scanf(" %d",&a.price);
	printf("Enter Quantity:");
	scanf(" %d",&a.qauntity);
	}
	a.total=a.total+a.qauntity*a.price;
	b.div=(float)a.total/a.nf;
	printf("\nTotal Amount:%d",a.total);
	printf("\nPrice Divided Equally:%f",b.div);	
}








