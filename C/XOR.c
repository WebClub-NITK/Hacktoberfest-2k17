include <stdio.h>
#include <stdlib.h>

// Node structure of a memory efficient doubly linked list
struct node {
    int data;
    struct node* npx; // XOR of next and previous node
};

// returns XORed value of the node addresses
struct node* XOR(struct node *a, struct node *b) {
    return (struct node*) ((unsigned int) (a) ^ (unsigned int) (b));
}

/* Insert a node at the beginning of the XORed linked list and makes the
 newly inserted node as head */
void insert(struct node **head_ref, int data) {
    // Allocate memory for new node
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data;

    /* Since new node is being inserted at the beginning, npx of new node
     will always be XOR of current head and NULL */
    new_node->npx = XOR(*head_ref, NULL);

    /* If linked list is not empty, then npx of current head node will be XOR
     of new node and node next to current head */
    if (*head_ref != NULL)
    {
        // *(head_ref)->npx is XOR of NULL and next. So if we do XOR of
        // it with NULL, we get next
        struct node* next = XOR((*head_ref)->npx, NULL);
        (*head_ref)->npx = XOR(new_node, next);
    }

    // Change head
    *head_ref = new_node;
}

// prints contents of doubly linked list
void printList(struct node *head)
{
    struct node *curr = head;
    struct node *prev = NULL;
    struct node *next;

    printf("The elements of linked list are: \n");

    while (curr != NULL)
    {
        // print current node
        printf("%d ", curr->data);

        // get address of next node: curr->npx is next^prev, so curr->npx^prev
        // will be next^prev^prev which is next
        next = XOR(prev, curr->npx);

        // update prev and curr for next iteration
        prev = curr;
        curr = next;
    }
}

int main()
{
    int n,value;
    struct node *head = NULL;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    while(n--)
    {
        scanf("%d",&value);
        insert(&head,value);
    }
    // print the created list
    printList(head);

    return (0);
}
