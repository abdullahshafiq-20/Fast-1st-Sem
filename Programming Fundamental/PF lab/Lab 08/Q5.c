#include<stdio.h>
int main()
{
	int i,j,id;
	float score=0;
	char ch[100];
	printf("Enter your ID: ");
	scanf("%d",&id);
	printf("\nEnter Your Answer: ");
	for (i=0;i<20;i++)
	{
		scanf("%c",&ch[i]);
	}
	printf("%d ",id);
	for (i=0;i<20;i++)
	{
		if(ch[i]=='T')
		{
			printf("%c",ch[i]);
			score=score+1;
		}
		else if (ch[i]=='F')
		{
			printf("%c",ch[i]);
		}
		else if (ch[i]=='\x20')
		{
			printf(" ");
		}
	}
	printf("\nYour Score Out of 10 is :%.1f",score);
	float per;
	per=(score/10)*100;
	printf("\n%f",per);
	if (per>0||per<59.99)
	{
		printf("\nyour grade is: F");
	}
		else if (per>60||per<69.99)
	{
		printf("\nyour grade is: D");
	}
		else if (per>70||per<79.99)
	{
		printf("\nyour grade is: C");
	}
		else if (per>80||per<89.99)
	{
		printf("\nyour grade is: B");
	}
		else if (per>89.99)
	{
		printf("\nyour grade is: A");
	}

}






