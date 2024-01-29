#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct list{
	int val;
	struct list *next;
}*head;

void create_list();
void display();
void deleat();

void main()
{
    clrscr();

    head=NULL;

    create_list(head);

    display(head);

    printf("\n\n");


}

void create_list(struct list *node)
{
    int i=1 , data;
    head=(struct list*)malloc(sizeof(struct list));

    printf("\nenter ele for no. -%d node",i);
    scanf("%d",&data);

    head->val=data;
    head->next=NULL;

    for(i=2 ; i<=5 ; i++)
    {
	printf("\nenter ele for no. -%d node",i);
	scanf("%d",&data);

	node=node->next;
	node=(struct list*)malloc(sizeof(struct list));
	node->val=data;
	node->next=NULL;
    }

    printf("\nlist succesfully created.");
}

void display(struct list* node)
{
	printf("\nYour List is :\n");
	while(node!=NULL)
	{
		printf("%d\t",node->val);
		node=node->next;
	}
}

void deleat(struct list* node)
{
    struct list* temp;
    while( node->next->next != NULL )
    {
	node=node->next;
    }

    temp=node->next;
    node->next=NULL;
    free(temp);
}