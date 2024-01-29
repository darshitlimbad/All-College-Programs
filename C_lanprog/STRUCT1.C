#include<stdio.h>
#include<conio.h>
#include<string.h>

struct stud
{
	int id;
	char name[20];
	float avg;
};   /*}s,s1*/

void main()
{
	struct stud s,s1;
	clrscr();

	s.id=34;
	strcpy(s.name,"geetanjali");
	s.avg=99.99999;

	s1.id=4;
	strcpy(s1.name,"samarpan");
	s1.avg=99.99999;

	printf("id : %d \n",s.id);
	printf("name : %s \n",s.name);
	printf("avg : %f \n",s.avg);

	printf("id : %d \n",s1.id);
	printf("name : %s \n",s1.name);
	printf("avg : %f \n",s1.avg);

	getch();

}