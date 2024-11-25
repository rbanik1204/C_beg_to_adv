#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* link;
};
struct node* head=0;
void count_node()
{
int i=0,choice;
struct node *temp;
temp=head;
printf("\nInserted elements:");
while(temp!=0){
//fflush(stdout);
printf("%d\t",temp->data);
temp=temp->link;
i++;
}printf("\n");
printf("\nwould you like to know the number of inserted elements?\n1.Yes\n2.No\n");
scanf("%d",&choice);
if(choice==1)
printf("Number of inserted elements:%d",i);
}
void insert_front(int x)
{
int i=0,choice,j=0;
struct node *newnode,*temp;
newnode=(struct node*)malloc(sizeof(newnode));
newnode->data=x;
if(head==0){
head=temp=newnode;
}
else{
temp->link=newnode;
temp=newnode;
}
temp->link=NULL;
count_node();
}
void main()
{
int choice,value,query;
label:
printf("Following Menu:\n1.insert_front\n2.insert_begin\n3.insert_position\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nEnter value which you want to insert:");
scanf("%d",&value);
insert_front(value);
}
printf("\nwould you like to continue?\n 1 for 'Yes' 2 for 'No'\n");
scanf("%d",&query);
switch(query)
{
case 1:
goto label;
case 2:
exit(1);
default:
printf("\nInvalid choice!");
}
}