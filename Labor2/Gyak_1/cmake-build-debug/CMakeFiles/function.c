//
// Created by Antal József on 2021. 03. 01..
//
#include <stdio.h>
#include <stdlib.h>
#include "function.h"

float Masodperc(int n)
{
    float sec;
    sec = n/60;

    int Sec = sec;
    sec -= Sec;

    return  sec*60;
}

float Perc()