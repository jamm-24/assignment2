//main.c
#include "statistics.h"
#include <stdio.h>
#include <math.h>
#include "output_array.h"


int main (){
double array1[]={20, 40, 60, 80, 100};
int size1=sizeof(array1)/sizeof(array1[0]);

double array2[]={1, 3, 5, 7, 9, 8, 2};
int size2=sizeof(array2)/sizeof(array2[0]);

double array3[]={60, 70, 80};
int size=sizeof(array3)/sizeof(array3[0]);

printf("Array 1:\n");
printf("Sum: %.2f\n", calculateSum(array1, size1));
printf("average: %.2f\n", calculateAverage(array1, size1));
printf("deviation: %.2f\n\n", calculateDeviation(array1, size1));
printf("Max: %.2f\n", calculate_max(array1, size1));
printf("Min: %.2f\n", calculate_min(array1, size1));
printf("Absolute value of the first element: %.2f \n\n", fabs(array1[0]));

printf("Array 2:\n");
printf("Sum: %.2f\n", calculateSum(array2, size2));
printf("average: %.2f\n", calculateAverage(array2, size2));
printf("deviation: %.2f\n\n", calculateDeviation(array2, size2));
printf("Max: %.2f\n", calculate_max(array2, size2));
printf("Min: %.2f\n", calculate_min(array2, size2));
printf("Absolute value of the second element: %.2f \n\n", fabs(array2[0]));

printf("Array 3:\n");
printf("Sum: %.2f\n", calculateSum(array3, size));
printf("average: %.2f\n", calculateAverage(array3, size));
printf("deviation: %.2f\n\n", calculateDeviation(array3, size));
printf("Max: %.2f\n", calculate_max(array3, size));
printf("Min: %.2f\n", calculate_min(array3, size));
printf("Absolute value of the third element: %.2f \n\n", fabs(array3[0]));


return 0;
}

