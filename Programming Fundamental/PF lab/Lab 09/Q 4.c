#include<stdio.h>
void deblank(char a[0])
{
	
    int i,j,k, temp;
    for(i=0;i<15;i++)
    {
        for(j=i+1;j<15;j++)
        {
            if(a[i]==' ')
                {   
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
        }
    }
    for(k=0;k<15;k++)
    {
        printf("%c", a[k]);
    }
}
	

int main()
{
	char a[15];
	printf("Enter String:");
	fgets(a,sizeof(a),stdin);
	deblank(a);
	
}




