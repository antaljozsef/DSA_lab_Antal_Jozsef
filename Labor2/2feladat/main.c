#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main() {
    int n;
    printf("n=");
    scanf("%i",&n);

    int value;
    printf("Add meg a keresett erteket! ");
    scanf("%i ",&value);

    int *list = (int *)malloc(n*sizeof (int));

    feltoltes(list,n);
    kiiras(list,n);

    int location = linerar_search(list, n, value);

    printf("\n%i", location);

    return 0;
}
