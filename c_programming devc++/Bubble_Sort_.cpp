#include<stdio.h>
#include<stdlib.h>

// Definition of the node structure
struct node {
    int data;
    struct node* next;
};

// Function prototypes
void insert_at_beginning(struct node** start_ref, int data);
void bubble_sort(struct node* start);
void swap(struct node* a, struct node* b);
void print_list(struct node* head);

int main() {
    struct node* head = NULL;

    // Insert nodes into the linked list
    insert_at_beginning(&head, 5);
    insert_at_beginning(&head, 2);
    insert_at_beginning(&head, 9);
    insert_at_beginning(&head, 3);
    insert_at_beginning(&head, 1);

    printf("Original list: ");
    print_list(head);

    // Perform bubble sort on the linked list
    bubble_sort(head);

    printf("Sorted list: ");
    print_list(head);

    return 0;
}

// Function to insert a node at the beginning of the linked list
void insert_at_beginning(struct node** start_ref, int data) {
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *start_ref;
    *start_ref = new_node;
}

// Bubble sort for linked list
void bubble_sort(struct node* head) {
    int swapp, i;
    struct node* ptr1;
    struct node* lptr = NULL;
    
    if (head == NULL)
        return;

    do {
        swapp = 0;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                swap(ptr1, ptr1->next);
                swapp = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapp);
}

// Swap data of two nodes
void swap(struct node* a, struct node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

// Function to print the linked list
void print_list(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

