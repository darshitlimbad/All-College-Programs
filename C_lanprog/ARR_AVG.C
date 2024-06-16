#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[10],i ,sum=0 , temp;
	// clrscr();
	//initializing array by loop
	for(i=0 ; i<10 ; i++)
	{
		printf("enter val for arr[%d]:",i);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];

		printf( "%d",sizeof(arr));
	}

	temp= sizeof(arr) / sizeof(arr[0]);
	printf("avg of arr is :%d",(sum/temp));

	getch();
	return 0;
}