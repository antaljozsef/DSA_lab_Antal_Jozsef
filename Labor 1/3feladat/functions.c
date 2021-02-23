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

int evenL(int* list, int n)
{
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (list[i] % 2 == 0)
            count++;
    }

    return count;
}

int oddL(int* list, int n)
{
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (list[i] % 2 != 0)
            count++;
    }

    return count;
}

int positiveL(int* list, int n)
{
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (list[i] >= 0)
            count++;
    }

    return count;
}

int negativeL(int* list, int n)
{
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (list[i] < 0)
            count++;
    }

    return count;
}

void freeL(int *list)
{
    free(list);
}