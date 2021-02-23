//
// Created by Antal József on 2021. 02. 23..
//

#include <stdio.h>
#include <stdlib.h>
#include "function.h"

void upload(int* list, int n)
{
    for (int i = 0; i < n; ++i) {
        printf("The %i element of the array: ",i+1);
        scanf("%i",&list[i]);
    }
}

void print_out(int* list, int n)
{
    printf("The list: ");
    for (int i = n-1; i >= 0; i--) {

        printf("%i ",list[i]);
    }
}

void freeL(int *list)
{
    free(list);
}