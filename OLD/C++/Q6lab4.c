#include <stdio.h>

int main() 
{   
    float h,m,s,y,w,d;
    printf("Hours: ");
    scanf("%f",&h);
    printf("Years: ");
    scanf("%f",&y);
   
    m=h*60;
    s=h*3600;
    w=y*52.143;
    d=y*356;
    printf("\nMINUTES: %.1f",m);
	printf("\nSECONDS: %.1f",s);
	printf("\nWEEKS: %.1f",w);
	printf("\nDAYS: %.1f",d);   
   
}











