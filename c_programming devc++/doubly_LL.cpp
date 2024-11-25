#include<stdio.h>
#include<stdlib.h>
int list_length();
typedef struct node{
    int data;
    struct node *prev;
    struct node *next;
}NODE;
int length;
NODE *head,*tail;
void create_DLL(){
    int choice = 1;
    while(choice!=0){
    NODE *newnode=(NODE*)malloc(sizeof(NODE));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->prev=newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    printf("Inserted->%d\n",newnode->data);
    printf("Do you want to continue? press '1' for YES '0' for NO\nEnter your choice:");
    scanf("%d",&choice);
    }
}
void insert_end(){
    NODE *newnode=(NODE*)malloc(sizeof(NODE));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->prev=newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    printf("Inserted at end:%d\n",tail->data);
}
void insert_begin(){
    NODE *newnode=(NODE*)malloc(sizeof(NODE));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->prev=newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
    }
    printf("Inserted at beginning:%d\n",head->data);
}
void insert_at_pos(){
    int pos,i=0;
    printf("Enter position:");
    scanf("%d",&pos);
    NODE *newnode=(NODE*)malloc(sizeof(NODE));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->prev=newnode->next=NULL;
    if(pos>list_length()){
        printf("Invalid position!\n");
    }
    else{
        NODE *temp=head;
        while(i<pos-1){
            temp=temp->next;
            i++;                                 
        }
        newnode->next=temp;
        newnode->prev=temp->prev;
        temp->prev->next=newnode;
        temp->prev=newnode;
    }
    printf("Inserted %d at %d index\n",newnode->data,pos);
}
void insert_after_pos(){
    int pos,i=0;
    printf("Enter position:");
    scanf("%d",&pos);
    NODE *newnode=(NODE*)malloc(sizeof(NODE));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->prev=newnode->next=NULL;;
    if(pos>list_length()){
        printf("Invalid position!\n");
    }
    else if(pos==1){
    	insert_begin();
	}
    else{
        NODE *temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
        newnode->prev=temp->prev;
        newnode->next=temp;
        temp->prev->next=newnode;
        temp->prev=newnode;
    }
    printf("Inserted %d at %d position\n",newnode->data,pos+1);
}
void display(){
    NODE *temp=head;
    printf("Elements inside list:");
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }printf("\n");
}
int list_length(){
    length=0;
    NODE *temp=head;
    while(temp!=0){   
        temp=temp->next;
        length++;
    }
    return length;   
}
int main(){
    int choice,len;
    label:
    printf("Following menu:\n1.Create linklist\n2.Insert at end\n3.Insert at beginning\n4.Insert at position\n5.Insert after position\n6.Display\n7.Length of list\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        create_DLL();
        break;
        case 2:
        insert_end();
        break;
        case 3:
        insert_begin();
        break;
        case 4:
        insert_at_pos();
        break;
        case 5:
        insert_after_pos();
        break;
        case 6:
        display();
        break;
        case 7:
        len=list_length();
        printf("Length of list:%d",len);
        break;
        default:
        printf("Invalid choice");
    }
    printf("Want to do another operation?\n1.YES\n2.NO\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    if(choice==1){
        goto label;
    }else
    {
        exit(0);
    }
    return 0;
}
