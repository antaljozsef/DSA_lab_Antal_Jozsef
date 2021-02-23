#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main() {
    int n;
    printf("n=");
    scanf("%i",&n);

    int* list = (int*)malloc(n*sizeof(int));

    upload(list,n);
    print_out(list,n);

    freeL(list);
    return 0;
}
