#include<stdio.h>
#include<conio.h>


struct stud
{
	int id;
	char name[10];
	int m[4];
}s;

void main()
{       int i;
	clrscr();

	printf("enter your id : ");
	scanf("%d",&s.id);

	printf("enter your name : ");
	scanf("%s",&s.name);

	for(i=0 ; i<4 ; i++)
	{
		printf("enter your mark %d : ",i+1);
		scanf("%d",&s.m[i]);
	}

	printf("your id : %d \n",s.id);

	printf("name : %s \n",s.name);

	for(i=0 ; i<4 ; i++)
	{
		printf("your mark %d : %d\n",i+1,s.m[i]);
	}



	getch();
}