#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[3][3] , brr[3][3] , i , j , res[3][3];
	clrscr();

	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n\n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("brr[%d][%d]:",i,j);
			scanf("%d",&brr[i][j]);
		}
	}

	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			res[i][j]=arr[i][j]+brr[i][j];
			printf("\nres[%d][%d]:%d",i,j,res[i][j]);
		}
	}

	getch();
}