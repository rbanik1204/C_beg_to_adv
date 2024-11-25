#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *link;
}NODE;
int i=1;
NODE *head1,*head2,*temp=NULL,*newnode;
NODE* create_LL(){
    printf("Inside list %d\n",i++);
    int ch,x;
    NODE *head=NULL;
    do{
    newnode = (NODE*)malloc(sizeof(NODE));
    printf("Enter data:");
    scanf("%d",&x);
    newnode->data = x;
    printf("Inserted->%d\n",newnode->data);
    newnode->link = NULL;
    if(!head){
        head = temp = newnode;
    }
    else{
        temp->link = newnode;
        temp = temp->link;
    }
    printf("want to keep inserting? 1 for yes 0 for no:");
    scanf("%d",&ch);
    }while(ch!=0);
    return head;
}
int ch;
void merged_list(){
    printf("Merged list:");
    if (ch==1){
        temp = head1;
        while(temp!= NULL){
            printf("%d\t",temp->data);
            temp = temp->link;
        }
    }
    else if(ch == 2){
        temp = head2;
        while(temp!= NULL){
            printf("%d\t",temp->data);
            temp = temp->link;
        }
    }
}
int main(){
    int choice;
    head1 = create_LL();
    temp = head1;
    printf("Entered first list:");
    while(temp!= NULL){
        printf("%d\t",temp->data);
        newnode = temp;
        temp=temp->link;
    }
    head2 = create_LL();
    printf("\nEntered second list:");
    temp = head2;
    while(temp->link != NULL){
        printf("%d\t",temp->data);
        temp=temp->link;
    }
    printf("%d",temp->data);
    printf("\nPress 1 for \033[31mInsert list 1 at the beginning\n press 2 for Insert list 2 at the beginning\n\033[0m");
    scanf("%d",&ch);
    if(choice == 1)
        newnode->link = head2;
    else if(choice == 2)
        temp->link = head1;
    merged_list();
}
