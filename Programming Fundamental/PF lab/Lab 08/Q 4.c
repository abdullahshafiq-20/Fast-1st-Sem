#include<stdio.h>
int main()
{
	int i,j,k,count,count1=0,res,hightemp,lowtemp;
	char mon[][10]={"Jan","feb","march","april","may"};
	int temp[][2]={{70,53},{74,56},{78,60},{84,68},{88,73}};
	for ( i=0;i<5;i++)
	{
		printf("\n%s\t",mon[i]);	
		for ( j=0;j<2;j++)
		{
			printf("%d ",temp[i][j]);
		}
		printf("\n");
	}
	for ( i=0;i<5;i++)
	{
		count=count+temp[i][0];
	}
	printf("The Average High temprature:%d",count/5);	
	for ( i=0;i<5;i++)
	{
		count1=count1+temp[i][1];
	}
	printf("\nThe Average Low Temprature:%d",count1/5);
	for (i=0;i<5;i++)
	for (j=0;j<2;j++)
	{
		if(temp[i][0]>temp[j][0])
		{
			 hightemp=temp[i][0];
		}
		else if(temp[i][0]<temp[j][1])
		{
			 lowtemp=temp[j][0];
		}		
	}
	printf("\nThe Highest Temprature is:%d",hightemp);
	printf("\nThe lowest Temprature is:%d",lowtemp);














}
