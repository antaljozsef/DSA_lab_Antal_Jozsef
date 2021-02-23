#include <stdio.h>
#include <stdlib.h>
#include "fuctions.h"
#include <time.h>

int main() {

    int n;
    printf("n=");
    scanf("%i",&n);

    float* arr = (float*)malloc(n * sizeof(float));

    upload(list,n);
    print_out(list,n);

    int sum, multiplication;
    float average;

    sum = sumL(list,n);
    multiplication = multiplicationL(list,n);
    average = averageL(list,n);

    printf("\nSum: %i",sum);
    printf("\nMultiplication: %i",multiplication);
    printf("\nAverage: %.2f",average);

    freeL(list);

    return 0;
}
