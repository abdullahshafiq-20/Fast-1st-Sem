#include<stdio.h>
int main()
{
    float x,y,sum,sub,mul,div;
    char operator;
    printf("\nEnter Operator: ");
    scanf("%c",&operator);
    printf("Enter 1st Number: ");
    scanf("%f",&x);
    printf("Enter 2nd Number: ");
    scanf("%f",&y);
    
    switch (operator)
    {
    case'+':
    sum=x+y;
    printf("%.1f ADDED",sum);
    break;
    case'-':
    sub=x-y;
    printf("%.1f SUBTRACTED",sub);
    break;
    case'*':
    mul=x*y;
    printf("%.1f MULTIPLYED",mul);
    break;
    case'/':
    div=x/y;
    printf("%.1f DIVIDED",div);
    break;
    }   
}








