//
// Created by Antal József on 2021. 02. 23..
//

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

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
    for (int i = 0; i < n; ++i) {

        printf("%i ",list[i]);
    }
}

int peakL(int* list, int n)
{
    int max = list[0], loc;
    for (int i = 1; i < n; ++i) {
        if (list[i] > max)
        {
            max = list[i];
            loc = i;
        }
    }

    for (int i = 1; i < loc; ++i) {
        if (list[i-1] > list[i])
            return -1;
    }

    for (int i = loc+1; i < n; ++i) {
        if (list[i-1] < list[i])
            return -1;
    }

    return loc;
}

void freeL(int *list)
{
    free(list);
}