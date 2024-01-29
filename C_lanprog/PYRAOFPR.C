void main()
{
	int i,j,temp , space ,k=0  ;

	int prime_num[18],*store;

	clrscr();
	store=prime_num;

	for(i=1 ; i<=43 ; i++)
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
		  {
			printf("\t%d\t",i);
			*store++=i;
			//store++;
		  }
	}

	for(temp=1 ; temp<=40 ; temp++)
		printf("-");
	printf("\n");

	for(i=1 ; i<=5 ; i++)
	{
		for(space=5 ; space>=i ; space--)
		{
			printf("   ");
		}
		for(j=1 ; j<=i ; j++)
		{	printf(" %d   ",prime_num[k]);
			k++;

		}
		printf("\n");
	}

	getch();
}
//@darshit_limbad