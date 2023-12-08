// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int num,c,i,odd=0,y=0;
    printf("HOW MANY");
    scanf("%d",&num);
    int x[num];
    printf("\nNUMBERS");
    scanf("\n%d",x);
    for (i=0;i<num;i++)
    {
        if(i%2==0)
        {
            y=y+x[i];
            printf("\nEVEN%d",y);
        }else 
        {
            odd=odd+x[i];
            printf("\nODD%d",odd);
        }
    }
    
   
}
	
	
	
	
	
