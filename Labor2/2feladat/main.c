#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"

int main() {
    srand(time(NULL));

    int n = 100000000;
    printf("n=");
    // scanf("%i",&n);

    int value = 1;
    printf("%i\n",value);

    int *list = (int *)malloc(n*sizeof (int));

    feltoltes(list,n);
    // kiiras(list,n);

    clock_t begin = clock();

    int location = linerar_search(list, n, value);

    clock_t end = clock();
    double time_spent =  (double)(end - begin)/CLOCKS_PER_SEC;

    printf("%lf\n",time_spent);
    printf("\n%i", location);



    return 0;
}
