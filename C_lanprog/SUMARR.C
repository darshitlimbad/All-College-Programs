#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[3][3] , brr[3][3] , i , j , sum[3][3];
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
			sum[i][j]=arr[i][j]+brr[i][j];
			printf("\nsum[%d][%d]:%d",i,j,sum[i][j]);
		}
	}

	getch();
}