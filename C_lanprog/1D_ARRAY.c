#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[10],i;
	clrscr();
	for(i=0 ; i<10 ; i++)
	{
		printf("enter val of arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i=0 ; i<10 ; i++)
	{
		printf("arr[%d]:%d\n",i,arr[i]);
	}


}