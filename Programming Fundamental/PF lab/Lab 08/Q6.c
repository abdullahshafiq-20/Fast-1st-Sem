#include<stdio.h>
int main()
{
	int store1=0,store=0,i,j,sum=0,num;
	int temp1[6];
	int temp2[6];
	int a[]={4,2,0,3,2,5};
	int b[]={4,2,0,3,2,5};
	printf("Enter a number of Blocks: ");
	scanf("%d",&num);
	/*int a[num],b[num];
	for (i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}*/
	for (i=0;i<1;i++)
	{
		for( j=0;j<num;j++)
		{
			if ((a[i]>a[j])||(a[i]=a[j]))
			{
				printf("%d",a[i]);
				temp1[j]=a[i];
			}
			else if (a[j]>a[i])
			{
				printf("%d",a[j]);
				temp1[j]=a[i];
			}
		}
	}
		printf("\n");
	for ( i=num-1;i>num-2;i--)
	
	{
		for( j=num;j>0;j--)
		{
			if ((a[i]>a[j])||(a[i]=a[j]))
			{
				printf("%d",a[i]);
				temp2[j]=a[i];
			}
			else if (a[j]>a[i])
			{
				printf("%d",a[j]);
				temp2[j]=a[i];
			}
		}		
	}       
	for (i=0,j=num;i<num,j>0;i++,j--)
	{
		if (temp1[i]<=temp2[j])
		{
			store=temp1[i]-b[i];
			sum=store+sum;
			printf("\n%d",store);
		}
	}
	printf("\nsumIS %d",sum);
}





