#include<stdio.h>
#include<conio.h>


struct stud
{
	int id;
	char name[10];
	int m[4];
}s[2];

void main()
{       int i,j;
	clrscr();
	for(i=0 ; i<2 ; i++)
	{
		printf("enter your id : ");
		scanf("%d",&s[i].id);

		printf("enter your name : ");
		scanf("%s",s[i].name);

		for(j=0 ; j<4 ; j++)
		{
			printf("enter your mark %d : ",j+1);
			scanf("%d",&s[i].m[j]);
		}
	}

	for(i=0 ; i<2 ; i++)
	{
		printf("id : %d\n",s[i].id);

		printf("name : %s\n",s[i].name);

		for(j=0 ; j<4 ; j++)
		{
			printf("mark %d : %d\n",j+1,s[i].m[j]);
		}
	}


	getch();
}