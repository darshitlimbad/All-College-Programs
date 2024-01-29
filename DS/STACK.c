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
	int pushele[size] , i;
	clrscr();
	//push
		for(i=0 ; i<=size-1 ; i++)
		{
		printf("enter value for no.%d ele :",i+1);
		scanf("%d",&pushele[i]);
		push(pushele[i]);
		}
	//display
		display();
	//count
		count();
	//peep
		peep();
	//pop
		pop();
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
		printf("** stack[%d]=%d ** is added sucessfully.\n\n",tos,ele);
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