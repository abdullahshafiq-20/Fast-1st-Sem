#include<stdio.h>

void uppercase(char ch[])
{
	int uppercase=0;
		for (int i=0;i<strlen(ch)-1;i++)
	{
		if(ch[i]>=97&&ch[i<=122])
		{
		uppercase=ch[i]-32;
		printf("%c",uppercase);			
		}
		else printf("%c",ch[i]);
	}

}
int main()
{
	char ch[20];
	printf("Enter lower case alphabets: ");
	fgets(ch,sizeof(ch),stdin);
	uppercase(&ch[0]);	
}
