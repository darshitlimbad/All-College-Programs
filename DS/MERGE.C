#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
}*l1_head , *l2_head , *m_head;

void list1();
void list2();
void merge_list();
void display();

void main() {
    m_head=NULL;
    l1_head=NULL;
    l2_head=NULL;

    clrscr();

    list1();
    display(l1_head , "a");

    list2();
    display(l2_head , "b");

    merge_list(l1_head,l2_head);
    display(m_head , "merged");
}

void list1()
{
    int i;
    struct node *temp , *new_node;

    l1_head=(struct node *)malloc(sizeof(struct node));
    l1_head->info=100;
    l1_head->next=NULL;
    temp=l1_head;

    for(i=90 ; i>=60 ; i-=10)
    {
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->info=i;
	new_node->next=NULL;
	temp->next=new_node;
	temp=temp->next;
    }
}

void list2()
{
    int i;
    struct node *temp , *new_node;

    l2_head=(struct node *)malloc(sizeof(struct node));
    l2_head->info=50;
    l2_head->next=NULL;
    temp=l2_head;

    for(i=40 ; i>=10 ; i-=10)
    {
	new_node=new_node->next;
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->info=i;
	new_node->next=NULL;
	temp->next=new_node;
	temp=temp->next;
    }
}

void merge_list(struct node *list1 , struct node *list2)
{
    struct node *temp ,*new_node;

    m_head=(struct node *)malloc(sizeof(struct node));
    m_head->info=list1->info;
    m_head->next=NULL;
    temp=m_head;
    list1=list1->next;

    while(list1 != NULL){
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->info=list1->info;
	new_node->next=NULL;
	temp->next=new_node;
	temp=temp->next;
	list1=list1->next;
    }

    while(list2!=NULL){
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->info=list2->info;
	new_node->next=NULL;
	temp->next=new_node;
	temp=temp->next;
	list2=list2->next;
    }

}

void display(struct node *list , char list_nm[10])
{
	printf("\nyour %s list is:\n\t\t",list_nm);
	while(list != NULL){
		printf("\t%d",list->info);
		list=list->next;
	}
}                /