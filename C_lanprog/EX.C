#include<stdio.h>
#include<conio.h>
struct stud
{
    int roll;
    char name[10];
    struct mark
    {
        int m1;
        int m2;
        int m3;
    } s1[4];
} s[4];
void main()
{
    int i,j;
    clrscr();
    for(i=0; i<4; i++)
    {
	printf("Enter Roll no %d:",i+1);
	scanf("%d",&s[i].roll);

	printf("Enter Name %d:",i+1);
	scanf("%s",s[i].name);
       /*
	for(j=0; j<4; j++)
	{*/
	    printf("Enter mark 1:");
	    scanf("%d",&s[i].s1[i].m1);
	    printf("Enter mark 2:");
	    scanf("%d",&s[i].s1[i].m2);
	    printf("Enter mark 3:");
	    scanf("%d",&s[i].s1[i].m3);

    }
}