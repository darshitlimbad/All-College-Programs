#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct list{
	int val;
	struct list *next;
}*head;

typedef struct list node;

void addbottom();
void addbeg();
void addpos();
void display();
void deleat();
int count();

void main()
{
	clrscr();

	head=NULL;

	addbottom(10,head);
	addbottom(20,head);
	addbottom(30,head);
	addbottom(40,head);
	addbottom(50,head);

	display(head);

	deleat();
	display(head);

	addbeg(12 , head);
	display(head);

	addpos(24);

	display(head);
}

void addbottom(int ele , node *list)
{
	if(list==NULL)
	{
		head=(node*)malloc(sizeof(node));
		head->val=ele;
		head->next=NULL;
		printf("\nELE ADDED SUCCESFULLY!");
		return;
	}

	while(list->next!=NULL)
	{	list=list->next;	}

	list->next=(node*)malloc(sizeof(node));
	list->next->val=ele;
	list->next->next=NULL;
	printf("\nELE ADDED SUCCESFULLY!");
	return;
}

void addbeg(int ele , node* list)
{
	head=(node*)malloc(sizeof(node));
	head->val=ele;
	head->next=list;
}

void addpos(int ele)
{
	node *temp, *new_node;
    int i = 1, pos;

    if (head == NULL)
	printf("List is empty\n");
    else
	{
	printf("\nEnter index : ");
	scanf("%d", &pos);

	new_node = (node*)malloc(sizeof(node));
	new_node->val=ele;
		temp = head;

		if(pos==1)
		{
			head->val=ele;
			head->next=temp;
			printf("\nadded succesfully\n");
			return;
		}

	while (i < pos - 1) {
	    temp = temp->next;
	    i++;
	}

		new_node->next=temp->next;
		temp->next=new_node;
	}
}

void display(node *list)
{
	printf("\nYour List is :\n");
	while(list!=NULL)
	{
		printf("%d\t",list->val);
		list=list->next;
	}
}

int count()
{
	int count=0;
	node *temp=head;

	while(temp!=NULL)
	{
		temp=temp->next;
		count++;
	}

	return count;
}

void deleat()
{
    node *temp, *position;
    int i = 1, pos;

    if (head == NULL)
	{
		printf("List is empty\n");
	}
    else
    {
	printf("\nEnter index : ");
	scanf("%d", &pos);

	position = (node*)malloc(sizeof(node));
	temp = head;

		if(pos==1)
		{
			head=head->next;
			printf("\ndeleate succesfully\n");
			free(temp);
			return;
		}

		while (i < pos - 1) {
		temp = temp->next;
		i++;
		}

	position = temp->next;
	temp->next = position->next;

	free(position);
	}
}