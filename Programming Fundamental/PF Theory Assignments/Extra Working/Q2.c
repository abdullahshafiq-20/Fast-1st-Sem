#include<stdio.h>
#include<string.h>

int main()
{
	int i,m,k;
	char id[10],string[500],vowel[4]="way",words[50][500];
	int l,cnt=0;
	printf("Enter your ID = ");
	gets(id);
	printf("Enter the string you want to be encrypted = ");
	gets(string);
	l=strlen(string);
	int j=0;
	for( i=0;i<l;i++)
    {
        if(string[i]==' '||string[i]=='\0')
        {
        cnt++;
            j=0;
        }
        else
        {
            words[cnt][j]=string[i];
            j++;
        }
    }
    for( i=0; i<cnt+1; i++)
	{
		if(words[i][0]=='A'||words[i][0]=='E'||words[i][0]=='I'||words[i][0]=='O'||words[i][0]=='U'||words[i][0]=='a'||words[i][0]=='e'||words[i][0]=='i'||words[i][0]=='o'||words[i][0]=='u')
		{
			int l2;
			l2=strlen(words[i]);
				words[i][l2]='w';
				words[i][l2+1]='a';
				words[i][l2+2]='y';			
		}
		else
		{
			if(words[i][0]=='s' && words[i][1]=='c' && words[i][2]=='h')
			{
				char temp[100],temp2[100];
				int pos=2,l1;
				l1=strlen(words[i]);
				words[i][1]='k';
				for(m=2;m<l1;m++)
				{
					if(m==l1-1)
					words[i][m]='\0';
					else
					words[i][m]=words[i][m+1];
				}
				l1=strlen(words[i]);
				while(pos)
				   {
				   	temp[0]=words[i][0];
			    	for(k=0;k<l1-1;k++)
				    {
				        words[i][j]=words[i][j+1];
				    }
				    words[i][l1-1]=temp[0];
				    pos--;
					}
					words[i][l1]='a';
					words[i][l1+1]='y';
			}
			else
			{
				char temp[100];
				int pos=2,l1;
				l1=strlen(words[i]);
				while(pos)
				   {
				   	temp[0]=words[i][0];
			    	for(k=0;k<l1-1;k++)
				    {
				        words[i][j]=words[i][j+1];
				    }
				    words[i][l1-1]=temp[0];
				    pos--;
					}
					words[i][l1]='a';
					words[i][l1+1]='y';
			}
			
		}
		
	}
	printf(" %s ", id);
	for(i=0; i<cnt+1; i++)
	{
		printf(" %s ", words[i]);
	}
}
