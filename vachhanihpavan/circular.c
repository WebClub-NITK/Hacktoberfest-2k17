#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
void insert(struct Node** head, int key)
{
    struct Node *newnode =(struct Node*)malloc(sizeof(struct Node));
    newnode->data = key;
    if(*head==NULL)
    {
      *head=newnode;
    }
    else
    {
      newnode->next = *head;
      *head=newnode;
    }
    node* temp=*head;
    while(temp!=NULL)
      temp=temp->next;
    temp->next=*head;
    return;
}
void traverse(node* head)
{
  node* temp=head;
  printf("%d",head->data);
  temp=temp->next;
  while(temp!=head)
  {
    printf("%d",temp->data);
    temp=temp->next;
  }
  printf("\n");
}
int main()
{
    struct Node *head = NULL;
    int t=1;
    while(t)
    {
      printf("Choose from menu\n");
      printf("1. Insert node at beginning\n");
      printf("3. Delete node of given value  \n");
      printf("4. Print list\n");
      printf("5. Exit\n");
      int choice;
      scanf("%d",&choice);
      if(choice==1)
      {
        printf("Enter data\n");
        int d;
        scanf("%d",&d);
        insert(&head,d);
      }
      else if(choice==3)
      {
        printf("Enter value to delete\n");
        int d;
        scanf("%d",&d);
      }
      else if(choice==4)
      {
        printf("List is\n");
        traverse(head);
      }
      else
      {
        t=0;
      }
    }
    return 0;
}
