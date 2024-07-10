//series no.1 -1,2,4,7
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,a=1,b=1,n;
	// clrscr();

	printf("enter your desired val for n(limit):\n");
	scanf("%d",&n);


	for(i=1 ;i<=n; i++)
	{
		printf("\t %d \t",a);
		a=a+b;
		b++;
	}
	// getch();
	return 1;
}