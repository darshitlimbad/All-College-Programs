#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[2][3][3] , i , j , k ,esum=0 , osum=0;

	clrscr();
	printf("enter val:\n");

	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			for(k=0 ; k<3 ; k++)
			{
			   printf("arr[%d][%d][%d] = ",i,j,k);
			   scanf("%d",&arr[i][j][k]);
			}

		}
	}
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			for(k=0 ; k<3 ; k++)
			{
				if(arr[i][j][k]%2=0)
					esum+=arr[i][j][k];
				else
					osum+=arr[i][j][k];
			}
		}
	}

	printf("odd sum : %d",osum);
	printf("even sum : %d",esum);
	printf("");
	getch();

}