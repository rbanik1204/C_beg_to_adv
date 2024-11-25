#include<stdio.h>
#include<stdlib.h>
int SIZE;
#define PRINT_AND_ASK(msg,SIZE)\
    (printf(" %s ", msg),scanf("%d",&SIZE))

int* Count_Sort(int *array, int n){
    int i,k = 9;
    int count[k],sorted[SIZE];
    for(i = 0;i<n;i++){
        count[array[i]] = count[array[i]]+1;
    }
    for(i = 1;i<=k;i++){
        count[i] = count[i] +count[i-1];
    }
    for(i = n-1;i<=0;i++){
        sorted[--count[array[i]]] = array[i];
    }
    printf("Array elements:");
    for(i = 0; i<n; i++)
        printf("%d\t", sorted[i]);
}
int main(){
    int i;
    PRINT_AND_ASK("Enter Size of array:",SIZE);
    int *array = (int*)calloc(SIZE,sizeof(int));
    for(i = 0; i<SIZE; i++)
        scanf("%d", &array[i]);
    array = Count_Sort(array,SIZE);
}