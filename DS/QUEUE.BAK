#include<conio.h>
#include<stdio.h>
#define size 5

int queue[size];
int front=-1 , rear=-1;

void enqueue(int ele)
{
	if(rear>=size)
	{
		printf("\nQUEUE is full!!!");
	}
	else
	{
		rear++;
		queue[rear]=ele;
			if(front<0)
				front++;
	}
}

void display()
{
	if(front<0)
		printf("\nqueue is empty!!");
	else
	{
		int i;
		for(i=front ; i<=rear ; i++)
		{
			printf("\n\t\t\t\t** queue[%d]=%d **",i,queue[i]);
		}
	}
}

void dequeue()
{
	if(front<0)
		printf("queue is empty!!");
	else
	{
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
	}
}

void main()
{
	clrscr();
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);

	display();
	       printf("\n\n");
	dequeue();

	display();
}