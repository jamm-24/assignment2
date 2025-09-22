// output_array.c
#include "output_array.h"
#include <stdio.h> 


void printArray(double arr[], int size){
	printf("Array elements: ");
	for(int i=0; i<size; i++){
		printf("%lf", arr[i]);
	}
	printf("\n");
}
