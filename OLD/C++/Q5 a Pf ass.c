#include <stdio.h>
int main()
{
	int qnt,cost,time_day,time_hour,x;
    printf("\n\t***In 1-hr 50 ice creams can be prepared(60RS/= per)");
	printf("and Machine will only be run for 8-hr per day.***\n"); 
	printf("\t***In one day only 400 ice creams can be made.***\n");
	printf("\t***For Machine to run 16-hr a day the Cost would be doubled i-e 120RS/=.***\n");
	printf("\nEnter a Quantity Of ICE-CREAM: \n");
	scanf("%d",&qnt);
	printf("Select Type (8/16)\n");
	int run;
	scanf("\n%d",&run);
	
	switch (run)
	{
		case 8:
			cost=qnt*60;
			printf("The Total cost of %d ice-creams is:%d",qnt,cost);
			time_day=qnt/400;
			x=qnt%400;
			time_hour=x/50;
			printf("\n%d Days and %d Hours are required",time_day,time_hour);
		break;
		case 16:
			cost=qnt*120;
			printf("The Total cost of %d ice-creams is:%d",qnt,cost);
			time_day=qnt/800;
			x=qnt%800;
			time_hour=x/50;
			printf("\n%d Days and %d Hours are required.",time_day,time_hour);		
	}	
}





