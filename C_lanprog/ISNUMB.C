#include<stdio.h>
#include<conio.h>

void main()
{
	char num;
	clrscr();
	loop:
	{
		printf("\nenter a number :");
		scanf("%c",&num);

		if(isdigit(num))
		{
			printf("%c is a number.",num);
		}
		else
		{
			printf("%c is not a number.",num);
			goto loop;
		}
	}
	getch();
}