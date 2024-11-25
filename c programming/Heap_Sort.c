#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int SIZE;
#define PRINT_AND_MSG(msg, SIZE) \
    (printf(" %s", msg), scanf("%d", &SIZE))  // Correct macro definition

// Swap function to swap two integers
void swap(int *val1, int *val2) {
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

// Heapify function to maintain the heap property
void Heapify(int *array, int n, int i) {
    int largest = i;
    int l = 2 * i + 1;  // Left child
    int r = 2 * i + 2;  // Right child

    // Check if left child is larger than root
    if (l < n && array[l] > array[largest]) {
        largest = l;
    }

    // Check if right child is larger than root or left child
    if (r < n && array[r] > array[largest]) {
        largest = r;
    }

    // If root is not largest, swap and heapify again
    if (largest != i) {
        swap(&array[i], &array[largest]);  // Swap the root with the largest element
        Heapify(array, n, largest);        // Recursively heapify the affected sub-tree
    }
}


void Heap_sort(int *array, int n){
    int i;
    for(i =n/2 - 1; i>= 0 ;i--){
        Heapify(array,SIZE,i);
    }
    for(i = n - 1; i>=0; i--){
        swap(&array[0], &array[i]);
        Heapify(array, i, 0);
    }
    printf("Sorted Elements:");
    for(i = 0; i<=SIZE-1;i++)
        printf("%d\t", array[i]);
    printf("\n");
}
//------Create array-----
void main(){
    PRINT_AND_MSG("Enter size of array:", SIZE);
    int *array = (int*) malloc(SIZE * sizeof(int));
    for(int i = 0; i<= SIZE-1; i++)
        scanf("%d", &array[i]);
    Heap_sort(array, SIZE);
} 