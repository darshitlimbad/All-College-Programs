#include<stdio.h>
#include<conio.h>

struct stud
{
	int id;
	int marks;
	char name[30];
}s;

union stand
{
	int id;
	int marks;
	char name[30];
}u;

void main()
{
	clrscr();
	printf("size of struct is %d\n",sizeof(s));
	printf("size of union is %d\n",sizeof(u));

}