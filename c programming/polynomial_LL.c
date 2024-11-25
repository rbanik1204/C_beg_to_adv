#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int coeff;
    int power;
    struct node *link;
} POLY;

POLY *head1 = NULL, *head2 = NULL, *head3 = NULL, *temp = NULL;
int terms1, terms2;

POLY* node_create(int coeff, int power) {
    POLY *newnode = (POLY*)malloc(sizeof(POLY));
    newnode->coeff = coeff;
    newnode->power = power;
    newnode->link = NULL;
    return newnode; 
}

void create_POLY_first(int coeff, int power) {
    POLY *newnode = node_create(coeff, power);
    if (!head1) {
        head1 = temp = newnode;
    } else {
        temp->link = newnode;
        temp = temp->link;
    }
}

void create_POLY_sec(int coeff, int power) {
    POLY *newnode = node_create(coeff, power);
    if (!head2) {
        head2 = temp = newnode;
    } else {
        temp->link = newnode;
        temp = temp->link;
    }
}

void sum_POLY(){
    POLY *PLY1,*PLY2;
    if(terms1 == terms2){
        for(int i=0;i<terms1;i++){
            POLY* sum = (POLY*)malloc(sizeof(POLY));
            sum->link = NULL;
            if(!head3){
                head3 = temp = sum;
                if(head1->power == head2->power){
                head3->coeff = head1->coeff + head2->coeff;
                head3->power = head1->coeff + head2->coeff;
                }
                else{
                    head3->coeff = head1->coeff;head3->power = head1->power;
                    head3->link = head2;
                    temp = head3->link;
                }
                PLY1 = head1->link;PLY2 = head2->link;
            }
            else{
                if(PLY1->power == PLY2->power){
                    sum->power = PLY1->power + PLY2->power;
                    sum->coeff = PLY1->coeff + PLY2->coeff;
                    temp->link = sum;
                }
                else{
                    temp->link = PLY1;
                    temp = temp->link;
                    temp->link = PLY2;
                }
                PLY1 = PLY1->link;PLY2 = PLY2->link;
            }
        }
    }
}

void display_SUM_POLY() {
    printf("Following polynomial: ");
    temp = head3;

    while (temp != NULL) {
        printf("%dX^%d", temp->coeff, temp->power);
        temp = temp->link;
        if (temp != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {  
    int power, coeff;

    printf("Enter number of terms in first Polynomial: ");
    scanf("%d", &terms1);
    for (int i = 0; i < terms1; i++) {  
        printf("Enter coefficient: ");
        scanf("%d", &coeff);
        printf("Enter power: ");
        scanf("%d", &power);
        create_POLY_first(coeff, power);
    }

    printf("Enter number of terms in second Polynomial: ");
    scanf("%d", &terms2);
    for (int j = 0; j < terms2; j++) {  
        printf("Enter coefficient: ");
        scanf("%d", &coeff);
        printf("Enter power: ");
        scanf("%d", &power);
        create_POLY_sec(coeff, power);
    }

    sum_POLY();  // Call sum_POLY to perform the addition
    display_SUM_POLY();

    return 0;  // Added return statement for main()
}
