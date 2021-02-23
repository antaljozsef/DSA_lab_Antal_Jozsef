#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
    int n;
    printf("n=");
    scanf("%i",&n);

    int* list = (int*)malloc(n*sizeof(int));

    upload(list,n);
    print_out(list,n);

    int even, odd, positive, negative;

    even = evenL(list,n);
    odd = oddL(list,n);
    positive = positiveL(list,n);
    negative = negativeL(list,n);

    printf("\nCount of even numbers: %i",even);
    printf("\nCount of odd numbers: %i",odd);
    printf("\nCount of positive numbers: %i",positive);
    printf("\nCount of negative numbers: %i",negative);

    freeL(list);

    return 0;
}
