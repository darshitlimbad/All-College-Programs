//Factorial of number
#include<stdio.h>
#include<conio.h>

int find_factorial(int n);

void main()
{
	int num ,i;
	unsigned long int factorial;
	clrscr();
	printf("enter your desired val for n(limit):\n");
	scanf("%d",&num);
	for(i=1;i<=40;i++)
		printf("-");

	factorial=find_factorial(num);
	printf("\nFactorial of %d number is : %lu",num,factorial);
	getch();
}

int find_factorial(int n)
{
	//coz factorial of 0 is always '1'
	if(n==0)
		return 1;
	else
		return n * find_factorial(n-1);

}