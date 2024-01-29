#include<stdio.h>
#include<conio.h>

void main()
{
	int i , j , start=1 , store=2 ;
	clrscr();
	for(i=1 ; i<=5 ; i++)
	{
		for(j=1 ; j<=i ; j++)
		{
			if(j==2)
				store=start;
			printf(" %d ",start++);
		}
		printf("\n");
		start=store;
	}
	getch();
}