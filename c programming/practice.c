#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr1[2][2]={1,2,3,4};
    int*** arr2 = malloc(2 * sizeof(int**));
    for (int i = 0; i < 2; i++)
        arr2[i] = malloc(2 * sizeof(int*));
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++)
            arr2[i][j]=&arr1[i][j];
    }
    printf("Array elements:\n");
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++)
            printf("%d\t",*arr2[i][j]);
        printf("\n");
    }
}