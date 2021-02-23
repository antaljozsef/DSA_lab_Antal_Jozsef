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

    int peak = peakL(list,n);

    if (peak == -1){
        printf("\nThere is no peak!");
    }else{
        printf("\nThe location of the peak: %i",peak+1);
    }

    freeL(list);
    return 0;
}
