#include<stdio.h>
#include<conio.h>
#define size 5


int queue[size];
int front=-1 , rear=-1;

int isfull()
{
	if(front==0 && rear==size-1)
		{return 1;}
	else
		{return 0;}
}

int isempty()
{
	if(front==-1 && rear==-1)
		{return 1;}
	else
		{return 0;}
}

void enqueue(int ele);
void dequeue();
void display();

void main()
{
	int num ;
	int option;
	clrscr();
loop:
{
	printf("ENTER KEYS FROM THIS ,FOR ACTION:\n");
	printf("->enter 1 for add ele\n");
	printf("->enter 2 for delet\n");
	printf("->enter 3 for display all ele\n");
	printf("->enter 4 for break\n");

	scanf("%d",option);

	switch(option)
	{
		case 1:
		//enqueue
			printf("\nenter value for  ele :");
			scanf("%d",&num);
			enqueue(num);
			goto loop;

		case 3:
		//display
			display();
			goto loop;

		case 2:
		//dequeue
			dequeue();
			goto loop;

		case 4:
		      printf("EXITING MAIN MANU!");
			break;

		default:
			printf("\nenter correct sign!!!!\n");
			goto loop;
	}

}

}

void enqueue(int ele)
{
	if(isfull())
	{
		printf("\t\t\tQUEUE IS FULL!!\t\n");
	}
	else if(front == -1)
	{
		front=rear=0;
		queue[rear]=ele;
	}
	else if(rear == front-1)
	{
		printf("\t\t\tQUEUE IS FULL!!\n");
	}
	else if(rear == size-1)
	{
		rear=0;
		queue[rear]=ele;
	}
	else
	{
		rear++;
		queue[rear]=ele;
	}
}

void display()
{
	int i;
	if(rear<front)
	{
		for(i=front ; i<=size-1 ; i++)
		{
			printf("\t\t\t** QUEUE[%d]=%d **\n",i,queue[i]);
		}
		for(i=0 ; i<=rear ; i++)
		{
			printf("\t\t\t** QUEUE[%d]=%d **\n",i,queue[i]);
		}
	}
	else
	{
		for(i=front ; i<=rear ; i++)
		{
			printf("\t\t\t** QUEUE[%d]=%d **\n",i,queue[i]);
		}
	}
}

void dequeue()
{
	if(isempty())
	{
		printf("\t\t\tQUEUE IS EMPTY!!!\n");
	}
	else if(front == size-1)
	{
		front=0;
		printf("\t\t\DELETED SUCCESFULLY!\n");
	}
	else if(front == rear)
	{
		front=rear=-1;
		printf("\t\t\DELETED SUCCESFULLY!\n");
	}
	else
	{
		front++;
		printf("\t\t\DELETED SUCCESFULLY!\n");
	}
}