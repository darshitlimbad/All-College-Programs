void main()
{
	int n,i,j,temp;

	clrscr();

	printf("enter your desired val for n(limit):\n");
	scanf("%d",&n);

	for(i=1 ; i<=n ; i++)
	{
		  temp=0;
		  for(j=2 ; j<=i/j ; j++)
		  {
			if(i%j==0)
			{	temp=1;
				break;
			}
		  }
		  if(temp==0)
			printf("\t%d\t",i);

	}
	getch();
}