#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,temp;

	// clrscr();

	printf("enter your desired val for n(limit):\n");
	scanf("%d",&n);

	for(i=1 ; i<=n ; i++)
	{
		temp=0;
		for(j=2 ; j*j<=i ; j++)
		{
			if(i%j==0)
			{	temp=1;
				break;
			}
		}
		if(temp==0)
			printf("\t%d\t",i);
	}
	getch();
	return 0;
}