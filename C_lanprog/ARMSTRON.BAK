//Palindrome

#include<stdio.h>
#include<conio.h>

void main()
{
	int num , temp , rem , sum=0 ;
	clrscr();

	printf("enter your desired val for num(limit):\n");
	scanf("%d",&num);

	temp=num;

	while(temp!=0)
	{
		rem=temp % 10 ;
		sum = sum + rem * rem *  rem;
		temp /= 10 ;
	}

	if(num == sum)
		printf("num %d is Armstrong.",num);

	else
		printf("num %d is not Armsrong.",num);

	getch();
}