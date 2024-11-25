#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *head=NULL,*temp,*ptr;
void insert_end(int x){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    //printf("Inside insert end function!");
    if(newnode==NULL){
        printf("Memory Allocation failed!");
        return;
    }
    newnode->data=x;
    printf("\nInserted->%d\n",newnode->data);
    newnode->link=NULL;
    if(head==0){
        head=temp=newnode;
    }else
    {
        temp->link=newnode;
        temp=temp->link;
    }
    temp->link=NULL;
}
void rev_list(){
    struct node* temp=head,*ptr=NULL,*prevnode=NULL;
    while(temp!=NULL){
        if(prevnode==NULL){
            prevnode=ptr=head;
            temp=temp->link;
            prevnode->link=NULL;
        }else
        {
            ptr=temp;
            temp=temp->link;
            ptr->link=prevnode;
            prevnode=ptr;
        }
    }
    head=prevnode;
}
void display(){
    struct node *ptr=head;
    printf("\nInserted elements:");
    while(ptr!=0){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}
void main(){
    int choice,value;
    repeat:
    printf("Following menu:\n1.Insert at end\n2.Reverse the list\n3.Display list elements\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter Value:");
            scanf("%d",&value);
            insert_end(value);
            break;
        case 2:
            rev_list();
            break;
        case 3:
            display();
            break;
        default:
            printf("\nInvalid choice!\n");
    }
    printf("\nWould you like to continue:\n1.YES\n2.NO\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    if(choice==1){
        goto repeat;
    }
    else{
        exit(0);
    }
}