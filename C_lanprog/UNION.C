#include<stdio.h>
#include<conio.h>

union stud
{
	int a,b;
}s;

void main()
{
	clrscr();
	s.a=10;
		printf("%d\n",s.a);
		printf("%d\n",s.b);

	s.b=20;
		printf("%d\n",s.a);
		printf("%d\n",s.b);
	getch();
}