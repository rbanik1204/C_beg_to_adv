#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *link;
}NODE;
NODE *head= NULL,*temp=NULL;
void create_CL(int x){
    NODE *newnode = (NODE*)malloc(sizeof(NODE));
    newnode->data = x;
    newnode->link=NULL;
    if(head==NULL){
        head=temp=newnode;
        head->link=head;
    }else
    {
        temp->link=newnode;
        temp=temp->link;
        temp->link=head;
    }
}
void display(){
    temp=head;
    if(temp==NULL){
        printf("Empty linklist!");
    }else
    printf("Following elements:");
    {
    while(temp->link!=head){
        printf("%d\t",temp->data);
        temp=temp->link;
    }
        printf("%d",temp->data);
    }
}
void main(){
    int choice,ch,value;
    while(1){
    printf("Following menu:\n1.Create circular list\n2.Display");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        do{
            printf("Enter value:");
            scanf("%d",&value);
            create_CL(value);
            printf("Want to Continue inserting?\n");
            scanf("%d",&ch);
            }while(ch!=0);
            break;
        case 2:
            display();
            break;
        default:
            printf("Invalid Choice!");
            exit(0);
    }
    }
}