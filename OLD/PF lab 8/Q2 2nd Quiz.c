#include<stdio.h>

void function(char a[],char b,int num)
{
	int sum=0;
	for(int i=0;i<num;i++)
	{
		if (a[i]==b)
		{
			/*printf("%d",a[i]);*/
			sum=sum+1;
		}
	}
	printf("the frequency of %c is %d ",b,sum);
}
int main()
{
	char a[100];
	char freq[]={"rr"};
	fgets(a,sizeof(a),stdin);
	function(&a[0],freq[0],sizeof(a));
}
