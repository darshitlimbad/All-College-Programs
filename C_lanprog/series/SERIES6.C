//series no.6 -1,2,4,8.....
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	unsigned long int a=1;
	clrscr();

	printf("enter your desired val for n(limit):\n");
	scanf("%d",&n);
	for(i=1;i<=80 ;i++)
		printf("-");

	printf("\n");

	for(i=1 ;i<=n; i++)
	{
		printf("\t %lu \t",a);
		a*=2;
	}
	getch();
}