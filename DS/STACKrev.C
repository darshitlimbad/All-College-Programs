#include<stdio.h>
#include<conio.h>

#define size 5

int stack[size];
int tos=-1;

void push(int ele);
void display();
int reverse();
int InsertAtBotum(int item);
int pop();


void main()
{
	int i;
	clrscr();
	//push
		for(i=1 ; i<=size ; i++)
		{
			push(i);
		}
	//display
		printf("OG STACK : \t");
		display();

	//reverse
		reverse();

	//display
		printf("\nReversed stack :");
		display();
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

	}
}
void display()
{
	if(tos<0)
	{
		printf("\n STACK IS FULL!!!!!!");
	}
	else
	{       int i;
		for(i=0 ; i<=tos ;i++)
		{
			printf("%d\t",stack[i]);
		}
	}

}

int reverse()
{
	if(!(tos==-1))
	{
		int temp= pop();
		reverse();

		InsertAtBotum(temp);
	}
}

InsertAtBotum(int item)
{
	if(tos==-1)
	{
		push(item);
	}
	else
	{
		int temp=pop();
		InsertAtBotum(item);

		push(temp);
	}
}

int pop()
{
	if(tos<0)
	{
		printf("\nSTACK IS EMPTY!!!!!");
	}
	else
	{
		tos--;
		return stack[tos+1];
	}
}