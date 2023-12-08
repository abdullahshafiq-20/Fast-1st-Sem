#include<stdio.h>

int main()
{
   int x;
   printf("Enter 24-hour format time: ");
   scanf("%d",&x);
   if(x>=5&&x<=11)
   printf("Good Morning");
   else if(x>=12&&x<=18)
   printf("Good Evening");
   else if(x>18&&x<=24)
   printf("Good Night");
    
}




