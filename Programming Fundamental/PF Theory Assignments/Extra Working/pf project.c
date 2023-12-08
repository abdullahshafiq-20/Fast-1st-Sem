#include <stdio.h>
#include <string.h>
#define d 10
void rabinKarp(char sub_string[], char main_string[], int q) 
{
    //Finding length of both strings
    int m = strlen(sub_string);
    int n = strlen(main_string);
    int i, j, p=0, t=0, h=1;
    for (i = 0; i < m - 1; i++)
    {
  	  h = (h * d) % q;
    }
    // Calculating hash value for main and sub strings
    for (i = 0; i < m; i++)
    {
       p = (d * p + sub_string[i]) % q;
       t = (d * t + main_string[i]) % q;
    }
    // Finding the match
    for (i = 0; i <= n - m; i++) 
	{
        if (p == t) 
		{
            for (j = 0; j < m; j++)
		   {
             if (main_string[i + j] != sub_string[j])
             break;
           }
           if (j == m)
           printf("Pattern is found at position %d onwards \n", i);
       }
       if (i < n - m) 
	   {
          t = (d * (t-main_string[i] * h) + main_string[i + m]) % q;
		  if (t < 0)
          t = (t + q);
       }
    }
}

int main() {
  char main_string[50];
  printf("*****--------RABIN KARP ALGORITHM---------*****\n");
  printf("Enter main string\n");
  scanf("%s",&main_string);
  char sub_string[25];
   printf("Enter sub string\n");
  scanf("%s",&sub_string);
	printf("Main string\n");
	puts(main_string);
	printf("\n");
	printf("Sub string\n");
	puts(sub_string);
  int q = 13;
  rabinKarp(sub_string,main_string, q);
}
