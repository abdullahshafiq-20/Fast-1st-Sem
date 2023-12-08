#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *p;
    p=(char*)malloc(sizeof(char));
    scanf("%s",p);
    for(int i=0;i<sizeof(p)-1;i++)
    {
        /*for (int j=sizeof(p)-1;j>=i;j--)
        {
            printf(" ");
        }*/
        for (int k=0;k<i;k++)
        {
            printf(" %c",p[k]);
        }
        printf("\n");
    }

}