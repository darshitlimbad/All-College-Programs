/*prog of 0101*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int row , column , print=1 ,limit;

    clrscr();

    do{
		printf("enter row limit between 5 to 15 : \n");
		scanf("%d",&limit);
	}while(limit<5 || limit>15);

    for(row=1 ; row<=45 ; row++)
	printf("-");

    printf("\n");
    for(row=1 ; row<=limit ; row++)
    {
	for(column=1 ; column<=row ; column++)
	{
	    if(print==1)
	    {
		printf(" %d ",print--);
	    }
	    else
	    {
		printf(" %d ",print++);
	    }
	}
	printf("\n");
    }
    getch();
}