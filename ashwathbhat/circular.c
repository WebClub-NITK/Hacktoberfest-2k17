#include<stdio.h>
#include<stdlib.h>

void create();
void insert();
void display();
void delete();

struct node{
 int data;
 struct node *next;
}*head=NULL,*x,*y,*z;

int main()
{
 int choice;
 printf("\nCircular Linked List\n");
 while(1)
 {
 printf("\n********************************************\nEnter 1 to create\nEnter 2 to insert at position\nEnter 3 to display the list\nEnter 4 to delete element at a position\nEnter 10 to exit\n********************************************\n");
 printf("Enter your choice: ");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 create();
 break;
 case 2:
 insert();
 break;
 case 3:
 display();
 break;
 case 4:
 delete();
 break;
 case 10:
 exit(0);
 break;
 default:
 printf("Wrong Choice");
 break;
 }
 }
}
void create()
{
 int c;

 x = (struct node*)malloc(sizeof(struct node));
 printf("Enter value to be added: ");
 scanf("%d", &x->data);
 x->next = x;
 head = x;
 printf("If you wish to continue press 1 otherwise 0: ");
 scanf("%d", &c);
 while (c != 0)
 {
 y = (struct node*)malloc(sizeof(struct node));
 printf("Enter value to be added: ");
 scanf("%d", &y->data);
 x->next = y;
 y->next = head;
 x = y;
 printf("If you wish to continue press 1 otherwise 0: ");
 scanf("%d", &c);
 }
}

void insert()
{
 struct node *ptr;
 int i=1,pos,count=1,value;

 y = (struct node*)malloc(sizeof(struct node));
 if(head==NULL)
 {
 printf("List empty, cannot add");
 }
 printf("Enter position to insert: ");
 scanf("%d",&pos);
 printf("Enter the data to enter: ");
 scanf("%d",&value);
 y->data = value;
 x=head;
 ptr=head;
 while(ptr->data!=head)
 {
 count++;
 ptr=ptr->data;
 }
 count++;
 if(pos>count)
 {
 printf("Position out of range\n");
 return;
 }
 while(i<pos)
 {
 z=x;
 x=x->data;
 i++;
 }
 y->data = x;
 z->data = y;
}

void display()
{
 if(head==NULL)
 {
 printf("The list is empty\n");
 }
 else
 {
 x=head;
 while(x->next!=head)
 {
 printf("%d ",x->data);
 }
 printf("\n");
 }
}

void delete()
{
 if (head == NULL)
 printf("List is empty\n");
 else
 {
 int c = 1, pos;
 printf("Enter the position to be deleted: ");
 scanf("%d", &pos);
 x = head;
 while (c < pos)
 {
 y = x;
 x = x->next;
 c++;
 }
 y->next = x->next;
 free(x);
 }
}
