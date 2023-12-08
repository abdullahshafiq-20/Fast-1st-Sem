#include<stdio.h>

int main(int argc, char *argv[]) {
int *a1;
a1=Shahbaz();
for (int i=0; i<=3; i++)
printf("%d\n",*(a1++));
return 0;
}
int Shahbaz()
{
static int a[10]={1,2,3,4};

return &a[0];
}