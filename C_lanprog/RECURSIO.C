#include<conio.h>
#include<stdio.h>

int fun(int n);
void main()
{
	int n,sum;

	printf("enter val of n :");
	scanf("%d",&n);
	sum=fun(n);
	printf("sum=%d",sum);
}

int fun(int n)
{
	if(n==0)
		return 1;

	else
		return 1+fun(n-1);
}