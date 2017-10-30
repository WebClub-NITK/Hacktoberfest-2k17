#include<stdio.h>
#include<stdlib.h>
#include <stdint.h>

struct xnode {
    int data;
    struct xnode *npx;
};

struct xnode *crt(int val) {
    struct xnode *new;
    new = (struct xnode *)malloc(sizeof(struct xnode ));
    new->data = val;
    new->npx = NULL;
    return new;
}

struct xnode* XOR (struct xnode *a, struct xnode *b) {
    return (struct xnode *) ((uintptr_t) (a) ^ (uintptr_t) (b));
}

struct xnode *ins(struct xnode *head,int val) {
    struct xnode *nw = crt(val);
    nw->npx = XOR(head,NULL);
    if(head != NULL) 
        head->npx = XOR(head->npx,nw);
    head = nw;
    return head;
}


void display(struct xnode *head) {
    struct xnode *cr = head,*pre = NULL,*nxt;
    
    while(cr != NULL) {
        printf("%d ",cr->data);
        nxt = XOR(pre,cr->npx);
        pre = cr;
        cr = nxt;
    }
    printf("\n");
}

int main() {
    struct xnode *head = NULL;
    head = ins(head,10);
    head = ins(head,15);
    head = ins(head,25);
    head = ins(head,50);
    display(head);
    return 0;
}
