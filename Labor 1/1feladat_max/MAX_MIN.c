//
// Created by Antal József on 2021. 02. 23..
//

#include "MAX_MIN.h"

int maxN(int a, int b, int c)
{
    int max = a;

    if (max < b)
    {
        max = b;
    }

    if (max < c)
    {
        max = c;
    }

    return max;
}
int minN(int a, int b, int c)
{
    int min = a;

    if (min > b)
    {
        min = b;
    }

    if (min > c)
    {
        min = c;
    }

    return min;
}