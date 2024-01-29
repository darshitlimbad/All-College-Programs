#include<stdio.h>
#include<conio.h>

struct stud
{
	int id;
	char name[20];
	int marks[2];
}s[2];

void main()
{
	int i,j;
	
	for(i=0 ; i<2 ; i++)
	{
		printf("enter your id : ");
			scanf("%d",&s[i].id);
		printf("enter your name : ");
			scanf("%s",s[i].name);
		
		for(j=0 ; j<2 ; j++)
		{
			printf("\tenter your marks %d : ",j+1);
			scanf("%s",&s[i].marks[j]);
		}
	}

	for(i=0 ; i<2 ; i++)
	{
		printf("id : %d \n",&s[i].id);
		printf("name : %s \n",s[i].name);

		for(j=0 ; j<2 ; j++)
		{
			printf("\tmarks %d : %s\n",j+1,&s[i].marks[j]);
		}
	}
}