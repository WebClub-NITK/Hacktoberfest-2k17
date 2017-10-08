#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* ptr;
};
typedef struct Node node;
node* XOR(node* a, node* b)
{
    return (node*)((unsigned int)(a)^(unsigned int)(b));
}
void insert(node **head, int data)
{
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->ptr=XOR(*head,NULL);
    if(*head!=NULL)
    {
        node* next=XOR((*head)->ptr,NULL);
        (*head)->ptr=XOR(newnode,next);
    }
    *head=newnode;
}
void printListF(struct Node *head)
{
    struct Node *curr = head;
    struct Node *prev = NULL;
    struct Node *next;

    printf ("Following are the nodes of Linked List: \n");

    while (curr != NULL)
    {
        printf ("%d->", curr->data);
        next = XOR (prev, curr->ptr);
        prev = curr;
        curr = next;
    }
}
void printListB(node* head)
{
  node* last=head;
  node* curr=head;
  node*prev=NULL;
  node* next;
  while(curr!=NULL)
  {
    next = XOR (prev, curr->ptr);
    prev = curr;
    curr = next;
  }
  curr=prev;
  prev=NULL;

  while(curr!=NULL)
  {
    printf("%d->", curr->data);
    next = XOR (prev, curr->ptr);
    prev = curr;
    curr = next;
  }
}
int main()
{
    node* head=NULL;
    int t=1;
    while(t)
    {
      printf("Choose from menu\n");
      printf("1. Insert node\n");
      printf("2. Print list Forward\n");
      printf("3. Print List Backward\n");
      printf("4. Exit\n");
      int choice;
      scanf("%d",&choice);
      if(choice==1)
      {
        printf("Enter data\n");
        int d;
        scanf("%d",&d);
        insert(&head,d);
      }
      else if(choice==2)
      {
        printf("List is\n");
        printListF(head);
        printf("\n");
      }
      else if(choice==3)
      {
        printf("Backward list is\n");
        printListB(head);
        printf("\n");
      }
      else
      {
        t=0;
      }
    }
    return 0;
}
