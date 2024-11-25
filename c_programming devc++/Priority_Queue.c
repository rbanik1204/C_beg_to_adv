#include<stdio.h>
#include<stdlib.h>

// ----------------------------------Creation of Priority Queue-----------------------------------

#define PRINT_AND_READ(msg, SIZE) \
	printf("%s",msg),scanf("%d",&SIZE)	
int front = -1, rear = -1;
int *PQueue,SIZE,choice;

int* create_Queue(){
	PQueue = (int*) malloc(SIZE * sizeof(int));
	if(!create_Queue){
		perror("Failed to allocate the memory!\n");
		free(PQueue);   // Free previously allocated memory
		return NULL;
	}
	return PQueue;
}


void Enqueue(int data){
	int i,j;
	if(front == (rear+1)%SIZE)
		printf("Queue is Overflowing!\n");
	else if(front == -1 && rear == -1){
		front = rear = 0;
		PQueue[rear] = data;
		printf("Inserted->%d\n",PQueue[rear]);
	}
	else{
		int swap;
		rear = (rear+1) % SIZE;
		PQueue[rear] = data;
		printf("Inserted->%d\n",PQueue[rear]);
		for(i = front;i<=rear;i++){
			for(j =i+1;j<=rear;j++){
				if(PQueue[i]>PQueue[j]){
					swap = PQueue[i];
					PQueue[i] = PQueue[j];
					PQueue[j] = swap;
				}
			}
		}
	}
}


void Display(){
	int i = front;
	if(front == -1 && rear == -1)
		printf("Queue is Underflowing!\n");
	else{
		printf("Following elements:");
		while(i != rear){
			printf("%d\t",PQueue[i]);
			i = (i+1) % SIZE;
		}printf("%d",PQueue[i]);
	}printf("\n");
}
void Dequeue(){
	if(front == -1 && rear == -1)
		printf("Queue is Underflowing!\n");
	else if( front == rear){
		printf("Deleted->%d\n",PQueue[front]);
		front = rear = 0;
	}
	else{
		front = (front+1) % SIZE;
		printf("Deleted->%d\n",PQueue[front]);
	}
}
int main(){
	int data;
	PRINT_AND_READ("Enter size of Queue: ",SIZE);
	PQueue = create_Queue();
	while(choice != 2){
	printf("Following menu:\n1.Enqueue\n2.Dequeue\n3.Display\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter data:");
			scanf("%d",&data);
			Enqueue(data);
			break;
		case 2:
			Dequeue();
			break;
		case 3:
			Display();
			break;
		default:
			printf("Invalid Selection!\n");
	}
	printf("Want to continue? Press '1' for 'YES' Press '2' for 'NO':");
	scanf("%d",&choice);
    }
    free(PQueue);PQueue = NULL;
}
