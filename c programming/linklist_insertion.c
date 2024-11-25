#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *head=0;
void insert_end(void){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof (struct node));
    printf("Enter a value:");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    if(head==0){
        head=temp=newnode;
    }
    else{
        temp->link=newnode;
        newnode->link=NULL;
    }
}