#include<stdio.h>
void reverse(char a[],int size)
{
	int i=0,temp=0;
	for (i=0;i<=size;i++)
	{
		for (int j=i+1;j<size;j++)
		{
			if (a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for (int i=0;i<size;i++)
	{
		printf("%c",a[i]);	
	}	
}
int main()
{
	char a[20];
	printf("enter Code:");
	scanf("%s",a);
	int size=strlen(a);
	reverse(&a[0],size);	
}