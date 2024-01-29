#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[3][3],i,j , odd=0 , even=0;
	clrscr();
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
		printf("arr[%d][%d]:",i,j);
		scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
		if(arr[i][j]%2==0)
		even+=arr[i][j];

		else
		odd+=arr[i][j];
		}
	}
	printf("\neven sum is :%d",even);
	printf("\nodd sum is :%d",odd);



}