#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[3][3],i,j,sum1=0,sum2=0,sum3=0;
	clrscr();
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
		printf("arr[%d][%d]:",i,j);
		scanf("%d",&arr[i][j]);
		}
	}
	for(j=0 ; j<3 ; j++)
	{
		for(i=0 ; i<3 ; i++)
		{
			if(j==0)
			sum1+=arr[i][j];

			else if(j==1)
			sum2+=arr[i][j];

			else
			sum3+=arr[i][j];

		}
	}

	printf("column sum is sum1:%d\t sum2:%d \tsum3:%d",sum1,sum2,sum3);

	getch();
}
