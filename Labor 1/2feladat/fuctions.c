//
// Created by Antal József on 2021. 02. 23..
//

#include "fuctions.h"
#include <stdio.h>
#include <stdlib.h>

void upload(int* list, int n)
{
    for (int i = 0; i < n; ++i) {
        float num = (float)(rand() % 100);
        float denum = (float)(rand() % 20);
        list[i] = num / denum;
    }
}

void print_out(int* list, int n)
{
    printf("The list: ");
    for (int i = 0; i < n; ++i) {

        printf("%i ",list[i]);
    }
}

int sumL(int* list, int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += list[i];
    }

    return sum;
}

int multiplicationL(int* list, int n)
{
    int multiplication = 1;
    for (int i = 0; i < n; ++i) {
        multiplication *= list[i];
    }

    return multiplication;
}

float averageL(int* list, int n)
{
    float average = 0;
    for (int i = 0; i < n; ++i){
        average += list[i];
    }
    average/=n;

    return average;
}

void freeL(int *list)
{
    free(list);
}