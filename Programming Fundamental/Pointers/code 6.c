char* Shahbaz();
int main(int argc, char *argv[]) {
char (*a1)[0][100]=Shahbaz();
for (int i=0; i<10; i++)
{
printf("%c\n",*a1[0][i]);
}
}
char* Shahbaz()
{
static char a[2][100]={"shahbaz","atif"};

return &a[0];
}