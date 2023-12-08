int main() 
{

   char c;
   printf("Iput Character:\n");
   scanf("\n%c",&c);
   printf("%c",c);
   char s;
   printf("Input String:");
   scanf("%s",s);
   printf("%s",s);
   char str;
   printf("Input Sentence:");
   fgets(str,sizeof(str),stdin);
   printf("%s",str);
    return 0;
}