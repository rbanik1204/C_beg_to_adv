#include<stdio.h>
#include<stdlib.h>
#define N 5
int DQ[N];
int front=-1,rear=-1;
void enqueue_front(int x){
    if((front==0 && rear==N-1)||(front==rear+1)){
        printf("Queue is full!\n");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        DQ[front]=x;
        printf("inserted at front->%d\n",DQ[front]);
    }
    else if(front==0){
        front=N-1;
        DQ[front]=x;
        printf("inserted at front->%d\n",DQ[front]);
    }
    else{
        front--;
        DQ[front]=x;
        printf("inserted at front->%d\n",DQ[front]);
    }
}
void enqueue_rear(int x){
    if((front==0 && rear==N-1)||(front==rear+1)){
        printf("Queue is full!\n");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        DQ[rear]=x;
        printf("inserted at rear->%d\n",*(DQ+rear));
    }
    else if(rear==N-1){
        rear=0;
        DQ[rear]=x;
        printf("inserted at rear->%d\n",*(DQ+rear));
    }
    else{
        rear++;
        DQ[rear]=x;
        printf("inserted at rear->%d\n",*(DQ+rear));
    }
}
void dequeue_front(){
    if(front==-1 && rear==-1){
        printf("Empty deque!\n");
    }
    else if(front == N-1){
        printf("Deleted from front %d\n",DQ[front]);
        front = 0;
    }
    else if(front == rear){
        printf("Deleted from front %d\n",DQ[front]);
        front=rear=-1;
    }
    else{
        printf("Deleted from front %d\n",DQ[front]);
        front++;
    }
}
void dequeue_rear(){
    if(front==-1 && rear==-1){
        printf("Empty deque!\n");
    }
    else if(front == rear){
        printf("Deleted from rear %d\n",DQ[front]);
        front=rear=-1;
    }
    else if(rear == 0){
        printf("Deleted from rear %d\n",DQ[rear]);
        rear = N-1;
    }
    else{
        printf("Deleted from rear %d\n",DQ[rear]);
        rear--;
    }
}
void display(){
    int i=front;
    if(front==-1 && rear==-1){
        printf("Empty Deque\n");
    }
    else{
    printf("Following elements:");
    while(i!=rear){
        printf("%d\t",DQ[i]);
        i=(i+1)%N;
    }
    printf("%d",DQ[rear]);
    }printf("\n");
}
void main(){
int choice,ch,value;
do{
printf("Following menu:\n1.enqueue at front\n2.enqueue at rear\n3.dequeue at front\n4.dequeue at rear\n5.Display\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice){
    case 1:
        printf("Enter value:");
        scanf("%d",&value);
        enqueue_front(value);
        break;
    case 2:
        printf("Enter value:");
        scanf("%d",&value);
        enqueue_rear(value);
        break;
    case 3:
        dequeue_front();
        break;
    case 4:
        dequeue_rear();
        break;
    case 5:
        display();
        break;
    default:
        printf("Invalid choice!\n");
        exit(0);            
    }
printf("Want to do another operation? '1' for YES '0' for NO\n");
printf("Enter your choice:");
scanf("%d",&ch);
}while(ch!=0);
}
    