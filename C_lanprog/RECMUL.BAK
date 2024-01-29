#include<conio.h>
#include<stdio.h>

int fun(int n);
void main()
{
	int n,mul;
	clrscr();
	printf("enter val of n :");
	scanf("%d",&n);
	mul=fun(n);
	printf("\nmul=%d",mul);
	getch();
}

int fun(int n)
{
	if(n==1)
		return n ;

	else
		return n*fun(n-1);
}