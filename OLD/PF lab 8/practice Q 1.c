#include<stdio.h>
int main()
{
	char a[100];
	char b[100];
	int i=0,j=0,temp=0,k=0;
	scanf("%s",a);
	int d=strlen(a);
	int count=0,count1=0,count2=0;
	for (i=0;i<=d;i++)
	{
		for (int j=i+1;j<d;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for (int i=0,j=i+1,k=j+1;i<d,j<d,k<=d;i++,j++,k++)
	{
		if ((a[i]==a[j])&&(a[i]==a[k]))
		{
			continue;
			count1++;			
	   }
			printf("%c",a[i]);
			count2++;		
	}
	count=count1+count2+1;
	printf("\n%d",count);
		
}
		
		
	
	
	
	
	

