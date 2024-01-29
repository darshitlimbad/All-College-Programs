#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct list{
	int id;
	char name[50];
	char course[10];
	int sam;
	double mono;
	char clg_nm[30];
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

	addbottom(head);
	//addbottom(head);
	//addbottom(head);
	//addbottom(head);
	//addbottom(head);

	display(head);

	//deleat();
	//display(head);
}

void addbottom(node *list)
{
	if(list==NULL)
	{
		head=(node*)malloc(sizeof(node));
		printf("\nEnter Id : ");
		scanf("%d",&head->id);

		printf("\nEnter Name :");
		scanf("%s",head->name);

		printf("\nEnter Your Course :");
		scanf("%s",head->course);

		printf("\nEnter your sam-no. :");
		scanf("%d",&head->sam);

		printf("\nEnter mobile number :");
		scanf("%ld",&head->mono);

		printf("\nEnter Colege Name:");
		scanf("%s",head->clg_nm);

		head->next=NULL;
		printf("\nFile ADDED SUCCESFULLY!\n");

		return;
	}

	while(list->next!=NULL)
	{	list=list->next;	}

	list->next=(node*)malloc(sizeof(node));

	printf("\nEnter Id : ");
	scanf("%d",&list->next->id);

	printf("\nEnter Name :");
	scanf("%s",list->next->name);

	printf("\nEnter Your Course :");
	scanf("%s",list->next->course);

	printf("\nEnter your sam-no. :");
	scanf("%d",&list->next->sam);

	printf("\nEnter mobile number :");
	scanf("%ld",&list->next->mono);

	printf("\nEnter Colege Name:");
	scanf("%s",list->next->clg_nm);

	list->next->next=NULL;
	printf("\nFile ADDED SUCCESFULLY!\n");
	return;
}

void display(node *list)
{
	int i=1 , count=1;
	while(list!=NULL)
	{
		printf("\nYour Data no %d is :\n",count);

		printf("\nId : %d ",list->id);

		printf("\nName :");
		puts(list->name);

		printf("Course :");
		puts(list->course);

		printf("sam-no. : %d",list->sam);

		printf("\nmobile no. : %lf",list->mono);

		printf("\nColege Name:");
		puts(list->clg_nm);

		printf("\n");
		for(i=1 ; i<=30 ; i++) {
			printf("-");
		}
		list=list->next;
		count++;
	}
}

void deleat()
{
    node *temp, *position;

    if (head == NULL)
	{
		printf("List is empty\n");
	}
    else
    {
	position = (node*)malloc(sizeof(node));
	temp = head;

	while (temp->next->next != NULL) {
	temp = temp->next;
	}

	position = temp->next;
	temp->next = NULL;

	free(position);
	}
}