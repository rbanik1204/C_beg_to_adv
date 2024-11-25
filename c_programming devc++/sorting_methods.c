#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//--------------------------Bubble sort Function Creation---------------------------------

void Bubble_Sort(int *array){
	int Pass,Comp_Val;
	bool NO_Swap;
	for(Pass = 0;Pass<SIZE-1; Pass++){
		NO_swap = true;
		for(Comp_Val = 0; Comp_Val<SIZE-Pass-1; Comp_Val++){
			if(array[Comp_Val] > array[Comp_Val+1]){
				Swap_Val = array[Comp_Val];
				array[Comp_Val] = array[Comp_Val+1]
				array[Comp_Val+1] = Swap_Val;
				NO_Swap = false;
			}
		}
		if(NO_Swap)
			break;
	}
	printf("Sorted List:");
	for(Val_index = 0; Val_Index <SIZE; Val_Index++){
		printf("%d",array[Val_Index]);
	}
}

//------------------------insertion sort Function Creation--------------------------------

void Insertion_Sort(int *array){
	int Sorted_List_index,Unsort_List_index, Val_index;
	for(Unsort_List_index = 1; Unsort_List_index<SIZE;Unsort_List_index++){
		Swap_Val = array[Unsort_List_index];
		Sorted_List_index = Unsorted_List_index -1;
		while(Sorted_List_index>=0 && array[Sorted_List_index] > Swap_Val){
			array[Sorted_List_index+1] = array[Sorted_List_index];
			Sorted_List_index --;
		}
		array[Sorted_List_index] = temp;
	}
	printf("Sorted List:");
	for(Val_index = 0; Val_Index <SIZE; Val_Index++){
		printf("%d",array[Val_Index]);
	}
}

//------------------------Selection Sort Function Creation---------------------------------

void Selection_Sort(int *array){
	int Sorted_Index,Min_Swap_Index, Min_Index, swap, Val_index;
	for(Sorted_Index = 0;Sorted_Index < SIZE-1;Sorted_Index++){
		Min_Index = Sorted_Index;
		for(Min_Swap_Index = Sorted_Index+1; Min_Swap_Index< SIZE;Min_Swap_Index++){
			if(array[Min_Index] > array[Min_Swap_Index]){
				Min_Index = Min_Swap_Index;
			}
		}
		if (Min_Index != Sorted_Index){
			swap = array[Sorted_Index];
			array[Sorted_Index] = array[Min_Index];
			array[Min_Index] = swap
		}
	}
	printf("Sorted List:");
	for(Val_index = 0; Val_Index <SIZE; Val_Index++){
		printf("%d",array[Val_Index]);
	}
}
