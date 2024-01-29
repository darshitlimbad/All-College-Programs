//series no.3 -0,2,6,12
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,a=0;
	clrscr();
	printf("enter your desired val for n(limit):\n");
	scanf("%d",&n);

	for(i=1 ; i<=n ; i++)
	{
		printf("\t %d \t",a);
		a=(i*i+i);
	}
	getch();
}