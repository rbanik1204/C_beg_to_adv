#include<stdio.h>
#include<stdlib.h>
int list_length();
struct node{
    int data;
    struct node *link;
};
struct node* head=NULL,*head1,*temp,*ptr;
void create_SL(int x){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    printf("Inserted->%d",newnode->data);
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
void insert_end(int x){
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
void insert_list(){
    int pos,choice=1,i=1;
    printf("Enter position:");
    scanf("%d",&pos);
    if(pos>list_length()){
        printf("Invalid position!\n");
    }else
    {
        while(choice!=0){
            struct node *newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL){
            printf("Memory Allocation failed!");
            return;
        }
    printf("\nEnter data:");
    scanf("%d",&newnode->data);
    printf("Inserted->%d",newnode->data);
    newnode->link=NULL;
    if(head1==0){
        head1=temp=newnode;
    }
    else{
        temp->link=newnode;
        temp=temp->link;
    }
    temp->link=NULL;
    printf("\nWant to add more node? 1 for YES 0 for NO\nEnter your choice:");
    scanf("%d",&choice);
    }
    temp=head;
    while(i<pos-1){
        temp=temp->link;
    }
    ptr=temp->link;
    temp->link=head1;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=ptr;
    }
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
        while(count!=pos-1){
            count++;
            ptr=temp;
            temp=temp->link;
        }
        if(ptr==head){
        printf("Deleted->%d",ptr->data);
        free(ptr);
        head==0;
        }
        else{
        ptr->link=temp->link;
        printf("Deleted->%d",temp->data);  
        free(temp); 
        }
    }    
} 
void display(){
    int count=0;
    struct node *ptr=head;
    if(head==0){
    printf("\nEmpty Linklist!\n");}
    else{
    printf("\nInserted elements:");
    while(ptr!=0){
        count++;
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
    }
}
int count=0;
int list_length(){
    struct node *temp=head;
    while(temp!=0){
        count++;
        temp=temp->link;
    }
    return count;
}
void main(){
    int choice,value,pos,len,ch=1;
    label:
    printf("Following menu:\n0.Create linklist\n1.Insert at end\n2.Insert at beginning\n3.Insert at a particular position\n4.Deletion at beginning\n5.Deletion at end\n6.Delete a particular node\n7.Display\n8.length of list\n9.Reverse the list\n10.Insert list\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 0:
        while(ch!=0){
            printf("Enter data:");
            scanf("%d",&value);
            create_SL(value);
            printf("\nWant to add more? 1 for YES 0 for NO\n Enter your choice:");
            scanf("%d",&ch);
        }
        break;
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
            delete_pos(pos);
            break;
        case 7:
            display();
            break;
        case 8:
            len=list_length();
            printf("\nLength of the list:%d\n",len);
            break;
        case 9:
            rev_list();
            break;
        case 10:
            insert_list();
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
        exit(0);
    }
}