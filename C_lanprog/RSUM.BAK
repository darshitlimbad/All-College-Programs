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
		printf("enter val for arr[%d][%d]:",i,j);
		scanf("%d",&arr[i][j]);
		}
	}
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			if(i==0)
			{
				sum1=sum1+arr[i][j];
			}
			else if(i==1)
			sum2=sum2+arr[i][j];

			else
			sum3=sum3+arr[i][j];

		}
	}

	printf("row sum is sum1:%d\t sum2:%d \tsum3:%d",sum1,sum2,sum3);

	getch();
}
