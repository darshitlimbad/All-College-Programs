//fibonacci series -> 0 1 1 2 3 5...
#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,print=0,num1=0,num2=1;

	// clrscr(); 
	printf("enter your desired val for n(limit):\n");
	scanf("%d",&n);

	for(i=0 ; i<=n-1 ; i++)
	{
		printf("%d \t" , print);

		num1 = print;
		print+=num2;
		num2=num1;
	}
	getch();
	return 0;
}