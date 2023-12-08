int main()
{
	int x, y, fact=1, a=1;
	scanf("%d", &x);
	int b=x;
	for(int i=0;x!=0;i++)
	{
		y=x%10;
	for(int j=y;j>=1;j--)
	{
		fact=fact*j;	
	}
	x=x/10;
	a=a+fact;
	fact=1;
	}
	a=a-1;
	if(a==b)
	{
		printf("true");
	}
	else 
	printf("false");
	
}
	
