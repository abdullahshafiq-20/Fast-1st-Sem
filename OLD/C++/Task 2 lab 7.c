#include<stdio.h>
int main()
{
	int i,days,up1=0,up=0,tp1=0,tp2=0,tp3=0,np,tp=0,x;
	printf("enter number of days:");
	scanf("%d",&days);
	for (i=1;i<=days;i++)
	{
		printf("\nNumber of patients:");
		scanf("%d",&np);
		if (i==3)
		{
			if(tp<up)
			{
				printf("\nNew Dr Appionted");
			}	
		}
		else if(np>7)
		{
			up=np-7;
			up1=up1+up;
			tp1=tp1+7;
			/*printf("untreated \n%d",up);*/
		}
		else if (np==7)
		{
			tp2=tp2+7;
			/*printf("treated %d",tp);*/
		}
		else if(np<7)
		{
			tp3=tp3+np;
			/*printf("treated%d",tp3);*/
		}

	}
		printf("\nUntreated Patients are:%d",up1);
	printf("\nTreated patients are:%d",tp=tp1+tp2+tp3);	
}























