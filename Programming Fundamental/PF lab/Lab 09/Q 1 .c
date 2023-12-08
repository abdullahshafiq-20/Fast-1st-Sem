#include<stdio.h>
#include<math.h>
void function(int time,float dis,float speed)
{
	float deptime;
	deptime=dis/speed;
	printf("%.1f",round(deptime));
	int rqtime=round(deptime)+time;
	printf("\nYou need to Leave at %d ",rqtime);
}
int main()
{
	int time,dis,speed;
	printf("Enter time:");
	scanf("%d",&time);
	printf("\nEnter Distance:");
	scanf("%d",&dis);
	printf("\nEnter Speed:");
	scanf("%d",&speed);
	 function(time,dis,speed);
	
}





