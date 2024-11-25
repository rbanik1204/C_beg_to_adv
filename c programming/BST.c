#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int key;
    struct node *left,*right;
}BST;
BST* createnewnode(int data){
    BST* newnode=(BST*)malloc(sizeof(BST));
    newnode->key=data;
    newnode->left = newnode->right = NULL;
    printf("Entered data:%d\n",newnode->key);
    return newnode;
}
BST* search_BST(BST* root,int data){
    if(root == NULL || root->key ==data)
        return root;
    else if(data < root->key)
        return search_BST(root->left,data);
    else if(data > root->key)
        return search_BST(root->right,data);
    return NULL;
}
BST* insert_node(BST* root,int data){
    if(root==NULL)
        return createnewnode(data);
    else if(data < root->key){
        //printf("\033[31mERROR!\033[0m");
        root->left = insert_node(root->left,data);
        printf("Left of data %d is %d\n",root->key,data);
        }
    else if(data > root->key){
        root->right = insert_node(root->right,data);
        printf("Right of data %d is %d\n",root->key,data);
        }
    
    return root;
}
int main(){
    BST* root = NULL;
    root = insert_node(root,50);
    insert_node(root,40);
    insert_node(root,10);
    insert_node(root,70);
    insert_node(root,20);
    insert_node(root,50);
    BST* check_Element=search_BST(root,20);
    if(check_Element != NULL)
        printf("Element found!");
    else
        printf("Not found!");
}
