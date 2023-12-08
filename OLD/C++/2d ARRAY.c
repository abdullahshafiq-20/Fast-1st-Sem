int main(int argc, char *argv[])
{
int a[][2]={{1,2},{2,3},{3,4}};
int b[3][3]={{1,2},{2,3},{3,4}};
//int b1[][3]={{1,2},{2,3},{3,4}};
for (int i=0; i<=2; i++)
{
for (int j=0; j<2; j++)
printf("%d ",a[i][j]);
printf("\n");
}
}