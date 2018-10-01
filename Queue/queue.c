#include<stdio.h>
#define MAX_SIZE 10

int queue[MAX_SIZE];

int front=-1;
int rear=-1;

int enQueue(int);
int deQueue();
void display();

void main(){
//value variable is used to add elements in queue
//choice variable is used to choose which function to used
int value;
int choice;

while(1){
	printf("\n****************************\n");
	printf("Enter the number for operation on queue\n");
	printf("1.enqueue\n2.dequeue\n3.display\n");
	scanf("%d",&choice);
switch(choice){

case 1:
	printf("enter the value to be enqueue\n");
	scanf("%d",&value);
	enQueue(value);
	break;
case 2:
	deQueue();
	break;

case 3:
	display();
	break;

default:
	printf("Wrong input please try again.\n");
  }
 }
}

int enQueue(int value){

if(rear==MAX_SIZE-1){
	printf("overflow\n");
 
}
else if(front==-1)
 {
front=0;
}

//added values to rear
	rear=rear+1;
	queue[rear]=value;
	printf("Insertion sucess !!\n");
}

int deQueue(){

if(front==-1 || front==rear+1){
	printf("underflow\n");
return 0;
}
else{
//deleted elements from queue
printf("%d deleted from queue\n",queue[front]);	
front=front+1;
	}
  }

void display(){

int i;
if(front==-1 ||rear==-1 || front==rear+1){
printf("Queue is empty\n");
}
else{

for(i=front;i<=rear;i++){
	printf("\n%d",queue[i]);

  }
 }	
}
