//
// Created by Antal József on 2021. 03. 30..
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions.h"

Digit* Create(int capacity)
{
    Digit *number = (Digit*)malloc(sizeof(Digit));


    if (!number)
    {
        printf("Error");
        return 0;
    }

    number->nrdigit = capacity;
    number ->digits = (Dig*)malloc(number->nrdigit*sizeof(Dig));

    for (int i = 0; i < capacity; ++i) {
        number->digits[i].cdig = 0;
    }

    return number;
}

void Destory(Digit *array)
{
    free(array->digits);
    free(array);
}

int init(Digit *array, int digit) {
    for (int i = 0; i < array->nrdigit; ++i) {
        if (digit == array->digits[i].vdig) {
            return i;
        } else
            return -1;
    }
}

void Input(Digit *array, int number)
{
    Digit *tmp;

    tmp = Create(10);
    tmp->nrdigit = 0;

    while (number!=0)
    {
        tmp->nrdigit++;
        if (init(array),number%10)
        {
            tmp ->digits[tmp->nrdigit -1].cdig++;
        }else{
            tmp->digits[tmp->nrdigit-1].cdig = 1;
            tmp->digits[array->nrdigit-1].vdig = number%10;
        }

        number /= 10;
    }

    *array = tmp;
}

int Digit_k(Digit *array, int k)
{
    for (int i = array->nrdigit-1; i >= 0 ; i--)
    {
        if (array->nrdigit == k)
        {
            return array->digits[i];
        }
    }
}

int SizeDigit(Digit *array)
{
    return array->nrdigit;
}

void Print(Digit *array)
{
    for (int i = array->nrdigit-1; i >=0; i--) {
        printf("%i : %i",array->digits[i].vdig,array->digits[i].cdig);
    }
}

bool asc(Digit* array)
{
    for (int i = array->nrdigit-2; i >= 0 ; i--) {
        if (array->digits[i+1] < array->digits[i])
        {
            return false;
        }
    }
    return true;
}