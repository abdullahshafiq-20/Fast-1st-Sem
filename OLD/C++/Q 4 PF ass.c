#include <stdio.h>
int main()
{
    int age,string,y,add=0,i,mod,ver;
    printf("\nEnter your Verification code: ");
    scanf("%d",&ver);
    printf("Enter Gender (M/F) : ");
    char gender;
    scanf("\n%c",&gender);
    switch (gender)
    {
    case 'M':
        printf("Enter your string NUMBER: ");
        scanf("%d",&string);
        printf("Enter your Age: ");
        scanf("%d",&age);
        string=string+(age+1);
        /*printf("%d",string);*/
        for (i=0; i<=string; i++)
        {
            y=string%10;
            /*printf("\n%d",y);*/
            if(y==0)
            {
            	string=string+1;
			}
			else
			{
				string=string/10;
                add=add+y;
			}
        }
        /*printf("\nSum: %d",add);*/
            mod=add%5;
        /*printf("\nCode: %d",mod);*/
        if(mod==ver)
            {
            printf("\a\n\n\t*****Verification Completed*****");
            }
        else
            {
                printf("Verification Denied");
            }
    break;
    
    case'F':
    	printf("Enter your string NUMBER: ");
        scanf("%d",&string);
        printf("Enter your Age: ");
        scanf("%d",&age);
        string=string+(age+0);
        printf("%d",string);
        for (i=0; i<=string+1; i++)
        {
            y=string%10;
            /*printf("\n%d",y);*/
            if (y==0)
            {
            	string=string+1;
			}
			else
			{
				string=string/10;
                add=add+y;
			}
        }
        /*printf("\nSum: %d",add);*/
        mod=add%5;
        /*printf("\nCode: %d",mod);*/
        if(mod==ver)
            {
            printf("\a\n\n\t*****Verification Completed*****");
            }
        else
            {
            printf("\a\n\n\t*****Verification Denied*****");
            }	
    }
}









