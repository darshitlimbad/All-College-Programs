//memory allocation  -calloc

#include<stdio.h>
#include<conio.h>

void main()
{
	char *n;
	clrscr();
	n=(char *)calloc(50);
	
	strcpy(n,"Darshit Limbad");
	
	printf("name : %s",n);
	free(n);
	getch();
}
