#include <stdlib.h>
int main()
{
    float m,u,i,p,e;
    printf("Marks of MATH : ");
    scanf("%f",&m);
    printf("Marks of URDU : ");
    scanf("%f",&u);
    printf("Marks of ISL : ");
    scanf("%f",&i);
    printf("Marks of PAK STUDIES : ");
    scanf("%f",&p);
    printf("Marks of ENGLISH : ");
    scanf("%f",&e);
    float sum=m+u+i+p+e;
    float sum1=sum/500;
    float sum2=sum1*100;
    printf("%.1f",sum2);
}




