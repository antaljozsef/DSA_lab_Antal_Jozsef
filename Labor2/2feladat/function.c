//
// Created by Antal József on 2021. 02. 23..
//

#include "function.h"
#include "stdio.h"


int feltoltes(int* list, int n)
{
    for (int i = 0; i < n; ++i) {
        scanf("%i",&list[i]);
    }
}

int kiiras(int *list, int n)
{
    printf("A TOMB elemei: ");
    for (int i = 0; i < n; ++i) {
        printf("%i ",list[i]);
    }
}

int linerar_search(int* list, int n, int value)
{
    for (int i = 0; i < n; ++i) {
        if (list[i] == value)
        {
            return i;
        }
    }
    return -1;
}
