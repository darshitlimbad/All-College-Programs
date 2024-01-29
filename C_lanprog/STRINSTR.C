#include<stdio.h>
#include<conio.h>
#include<string.h>

struct stud
{
	int id;
	char name[20];
	struct stand
	{
		int mark;
		char course[10];
	}i; /* 	NOTE: you can't name inner struct anywhare else*/
}s;

void main()
{

	clrscr();

	s.id=12;
	strcpy(s.name,"geetanjali");
	s.i.mark=99;
	strcpy(s.i.course,"B.C.A");

	printf("id : %d \n",s.id);
	printf("name : %s \n",s.name);
	printf("mark : %d \n",s.i.mark);
	printf("course : %s \n",s.i.course);

	getch();

}