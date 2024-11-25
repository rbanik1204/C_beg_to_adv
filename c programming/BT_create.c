#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *left,*right;
}BT;
BT *root= NULL;
BT* createnode(){
    BT *newnode=(BT*)malloc(sizeof(BT));
    newnode->left=newnode->right=NULL;
    return newnode;
}
BT *create_BT(){
    BT* newnode = createnode();
    printf("Enter value(0 for No child):");
    scanf("%d",&newnode->data);
    if(!newnode->data)
        return NULL;
    printf("Inserted->%d\n",newnode->data);
    printf("Left child of %d:\n ",newnode->data);
    newnode->left = create_BT();
    printf("Right child of %d:\n",newnode->data);
    newnode->right = create_BT();
    return newnode;
}
void main(){
   BT *root = NULL;
   root = create_BT();
   printf("\033[31mBinary Tree Created Successfully!\033[0m");
}
