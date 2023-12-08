#include<stdio.h>
int main()
{
    int a[4]={2,7,11,15};
	int i=0;
	int target=9;
	for (i=0;i<4;i++)
	{
		for (int j=i+1;j<4;j++)
		{
			if (a[i]+a[j]==9)
			printf("%d,%d",a[i],a[j]);
		}
	}

}