#include<stdio.h>
#include<stdlib.h>
#define ASK_SIZE(msg, SIZE) \
    (printf("%s ", msg), scanf("%d", &SIZE))

typedef struct node{
    int data;
    struct node *next;
} NODE;

typedef struct stack{
    NODE *top;
    int size;
} STACK;

NODE* create_node(int data){
    NODE* newnode = (NODE*) malloc(sizeof(NODE));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void initstack(STACK* stack){
    stack->top = NULL;  
    stack->size = 0;    
}

NODE* Push_Node(int data, STACK* stack){
    NODE* newnode = create_node(data);
    if(stack->top == NULL){                                                                                                                                                              
        stack->top = newnode;
        printf("Inserted->%d\n", stack->top->data);
        stack->size++;
    }
    else{
        newnode->next = stack->top;  
        stack->top = newnode;  
        printf("Inserted->%d\n", stack->top->data);
        stack->size++;
    }
}

void Bubble_Sort(STACK* stack, int pass){
    NODE* temp = NULL;
    int i, swap;
    for(i = 0; i < pass - 1; i++){
        temp = stack->top;
        while(temp != NULL && temp->next != NULL){
            if(temp->data> temp->next->data){
                swap = temp->data;
                temp->data = temp->next->data;
                temp->next->data = swap;
            }
            temp = temp->next;
        }
    }
    printf("Sorted stack:\n");
    temp = stack->top;
    while(temp != NULL){
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void free_stack(STACK* stack) {
    NODE* temp = stack->top;
    while (temp != NULL) {
        NODE* next_node = temp->next;
        free(temp);  
        temp = next_node;
    }
    stack->top = NULL;  
}

int main(void){
    int SIZE, i;
    STACK stack;
    ASK_SIZE("Enter the size of the array:", SIZE);
    int* array = (int*) malloc(SIZE * sizeof(int));
    if(!array){
        perror("\033[31mMemory Allocation Failed!\033[0m");
        exit(1);
    }

    printf("Enter array elements: ");
    for(i = 0; i < SIZE; i++){
        scanf("%d", &array[i]);
    }

    initstack(&stack);
    for(i = 0; i < SIZE; i++){
        Push_Node(array[i], &stack);
    }

    Bubble_Sort(&stack, SIZE);

    free(array);

    free_stack(&stack);

    if(stack.top == NULL)
        printf("Stack memory released successfully!\n");
}

