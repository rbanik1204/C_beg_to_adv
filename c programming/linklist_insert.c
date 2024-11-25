#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node* head=NULL,*temp,*ptr;
void insert_end(int x){
    int choice=0,count=0;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Memory Allocation failed!");
        return;
    }
    newnode->data=x;
    printf("Inserted at end->%d",newnode->data);
    newnode->link=NULL;
    if(head==0){
        head=temp=newnode;
    }
    else{
        temp->link=newnode;
        temp=temp->link;
    }
    temp->link=NULL;
}
void insert_begin(int x){
    int choice=0,count=0;
    struct node *temp,*ptr;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    printf("\nInsert at beginning->%d",newnode->data);
    if(head==0){
        head=newnode;
        newnode->link=NULL;
    }else{
    temp=head;
    head=newnode;
    newnode->link=temp;
    }
}
void insert_position(int x,int pos){
    int count=0,choice=0;
    struct node *temp,*ptr;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    if(head==0){
        head=temp=newnode;
        newnode->link=NULL;
    }
    else{
        temp=head;
        while(count!=pos-1){
            temp=temp->link;
            count++;
        }
        newnode->link=temp->link;
        temp->link=newnode;
        }
}
void delete_begin(){
    struct node *temp=head;
    if(head==0){
        printf("\nEmpty Linklist!\n");
    }else{
    head=head->link;
    printf("\nDeleted data->%d\n",temp->data);
    free(temp);
    }
}
void delete_end(){
    struct node *temp=head,*ptr;
    if(head==NULL){
        printf("\nEmpty Linklist!\n");
    }
    else{
        while(temp->link!=0){
        ptr=temp;
        temp=temp->link;
        }
        ptr->link=NULL;
        printf("Deleted data->%d\n",temp->data);
        free(temp);
    }
}
void delete_pos(int pos){
    int count=0;
    struct node* temp=head,*ptr=head;
    if(head==0){
        printf("\nEmpty Linklist!\n");
    }
    else{
        while(count!=pos){
            count++;
            temp=temp->link;
        }
        count=0;
        while(count!=pos-1){
        count++;
        ptr=ptr->link;
        }
    }
}
void display(){
    int count=0;
    struct node *ptr=head;
    printf("\nInserted elements:");
    while(ptr!=0){
        count++;
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}
list_length(){
    int count=0;
    struct node *temp=head;
    while(temp!=0){
        count++;
        temp=temp->link;
    }
    printf("\nWould you like to know the length of list?\n1.Yes\n2.No\n");
    scanf("%d",&choice);
    if(choice==1){
        printf("\nLength of the list:%d",count);
    }
}
void main(){
    int choice,value,pos;
    label:
    printf("Following menu:\n1.Insert at end\n2.Insert at beginning\n3.Insert at a particular position\n4.Deletion at beginning\n5.Deletion at end\n6.Delete a particular node\n7.Display\n8.length of list\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter data:");
            scanf("%d",&value);
            insert_end(value);
            break;
        case 2:
            printf("\nEnter data:");
            scanf("%d",&value);
            insert_begin(value);
            break;
        case 3:
            printf("\nEnter Data:");
            scanf("%d",&value);
            printf("Enter position after which you want to insert:");
            scanf("%d",&pos);
            insert_position(value,pos);
            break;
        case 4:
            delete_begin();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            printf("Enter the position of the data you want to delete:");
            scanf("%d",&pos);
            delete_pos(int);
        case 7:
            display();
        case 8:
            list_length();
            break;
        default:
            printf("\nInvalid choice!");
    }
    printf("\nWant to continue?\n1.Yes\n2.No\n");
    scanf("%d",&choice);
    if(choice==1){
        goto label;
    }
    else{
        exit(1);
    }
}