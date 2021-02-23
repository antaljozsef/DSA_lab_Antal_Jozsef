#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"

int main() {
    srand(time(NULL));

    int n;
    printf("n=");
    scanf("%i",&n);

    int value = rand();
    printf("%i\n",value);

    int *list = (int *)malloc(n*sizeof (int));

    feltoltes(list,n);
    kiiras(list,n);

    int location = linerar_search(list, n, value);

    printf("\n%i", location);

    return 0;
}
