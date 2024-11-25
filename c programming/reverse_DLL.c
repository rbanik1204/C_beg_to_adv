#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *prev;
    struct node *next;
}NODE;
NODE *head=NULL,*tail=NULL,*temp;
void create_DLL(){
    int x,choice=1;
    while(choice!=0){
    NODE *newnode=(NODE*)malloc(sizeof(NODE));
    printf("Enter data:");
    scanf("%d",&x);
    newnode->data=x;
    newnode->prev=newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }else
    {
        tail->next=newnode;
        tail->next->prev=tail;
        tail=tail->next;
    }
    printf("Inserted->%d\n",tail->data);
    printf("Want to insert more? 1 for YES 0 for NO\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    }
}
void display(){
    temp=head;
    printf("Following elements:");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }printf("\n");
}
void reversed(){
    NODE *nextnode,*current=head;
    if(head==NULL){
        printf("Empty Linklist!\n");
    }else
    {
        while(current!=NULL){
            nextnode=current->next;
            current->next=current->prev;
            current->prev=nextnode;
            current=nextnode;
        }nextnode=head;
        head=tail;tail=nextnode;
    printf("Reversed!\n");
    }
}
void main(){
    int choice=1,ch;
    do{
    printf("Following menu:\n1.Create linklist\n2.Display\n3.Reverse linklist\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
        switch(ch){
            case 1:
                create_DLL();
                break;
            case 2:
                display();
                break;
            case 3:
                reversed();
                break;
            default:
                printf("Invalid input!\n");
        }
    printf("Want to continue? 1 for YES 0 for NO:\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    }while(choice!=0);
}