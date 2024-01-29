#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct LIST
{
    int data;
    struct LIST* next;
}*head;

typedef struct LIST list;

void create_list();
void display();
void deleat();

void main()
{
    clrscr();

    head=NULL;

    create_list();

    display(head);

    deleat(head);

    display(head);
}

void create_list(){
	list *new_node , *temp;
	int i=1 , data;

	printf("\nENTER DATA FOR LIST NO.-%d :",i);
	scanf("%d",&data);

	head=(list*)malloc(sizeof(list));
	head->data=data;
	head->next=NULL;
	temp=head;

	for(i=2 ; i<=4 ; i++)
	{
		printf("\nENTER DATA FOR LIST NO.-%d :",i);
		scanf("%d",&data);

		new_node=(list*)malloc(sizeof(list));
		new_node->data=data;
		new_node->next=NULL;
		temp->next=new_node;
		temp=temp->next;
	}
	printf("\nLIST CREATED SUCCESFULLY");
}

void display(list* node){
	printf("\nYOUR STACK IS:\n");
	while(node!=NULL)
	{
		printf("\t\t\t %d\n",node->data);
		node=node->next;
	}
}

void deleat(list *node){
	list* temp;

	if(node==NULL)
	{
		printf("\nLIST IS NULL.");
	}

	while(node->next->next!=NULL)
	{	node=node->next;	}
	temp=node->next;

	node->next=NULL;
	printf("\nDeleted Succesfully!");
	free(temp);
}