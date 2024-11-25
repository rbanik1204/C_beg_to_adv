#include<stdio.h>
#include<stdlib.h>
// Doubly linked list operations
#define SIZE 5
int front = -1,rear = -1;
int *x=(int*)malloc(sizeof(int));
typedef struct node{
	int data;
	struct node *prev,*next;
}DL;
DL *head=NULL,*tail=NULL;
DL** create_queue(){
	DL **queue=(DL**)malloc(sizeof(int*));//allocate memory for a pointer int
	if(!queue){
	fprintf(stderr,"Memory allocation failed!\n");
	exit(1);//exit if failiure of memory allocation	
	}
	*queue =(DL*)malloc(SIZE *sizeof(int));
	return queue;
}
DL **queue=create_queue();
DL* createnode(int val){
	DL* newnode =(DL*)malloc(sizeof(DL));
	newnode->data = val;
	newnode->prev = newnode->next = NULL;
	return newnode;
}
void enqueue_rear_DL(){
	if((front == rear+1)||(front == 0 && rear == SIZE-1))
		printf("Overflow!\n");
	else if(front == -1 && rear == -1){
		front=rear=0;
		printf("Enter %d data:",rear);
		scanf("%d",x);
		queue[rear]=createnode(*x);
	}
	else{
		printf("Enter %d data:",(rear+1)%SIZE);rear=(rear+1)%SIZE;
		scanf("%d",x);
		queue[rear]=createnode(*x);
	}
}
void enqueue_front_DL(){
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) // Check for overflow
        printf("Overflow!\n");
    else if (front == -1 && rear == -1) { // Queue is empty
        front = rear = 0;
        printf("Enter %d data: ", front);
        scanf("%d", x);
        queue[front] = createnode(*x);
    } else if (front == 0) { // Wrap around to the end
        front = SIZE - 1;
        printf("Enter %d data: ", front);
        scanf("%d", x);
        queue[front] = createnode(*x);
    } else {
        printf("Enter %d data: ", --front); // Decrement front before using it
        scanf("%d", x);
        queue[front] = createnode(*x);
    }
}

int main(){
	while(1){
		enqueue_front_DL();
		enqueue_rear_DL();
		enqueue_rear_DL();
		enqueue_rear_DL();
		enqueue_rear_DL();
	}
	return 0;
}