#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct list{
	int val;
	struct list *next;
}*head;

typedef struct list node;

void main()
{
	clrscr();
	
	head=NULL;
	
	createlist();
	
