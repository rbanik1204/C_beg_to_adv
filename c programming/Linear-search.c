#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int** create_array(){
    int **array =(int**) malloc(SIZE *sizeof(int*));
    for(int i = 0;i<SIZE;i++){
        scanf("%d",&(array)[i]);
    } 
    for(int i = 0;i<SIZE;i++){
        printf("%d",(array)[i]);
    }
    return array; 
}
int main(){
    int ** array = create_array();
    printf("\n%d",array[0]);

}