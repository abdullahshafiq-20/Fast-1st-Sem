#include <stdio.h>
#include <string.h>
int main()
{
	int i=0;
	int b;
	char a[20];
	fgets(a,sizeof(a),stdin);
	int d=strlen(a);
	for (i=0;i<d-1;i++)
	{
		if(a[i]==' ')
		{
			printf("%c%c",a[i-2],a[i-1]);
			b=a[i-2];
		}
		
	}
	for (i=1;i<;i++)
	{
		printf("%c",a[i]);
	}
	
	
	
}