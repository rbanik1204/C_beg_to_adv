#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *top=0;
void push(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}
void pop()
{
    struct node *temp;
    temp=top;
    if(top==0){
    printf("Empty linklist!");
    }
    else{
    printf("popped element:%d\n",top->data);
    top=top->link;
    free(temp);
    }
}
void peek()
{
    if(top==0){
    printf("Empty linklist\n");
    }
    else{
    printf("top most element is %d\n",top->data);
    }
}
void display()
{
    if(top==0){
    printf("Empty linklist\n");
    }
    else{
    struct node *temp=top;
    printf("Following elemens:\n");
    while(temp!=0){
    printf("%d\t",temp->data);
    temp=temp->link;
    }
    }
}
void main()
{
    while(1)
    {
    int ch,item;
    printf("Following menu:\n1.Push\n2.Pop\n3.Display\n4.Peek\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch){
    case 1:
        printf("Enter data:");
        scanf("%d",&item);
        push(item);
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        peek();
        break;
    default:
        printf("Invalid choice\n");
    }
    }
}
