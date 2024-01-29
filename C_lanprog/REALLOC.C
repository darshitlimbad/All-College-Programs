//memory allocation  -realloc

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char *n;
	clrscr();
	n=(char *)malloc(15);

	strcpy(n,"Darshit");

	printf("name : %s , address : %x",n,n);
	n=(char *)realloc(n,15);
	strcat(n," Limbad");

	printf("\nname : %s address: %x",n,n);

	getch();
	free(n);
}
