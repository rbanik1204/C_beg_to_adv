#include<stdio.h>
#include<stdlib.h>
#define N 5
int PQ[N],front= -1,rear=-1;
void enqueue(int x){
    int i,l;
    if((front==0 && rear ==N-1)||(front==rear+1)){
        printf("Queue is full!\n");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        PQ[rear]=x;
        printf("Inserted->%d\n",PQ[rear]);
    }
    else{
        rear=(rear+1)%N;
        PQ[rear]=x;
        printf("Inserted->%d\n",PQ[rear]);
        for(i=front;i<rear;i++){
            for(int j=i+1;j<=rear;j++){
                if(PQ[i]>PQ[j]){
                    l=PQ[j];
                    PQ[j]=PQ[i];
                    PQ[i]=l;
                }
            }
       }
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is Empty!\n");
    }
    else if(front==rear){
        printf("Deleted->%d\n",PQ[front]);
        front=rear=-1;
    }
    else if(front==N-1){
        printf("Deleted->%d\n",PQ[front]);
        front=0;
    }
    else{
        printf("Deleted->%d\n",PQ[front]);
        front++;
    }
}
void peek(){
    if(front==-1 && rear==-1){
        printf("Queue is empty!\n");
    }else
    {
        printf("Peak value:%d\n",PQ[front]);
    }
}
void display(){
    int i=front;
    if(front==-1 && rear==-1){
        printf("Queue is empty!\n");
    }
    printf("Following elements:");
    while(i!=rear){
        printf("%d\t",PQ[i]);
        i=(i+1)%N;
    }printf("%d",PQ[i]);
    printf("\n");
}
void main(){
    int choice,ch,value;
    do{
    printf("Following menu:\n1.Enqueue\n2.Dequeue\n3.peek\n4.Display\n");
    printf("Enter choice:");
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
    printf("Want to do another operation? '1' for YES '0' for NO:");
    scanf("%d",&ch);
    }while(ch!=0);
}