#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N],top=-1;
void push(){
    if(top==N-1){
        printf("Stack is full");
    }
    else{
        printf("Enter value:");
    }
}