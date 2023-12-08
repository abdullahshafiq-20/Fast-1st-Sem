#include <stdio.h>
int main()
{
	int num,i;
	float p1=0,p2=0,p3=0,p4=0,p5=0;
	
	int a;
	printf("\nhow many Numbers you will enter: ");
	scanf("%d",&num);

	for (i=0;i<num;i++)
	{
		printf("\nEnter Numbers: ");
		scanf("%d",&a);
		if (a<200)
		{
			p1=p1+1;
			
		}
		else if ((a>=200)&&(a<=399))
		{
			p2=p2+1;
		}
		else if ((a>=400)&&(a<=599))
		{
			p3=p3+1;
		}
		else if ((a>=600)&&(a<=799))
		{
			p4=p4+1;
		}
		else if (a>800)
		{
			p5=p5+1;
		}
	}
    float per1,per2,per3,per4,per5;
	 per1=p1/num*100;
	 per2=p2/num*100;
	 per3=p3/num*100;
	 per4=p4/num*100;
	 per5=p5/num*100;
	printf("\npercentage of integer in p1:%.1f",per1);
	printf("\npercentage of integer in p2:%.1f",per2);
	printf("\npercentage of integer in p3:%.1f",per3);
	printf("\npercentage of integer in p4:%.1f",per4);
	printf("\npercentage of integer in p5:%.1f",per5);	
}
















