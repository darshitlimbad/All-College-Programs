#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[10],i,j,temp;
	clrscr();
	//giving array val by loop
	for(i=0 ; i<10 ; i++)
	{
		printf("enter val for arr[%d]:",i);
		scanf("%d",&arr[i]);
	}

	printf("\n\tbefore swap");
	for(i=0 ; i<10 ; i++)
	{

		printf("\narr[%d]:%d",i,arr[i]);
	}

	for(i=0 ; i<10 ; i++)
	{
		for(j=i+1 ; j<=10 ; j++)
		{
			if(arr[i] > arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n\tafter swap");
	for(i=0 ; i<10 ; i++)
	{

		printf("\narr[%d]:%d",i,arr[i]);
	}

	getch();
}