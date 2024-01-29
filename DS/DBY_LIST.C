#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct LIST {
    struct LIST* prev;
    int data;
    struct LIST* next;
}*head;

typedef struct LIST list;

void addbottom();
void addbeg();
void addafter();
void deleat();
void display();

void main()
{
    head=NULL;

    clrscr();

    addbottom(10,head);
    addbottom(20,head);
    addbottom(30,head);
    addbottom(40,head);
    addbottom(50,head);

    printf("\nnew list is:");
    display(head);
    //traverse()

    addbeg(100);

    addafter(3 , 500 , head);

    printf("\nafter addbeg and addafter:");
    display(head);

    deleat(head);

    printf("\nafter deleat:");
    display(head);
}

void addbottom(int ele,list* node)
{
    if(head==NULL)
    {
	head=(list*)malloc(sizeof(list));
	head->prev=NULL;
	head->data=ele;
	head->next=NULL;
	return;
    }

    while(node->next!=NULL){
	node=node->next;
    }

    node->next=(list*)malloc(sizeof(list));
    node->next->prev=node;
    node->next->data=ele;
    node->next->next=NULL;

}

void addbeg(int ele){
    list* temp;
    if(head==NULL){
	head=(list*)malloc(sizeof(list));
	head->prev=NULL;
	head->data=ele;
	head->next=NULL;
	return;
    }

    temp=head;
    head=(list*)malloc(sizeof(list));
    head->prev=NULL;
    head->data=ele;
    head->next=temp;
    temp->prev=head;
}

void addafter(int pos , int ele , list* q)
{
    int i=1;
    list* temp;

    if(q==NULL)
    {
	printf("list is null!");
	return;
    }

    if(pos==1)
    {
    head=(list*)malloc(sizeof(list));
    head->prev=NULL;
    head->data=ele;
    head->next=q;
    q->prev=head;
    }

    for(i=1 ; i<pos ; i++)
    {
	q=q->next;
    }

    temp=(list*)malloc(sizeof(list));
    temp->prev=q;
    temp->data=ele;
    temp->next=q->next;
    temp->next->prev=temp;
    q->next=temp;
}

void display(list* q)
{
     printf("\n");
    while(q!=NULL)
    {
	printf("\t %d ",q->data);
	q=q->next;
    }
}

void deleat(list* q)
{
    while(q->next!=NULL)
    {
	q=q->next;
    }

    q->prev->next=NULL;
    free(q);
}