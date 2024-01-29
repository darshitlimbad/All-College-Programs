#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[3][3],i,j;
	clrscr();
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
		printf("enter val for arr[%d][%d]:",i,j);
		scanf("%d",&arr[i][j]);
		}
	}
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		printf("\narr[%d][%d]:%d",i,j,arr[i][j]);
	}

	getch();
}