#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int Mike_est[4][4];
    int Sophie_est[4][4];
    int i,j,k;
    int task_m[1][2];
    int task_s[1][2];
    int est_m;
    int est_s;
    char sign;
    for (i=0;i<2;i++)
    {
    	printf("Mike:Enter task Number along its Est:");
    	for (j=0;j<2;j++)
    	{

    		scanf("%d",&task_m[i][j]);
		}
	}
	for (i=0;i<2;i++)
    {
    	printf("Sophie:Enter task Number along its Est:");
    	for (j=0;j<2;j++)
    	{
    		scanf("%d",&task_s[i][j]);	
		}
	}
	for (i=0;i<1;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("**round1**\n");
			printf("MIke:Enter task%d revise est:",j);
			scanf("%d",&est_m);
			printf("Add or Subtract:");
			scanf("\n%c",&sign);
			if(sign=='+')
			{
				task_m[0][1]=task_m[0][1]+est_m;
			}
			else if(sign=='-')
			{
				task_m[1][2]=task_m[1][2]-est_m;
			}
						
		}
		printf("\n%d",task_m[0][1]);
		printf("\n%d",task_m[1][2]);
	}
	for (i=0;i<1;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("**round1**\n");
			printf("sophie:Enter task%d revise est:",j);
			scanf("%d",&est_s);
			printf("Add or Subtract:");
			scanf("\n%c",&sign);
			if(sign=='+')
			{
				task_s[0][1]=task_s[0][1]+est_s;
			}
			else if(sign=='-')
			{
				task_s[1][2]=task_s[1][2]-est_s;
			}
							
		}
		printf("\n%d",task_s[0][1]);
		printf("\n%d",task_s[1][2]);

	}	
	
	
	
	



















}