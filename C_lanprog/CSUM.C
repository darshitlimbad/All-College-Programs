#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[3][3],i,j,sum[3];

sum[0]=0;sum[1]=0;sum[2]=0;

	clrscr();
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
		printf("arr[%d][%d]:",i,j);
		scanf("%d",&arr[i][j]);
sum[i]+=arr[i][j];
		}
	}

	printf("column sum is sum1:%d\t sum2:%d \tsum3:%d",sum[0],sum[1],sum[2]);

	getch();
}
