#include<stdio.h>

main()
{
	int a;
  char h,l,g;

printf("Enter Heath  ");
scanf("%c",&h);
printf("Enter Location  ");
scanf("\n%c",&l);
printf("Enter Gender  ");
scanf("\n%c",&g);
printf("Enter Age ");
scanf("\n%d",&a);
   if((h=='excellent')&&(l=='c')&&(g=='m')&&(a>=25||a<=35))
   printf("\npremium is 4 policy cannot exceed 2 lakh");
       else
	   if((h=='excellent')&&(l=='c')&&(g=='f')&&(a>=25||a<=35))
       printf("\npremium is 3 policy cannot exceed 1 lakh");
          else
		  if((h=='p')&&(l=='v')&&(g=='m')&&(a>=25||a<=35))
          printf("\npremium is 6 policy cannot exceed 10,000");
            else
            printf("\n not Insured");


}

