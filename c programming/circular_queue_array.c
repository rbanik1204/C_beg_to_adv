#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int front=-1,rear=-1;
void enqueue(int x){
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
        printf("inserted->%d\n",*(queue+rear));
    }
    else if((rear+1)%size == front){
        printf("Queue is full!\n");
    }
    else{
        rear=(rear+1)%size;
        queue[rear]=x;
        printf("Inserted->%d\n",*(queue+rear));
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is empty!\n");
    }
    else if(front==rear){
        printf("Deleted->%d\n",queue[front]);
        front=rear=0;
    }
    else{
        printf("Deleted->%d\n",queue[front]);
        front=(front+1)%size;
    }
}
void peek(){
    if(front==-1){
        printf("Queue is empty!\n");
    }
    else{
        printf("front value is %d\n",queue[front]);
    }
}
void display(){
    int i=front;
    if(front==-1 && rear==-1)
        printf("Queue is empty!\n");
    else{
        while(i!=rear){
            printf("%d\t",queue[i]);
            i=(i+1)%size;
        }printf("%d",queue[i]);
    }
}
void main(){
    int choice,value,ch;
    do{
    printf("Following menu:\n1.insert\n2.delete\n3.peek\n4.display\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter data:");
            scanf("%d",&value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("Invalid choice!\n");
            exit(0);
        }
    printf("Do you want to do another operation? 1 for YES 0 for NO");
    scanf("%d",&ch);
    }while(ch!=0);
}