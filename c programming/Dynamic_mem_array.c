#include<stdio.h>
#include<stdlib.h>

//Using dynaming memory allocation

int main(){
    int **a = (int**)malloc(2 * sizeof(int*));
    *a = (int*)malloc(2*sizeof(int*));
}