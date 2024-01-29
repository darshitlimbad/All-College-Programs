#include<stdio.h>
#include<conio.h>

struct stud
{
	int id;
	char name[20];
	int mark;
};

void main()
{
	struct stud s;
	struct stud *ptr;
	clrscr();
	ptr=&s;

	s.id=12;
	strcpy(s.name,"geetanjali");
	s.mark=99;

	//print with var
	printf("id=%d\n",s.id);
	printf("name = %s\n",s.name);
	printf("mark = %d\n",s.mark);

	//print with ptr
	printf("id=%d\n",ptr->id);
	printf("name = %s\n",ptr->name);
	printf("mark = %d\n",ptr->mark);

	getch();
}