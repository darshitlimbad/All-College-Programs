#include<stdio.h>
#include<conio.h>

#define size 10

int stack[size];
int tos=-1;

void push(int ele);
void display();
void count();
void peep();
void pop();


void main()
{
	int num ;
	char option;
	clrscr();
loop:
{
	printf("ENTER KEYS FROM THIS ,FOR ACTION:\n");
	printf("->enter p for add ele\n");
	printf("->enter d for delet\n");
	printf("->enter s for display all ele\n");
	printf("->enter c for chose ele to shown:\n");
	printf("->enter e for exit\n");

	scanf("%c",&option);

	switch(option)
	{
		case 'p':
		//push
			printf("\nenter value for  ele :");
			scanf("%d",&num);
			push(num);
			goto loop;

		case 's':
		//display
			display();
			count();
			goto loop;

		case 'c':
		//peep
			peep();
			goto loop;

		case 'd':
		//pop
			pop();
			goto loop;

		case 'e':
			break;

		default:
			printf("\nenter correct sign!!!!");
			goto loop;
	}

}
	getch();
}

void push(int ele)
{
	if(tos>=size)
	{
		printf("\n STACK IS FULL!!!!!!");
	}
	else
	{
		tos++;
		stack[tos]=ele;
		printf("\n** stack[%d]=%d ** is added sucessfully.\n\n",tos,ele);
	}
}
void display()
{
	if(tos<0)
	{
		printf("\n STACK IS empty!!!!!!");
	}
	else
	{       int i;
		for(i=tos ; i>=0 ; i--)
		{
			printf("\nstack[%d] = %d",i,stack[i]);
		}
	}

}

void count()
{
	int i, count=0;

	for(i=tos ; i>=0 ; i--)
	{
		count++;
	}

	printf("\ntotal elements of stack is : %d",count);
}

void peep()
{
	int pos;

	do
	{
	       printf("\nEnter peeping ele POS :");
	       scanf("%d",&pos);
	}while(pos<0 || pos>size);

	//peeping ele
	printf("\n your peeped ele is :%d",stack[tos-pos+1]);
}

void pop()
{
	if(tos<0)
	{
		printf("\nSTACK IS EMPTY!!!!!");
	}
	else
	{
		printf("\nyour poped ele is : %d",stack[tos]);
		tos--;
		display();
	}
}