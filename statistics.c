//statistics.c
#include "statistics.h"
#include <math.h>
#include <stdio.h>

//calculate sum
double calculateSum(double arr[], int size){
	double sum = 0;
	for (int i=0; i<size; i++){
		sum = arr[i];
	}
	return sum;
}

//Calculate the average of an array
double calculateAverage(double arr[], int size){
	if(size == 0){
	return 0;
	}
	double sum = 0;
	for (int i=0; i<size; i++){
		sum += arr[i];
	}
	return sum/size;
}
//Calculate the standard deviation of an array
double calculateDeviation(double arr[], int size){
	if(size <= 1){
		return 0;
	}
	double average=calculateAverage(arr, size);
	double sumofSquare = 0;
	for(int i=0; i<size; i++){
		sumofSquare += pow(arr[i]-average, 2);
	}
	return sqrt(sumofSquare/size);
	}
//calculate max
double calculate_max(double arr[], int size){
	if(size == 0){
		return 0;
	}
	double maxVal = arr[0];
	for(int i=1; i<size; i++) {
		if(arr[i]> maxVal){
			maxVal=arr[i];
		}
	}
	return maxVal;
}
//calculate min
double calculate_min(double arr[], int size){
	if(size == 0){
		return 0;
	}
	double minVal = arr[0];
	for(int i=1; i<size; i++){
		if(arr[i]< minVal){
			minVal = arr[i];
		}
	}
	return minVal;
}
