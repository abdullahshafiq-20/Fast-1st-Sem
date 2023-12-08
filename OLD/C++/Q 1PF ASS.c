#include<stdio.h>
#include<math.h>
int main()
{
	int lsd,n,i;
	printf("\nEnter LSD as (0 <= LSD > 4)");
	scanf("%d",&lsd);
	if ((lsd>0)&&(lsd<4))
	{
		n=lsd*2;
		printf("\nLSD: %d",n);
	}
	else if (lsd==0)
	{
		n=(lsd*4)+3;
		printf("\nLSD: %d",n);
	}
	for (i=0;i<n;i++)
	{
		int x1=1,y1=3,x2,y2;
		float d;
		printf("\nEnter your co-ordinates(x,y): \n");
		scanf("%d %d",&x2,&y2);
		d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
		printf("\nThe distance is: %.1f",d);
	}	
}






