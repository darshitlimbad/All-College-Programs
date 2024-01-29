#include<stdio.h>
#include<conio.h>


struct stud
{
	int id;
	char name[30];
	float avg;
}s;

void func(struct stud s);

void main()
{
	clrscr();
	func(s);
	getch();
}

void func(struct stud s)
{
	printf("enter your id: ");
	scanf("%d",&s.id);

	printf("enter your name: \n");
	scanf("%s",s.name);

	printf("enter your avg : ");
	scanf("%f",&s.avg);

	printf("id:%d \n",s.id);

	printf("name: %s \n",s.name);

	printf("avg : %f \n",s.avg);
}