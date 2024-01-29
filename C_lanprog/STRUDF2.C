#include<stdio.h>
#include<conio.h>


struct stud
{
	int id;
	char name[30];
	char avg[10];
}s;

void func(struct stud s);

void main()
{
	clrscr();
	printf("enter your id: ");
	scanf("%d",&s.id);

	printf("enter your name: ");
	scanf("%s",s.name);

	printf("enter your avg : ");
	//here i am using char because float is not working
	scanf("%s",s.avg);
	func(s);
	getch();
}

void func(struct stud s)
{

	printf("id:%d \n",s.id);
	printf("name: %s \n",s.name);
	printf("avg : %s \n",s.avg);
}