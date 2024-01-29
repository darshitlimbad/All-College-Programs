//fibonacci series -> 0 1 1 2 3 5...
void main()
{
	int n,i,first_num=0,second_num=1,next_num;

	clrscr();
	printf("enter your desired val for n(limit):\n");
	scanf("%d",&n);

	for(i=0 ; i<=n-1 ; i++)
	{
		if(i<=1)
		{
			next_num=i;
			printf("\t%d\t",next_num);
		}
		else
		{
			next_num=first_num + second_num	;
			first_num = second_num;
			second_num=next_num;
			printf("\t%d\t",next_num);
		}
	}
	getch();
}