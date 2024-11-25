#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Create Node
void create_Node() {
    if (head == NULL) {
        int n;
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        if (n != 0) {
            int info;
            struct Node* newNode;
            struct Node* temp;
            newNode = (struct Node*)malloc(sizeof(struct Node));
            newNode->next = NULL;
            head = newNode;
            temp = head;
            printf("\nEnter number to be inserted: ");
            scanf("%d", &info);
            head->data = info;
            for (int i = 2; i <= n; i++) {
                newNode = (struct Node*)malloc(sizeof(struct Node));
                newNode->next = NULL;
                temp->next = newNode;
                printf("\nEnter number to be inserted: ");
                scanf("%d", &info);
                newNode->data = info;
                temp = temp->next;
            }
        }
        printf("\nThe list is created\n");
    } else {
        printf("\nThe List is already created\n");
    }
}

// Insert at beginning
void insert_begin() {
    int new_data;
    struct Node* new_Node = (struct Node*)malloc(sizeof(struct Node));
    new_Node->next = head;
    printf("\nEnter number to be inserted: ");
    scanf("%d", &new_data);
    new_Node->data = new_data;
    head = new_Node;
}

// Insert at end
void insert_last() {
    int val;
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    struct Node* one = (struct Node*)malloc(sizeof(struct Node));
    temp->next = one;
    printf("\nEnter number to be inserted: ");
    scanf("%d", &val);
    one->data = val;
    one->next = NULL;
}

// Insert at position
void insert_pos() {
    int ele, pos;
    printf("\nEnter position and data: ");
    scanf("%d %d", &pos, &ele);
    int count = 0;
    struct Node* temp = head;
    while (temp->next != NULL) {
        count++;
        if (count == pos - 1) {
            struct Node* Three = (struct Node*)malloc(sizeof(struct Node));
            Three->next = temp->next;
            temp->next = Three;
            Three->data = ele;
            return;
        }
        temp = temp->next;
    }
}

// Delete from front
void delete_front() {
    if (head == NULL) {
        printf("\nThe list is empty");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
}

// Delete from end
void delete_last() {
    if (head == NULL || head->next == NULL) {
        printf("\nThe list is empty");
        return;
    }
    struct Node* secondlast = head;
    while (secondlast->next->next != NULL) {
        secondlast = secondlast->next;
    }
    free(secondlast->next);
    secondlast->next = NULL;
}

// Delete from position
void delete_pos() {
    int pos;
    struct Node* temp = head;
    struct Node* prev = NULL;
    if (head == NULL) {
        printf("\nThe list is empty");
        return;
    }
    printf("\nEnter index: ");
    scanf("%d", &pos);
    for (int i = 1; temp != NULL && i < pos; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }
}

// Display list
void display() {
    struct Node* temp = head;
    if (head == NULL) {
        printf("The list is empty");
        return;
    }
    while (temp != NULL) {
        printf("data: %d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    create_Node();
    int ch;
    while (1) {
        printf("\n\t1 To see list\n");
        printf("\t2 For insertion at starting\n");
        printf("\t3 For insertion at end\n");
        printf("\t4 For insertion at any position\n");
        printf("\t5 For deletion of first element\n");
        printf("\t6 For deletion of last element\n");
        printf("\t7 For deletion of element at any position\n");
        printf("\nEnter Choice:\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                display();
                break;
            case 2:
                insert_begin();
                break;
            case 3:
                insert_last();
                break;
            case 4:
                insert_pos();
                break;
            case 5:
                delete_front();
                break;
            case 6:
                delete_last();
                break;
            case 7:
                delete_pos();
                break;
            default:
                printf("Invalid choice!");
        }
    }
    return 0;
}
