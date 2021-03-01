//
// Created by Antal József on 2021. 03. 01..
//
#include <stdio.h>
#include <math.h>
#include "Function.h"

void egyenletMegoldas(int a, int b, int c)
{
    int delta = pow(b, 2) - 4 * a * c;
    printf("delta = %i ", delta);
    float gyok1 = 0;
    float gyok2 = 0;

    gyok1 += (-b + sqrt(delta)) / (2 * a);
    gyok2 += (-b - sqrt(delta)) / (2 * a);

    printf("Az egyenet gyokei: x1 = %.2f, x2 = %.2f", gyok1, gyok2);
}