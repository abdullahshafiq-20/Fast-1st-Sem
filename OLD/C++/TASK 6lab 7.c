#include <stdio.h>

int main()
{
	int a,s=100,sm,st,t,i;
	printf("Enter Sara's age : \n");
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	{
		if (i%2==0)
		{
			s=s+200-30;
			sm=sm+s;
			
		}
		else{
			st=st+130;
		}
	}
	printf("%d",sm);
	t=st+s;
	printf("\n%d",t);
	if (t>=10000)
	{
		printf("you can buy a washing machine");
	}
	else
	{
		printf("Wait more years or take money back from your brother");
	}

	
}
