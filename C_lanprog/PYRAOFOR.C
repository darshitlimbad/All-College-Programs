void main()
{
	int n,i,j, space, row , temp ;

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
		  for(space=5 ; space>=1 ; space--)
			{
				printf(" - ");
			}
		  if(temp==0)
		  {


			for(row=1 ; row<=5 ; row++)
			{
				printf(" %d ",i);
			}
			printf(" - \n");

		  }

	}

	getch();
}