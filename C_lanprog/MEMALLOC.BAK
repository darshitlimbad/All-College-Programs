//memory allocation  -malloc,calloc,realloc

#include<stdio.h>
#include<conio.h>

void main()
{
	char *n;
	clrscr();
	n=(char *)malloc(50);

	strcpy(n,"darshit limbad");

	printf("name : %s  || address=%x\n",n,n);
	free(n);

	n=(char *)calloc(50);

	strcpy(n,"Darshit");

	printf("name : %s || address : %x",n,n);

	strcat(n," Limbad");

	printf("\nname : %s || address: %x",n,n);

	free(n);
	getch();
}
