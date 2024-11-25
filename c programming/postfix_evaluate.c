#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 5
int top = -1;

int stack[SIZE];


void push(int data){
    if(top == SIZE - 1)
        printf("Overflowing stack!\n");
    else
        stack[++top] = data;
}

int pop(){
    int Value;
    if(top == -1)
        printf("Underflowing stack!\n");
    else{
    Value = stack[top--];
    return Value;
    }
}

int main(){
    int Result = 0, Top_Element, Next_To_Top;
    printf("Enter valid expression:");
    char *exp = (char*)malloc(SIZE * sizeof(char));
    for(int i = 0;i<SIZE;i++){
        scanf("%c",&exp[i]);
    }
    //----------------------Evaluation process-------------------------

    for(int i = 0;exp[i]!= '\0';i++){
        if(isdigit(exp[i]))
            push(exp[i]-'0');
        else{
            Top_Element = pop();
            Next_To_Top = pop();
            switch(exp[i]){
                case '+':
                    Result = Top_Element + Next_To_Top;
                    break;
                case '-':
                    Result = Top_Element - Next_To_Top;
                    break;
                case '*':
                    Result = Top_Element * Next_To_Top;
                    break;
                case '/':
                    Result = Top_Element / Next_To_Top;
                    break;
                case '^':
                    Result = Top_Element ^ Next_To_Top;
                    break;
                default:
                    printf("Enter Valid operator!\n");
            }
            if(Result != 0)
                push(Result);
        }
    }
    if(top == 0){
        printf("Evaluated postfix expression value:%d",stack[top]);
        pop();
    }

}